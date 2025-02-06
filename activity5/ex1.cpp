#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main(){

    StackOfIntegers Stack1;

    (Stack1.isEmpty() ? cout<<"Stack is Empty"<<endl: cout<<"Stack is not empty"<<endl);

    Stack1.push(4);

    (Stack1.isEmpty() ? cout<<"Stack is Empty"<<endl: cout<<"Stack is not empty"<<endl);
    cout<<"Outside value: "<<Stack1.peek()<<endl;
    cout<<"Size: "<<Stack1.getSize()<<endl;
    


    return 0;
}