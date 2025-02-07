#include "Accounts.h"
#include <iostream>
using namespace std;

int getAChoice()
{
    int choice;
    cin >> choice;
    return choice;
}

void printMenu()
{
    cout << "Main Menu" << endl;
    cout << "1: check balance" << endl;
    cout << "2: withdraw" << endl;
    cout << "3: deposit" << endl;
    cout << "4: exit" << endl;
    cout << "Enter a choice: ";
}

int main()
{

    Account accounts[10];
    int menuOption;

    for (int i = 0; i < 10; i++)
    {
        accounts[i].setId(i);
    }

    int tempId;
    do
    {

        cout << "Enter an id: ";
        cin >> tempId;
        if (tempId >= 0 && tempId < 10)
        {
            break;
        }
        else
        {
            cout << "Invalid Id: Please enter a valid Id\n";
        }
    } while (true);

    do
    {

        printMenu();
        menuOption = accounts[tempId].switchControl(getAChoice());
        
    } while (menuOption != 4);

    return 0;
}