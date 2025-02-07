#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

void inputStackValue(StackOfIntegers* TargetStack){
    int* tempLocalVar = new int;
    
    cout<<"=================\nInput your value: ";
    cin>>*tempLocalVar;
    TargetStack->push(*tempLocalVar);

    delete tempLocalVar;
}

void printMenu(){
    cout<<"==================\nMenu\n==============\n0 - exit\n1 - peek\n2 - push new value\n3 - pop value\n4 - get current stack size\n5 - check if stack is empty\n\nChoice: ";
}

int main(){

    StackOfIntegers Stack1;

    int numval = 0;
    cout<<"How many input values: ";
    cin>>numval;

    for (int i = 0; i<numval; i++){
        inputStackValue(&Stack1);
    }

    int menuChoice = 9;
    int tempPushValue;

    do{
        printMenu();
        cin>>menuChoice;
        switch (menuChoice){
            case 0:
                break;
            case 1:
                if (Stack1.isEmpty()){
                    cout<<"Stack is empty, please push a value before peeking"<<endl;
                    break;
                }
                else{
                    cout<<"Peek value: "<<Stack1.peek()<<endl;
                }
                break;
            case 2:
                cout<<"Input Value: ";
                cin>>tempPushValue;
                Stack1.push(tempPushValue);
                break;
            case 3:
                if (Stack1.isEmpty()){
                    cout<<"Stack is empty, please push a value before popping"<<endl;
                    break;
                }
                else{
                    cout<<"Pop value is "<<Stack1.pop()<<"... it has been deleted from the stack"<<endl;
                }
                break;
            case 4:
                cout<<"Current stack size: "<<Stack1.getSize()<<endl; 
                break;
            case 5:
                (Stack1.isEmpty() ? cout<<"Stack is Empty"<<endl: cout<<"Stack is not empty"<<endl);
                break;
            default:
                cout<<"\n\nError: Invalid choice";
                break;
        }
    } while (menuChoice != 0);

    Stack1.~StackOfIntegers();

    return 0;
}