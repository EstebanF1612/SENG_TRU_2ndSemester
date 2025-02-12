#include <iostream>
using namespace std;

void smallestElement(const int* list, int size){
    int smallElem = list[0];

    for (int i=1; i<size; i++){
        if (list[i]<smallElem){
            smallElem = list[i];
        }
    }

    cout<<smallElem;
}

int main(){
    int list[8] = {6, 7, 9, 10, 15, 3, 99, -21};
    cout<<"The min is ";
    smallestElement(list, 8);
    return 0;
}