#ifndef STACKOFINTEGERS_H
#define STACKOFINTEGERS_H
#include <iostream>

class StackOfIntegers
{
private:
    int *elements = new int[100];
    int size;

public:
    StackOfIntegers()
    {
        size = 0;
    }
    const bool isEmpty()
    {
        return ((size == 0) ? true : false);
    }
    const int peek()
    {
        if (isEmpty())
        {
            std::cout << "=== Stack is empty, please push a value before peeking --- Error:";
            return -9999999;
        }
        return elements[size - 1];
    }

    void push(int value)
    {
        if (size < 100)
        {
            elements[size] = value;
            std::cout << std::endl
                      << value << " pushed succesfully into stack\n";
            size++;
        }
        else
        {
            std::cout << "=== Stack of integers is full, please pop before pushing again";
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            std::cout << "=== Stack is empty, please push a value before popping --- Error:";
        }
        else
        {
            // I tried using delete command for the last element but it gave me an error
            
            int temp = elements[size - 1];
            elements[size - 1] = 0;
            size--;
            return temp;
        }
        return -999999999;
    }

    const int getSize()
    {
        return size;
    }

    ~StackOfIntegers()
    {
        delete[] elements;
    }
};
#endif