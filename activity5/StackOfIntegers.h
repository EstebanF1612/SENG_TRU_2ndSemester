#ifndef STACKOFINTEGERS.H
#define STACKOFINTEGERS .H
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
        return elements[size - 1];
    }

    void push(int value)
    {
        if (size < 100)
        {
            elements[size - 1] = value;
            std::cout << std::endl
                      << value << " pushed succesfully into stack\n";
            size++;
        }
        else
        {
            std::cout << "Stack of integers is full, please pop before pushing again";
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            std::cout << "Stack is empty, please push a value before popping";
        }
        else
        {
            int temp = elements[size - 1];
            delete (elements + size - 1);
            size--;
            return temp;
        }
    }

    const int getSize()
    {
        return size;
    }
};
#endif