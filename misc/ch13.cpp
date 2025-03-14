#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Create and write to a file
    fstream file("example.txt", ios::out | ios::trunc);
    if (!file) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    file << "Hello, this is a test file.";
    file.close();

    // Open file in read/write mode
    fstream fileRW("example.txt", ios::in | ios::out);
    if (!fileRW) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Demonstrate tellg() and seekg() (for input)
    cout << "\nDemonstrating seekg() and tellg() (input positioning):\n";
    fileRW.seekg(7, ios::beg);
    cout << "tellg() after seekg(7, ios::beg): " << fileRW.tellg() << endl;

    fileRW.seekg(-5, ios::end);
    cout << "tellg() after seekg(-5, ios::end): " << fileRW.tellg() << endl;

    fileRW.seekg(3, ios::cur);
    cout << "tellg() after seekg(3, ios::cur): " << fileRW.tellg() << endl;

    // Demonstrate tellp() and seekp() (for output)
    cout << "\nDemonstrating seekp() and tellp() (output positioning):\n";

    fileRW.seekp(5, ios::beg);
    cout << "tellp() after seekp(5, ios::beg): " << fileRW.tellp() << endl;
    fileRW.put('*'); // Overwrite a character

    fileRW.seekp(-3, ios::end);
    cout << "tellp() after seekp(-3, ios::end): " << fileRW.tellp() << endl;
    fileRW.put('@'); // Overwrite a character

    // Close file
    fileRW.close();

    // Display modified content
    ifstream inFile("example.txt");
    cout << "\nModified file content:\n";
    string content;
    while (getline(inFile, content)) {
        cout << content << endl;
    }
    inFile.close();

    return 0;
}
