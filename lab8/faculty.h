#ifndef FACULTY_H
#define FACULTY_H

#include <string>
#include <iostream>
#include <vector>
#include "employee.h"
using namespace std;

class Faculty : public Employee {
    private:
        vector<string> officeHours;
        string rank;
    public:
        Faculty() : Employee() {
            rank = "Unknown";
        }

        Faculty(string name, string address, int phone, string email, string office, int salary, int hireYear, int hireMonth, int hireDay, string rank) : Employee(name, address, phone, email, office, salary, hireYear, hireMonth, hireDay) {
            this->rank = rank;
        }

        vector<string> getOfficeHours() {
            return officeHours;
        }

        void addOfficeHour(string officeHour) {
            officeHours.push_back(officeHour);
        }

        void addOfficeHours(vector<string> officeHours) {
            for (const string& hour : officeHours) {
                this->officeHours.push_back(hour);
            }
        }

        void clearOfficeHours() {
            officeHours.clear();
        }

        string getRank() {
            return rank;
        }

        void setRank(string rank) {
            this->rank = rank;
        }

        void toString() override {
            cout << "Class name: Faculty" << endl;
            cout << "Name: " << name << endl;
        }
};

#endif