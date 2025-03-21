#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    string address;
    long int phoneNumber;
    string email;

public:
    Person()
    {
    }
    Person(string name, string address, int phone, string email)
    {
        this->name = name;
        this->address = address;
        this->phoneNumber = phone;
        this->email = email;
    }

    string getName()
    {
        return name;
    }

    string getAddress()
    {
        return address;
    }

    int getPhoneNumber()
    {
        return phoneNumber;
    }

    string getEmail()
    {
        return email;
    }

    void setPhoneNumber(int phone)
    {
        this->phoneNumber = phone;
    }

    void setEmail(string email)
    {
        this->email = email;
    }

    void setAddress(string address)
    {
        this->address = address;
    }

    void setName(string name)
    {
        this->name = name;
    }

    virtual void toString()
    {
        cout << "Class name: Person" << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Email: " << email << endl;
    }
};
#endif