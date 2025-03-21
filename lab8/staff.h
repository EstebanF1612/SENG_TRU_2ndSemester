#ifndef STAFF_H
#define STAFF_H

#include <string>
#include <iostream>
#include "employee.h"
using namespace std;

class Staff : public Employee {
    private:
        string title;
    public:
        Staff() : Employee() {
            title = "Unknown";
        }

        Staff(string name, string address, long int phone, string email, string office, int salary, int hireYear, int hireMonth, int hireDay, string title) : Employee(name, address, phone, email, office, salary, hireYear, hireMonth, hireDay) {
            this->title = title;
        }

        string getTitle() {
            return title;
        }

        void setTitle(string title) {
            this->title = title;
        }

        void toString() override {
            cout << "Class name: Staff" << endl;
            cout << "Name: " << name << endl;
        }
};

#endif