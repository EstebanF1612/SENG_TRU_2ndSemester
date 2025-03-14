#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    int year;
    string gender, name, filename;
    ifstream file;

    cout<<"Enter the year: ";
    cin>>year;
    cout<<"Enter the gender: ";
    cin>>gender;
    cout<<"Enter the name: ";
    cin>>name;

    filename = "yob" + to_string(year) + ".txt";
    file.open(filename);

    if (file.fail()){
        cout<<"year not found\nExiting program...\n";
        return 0;
    }
    return 0;
}