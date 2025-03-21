#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include "person.h"
using namespace std;

class Employee : public Person {
    private:
        string office;
        int salary;
        int hireDateYear;
        int hireDateMonth;
        int hireDateDay;
    public:
        Employee() : Person() {
            office = "Unknown";
            salary = 0;
            hireDateYear = 0;
            hireDateMonth = 0;
            hireDateDay = 0;
        }

        Employee(string name, string address, long int phone, string email, string office, int salary, int hireYear, int hireMonth, int hireDay) : Person(name, address, phone, email) {
            this->office = office;
            this->salary = salary;
            this->hireDateYear = hireYear;
            this->hireDateMonth = hireMonth;
            this->hireDateDay = hireDay;
        }

        string getOffice() {
            return office;
        }

        int getSalary() {
            return salary;
        }

        int getHireDateYear() {
            return hireDateYear;
        }

        int getHireDateMonth() {
            return hireDateMonth;
        }

        int getHireDateDay() {
            return hireDateDay;
        }

        void setOffice(string office) {
            this->office = office;
        }

        void setSalary(int salary) {
            this->salary = salary;
        }

        void setHireDate(int year, int month, int day) {
            this->hireDateYear = year;
            this->hireDateMonth = month;
            this->hireDateDay = day;
        }

        void MyDate(){
            cout << "Hire Date: " << hireDateYear << "-" << hireDateMonth << "-" << hireDateDay << endl;
        }

        void toString() override {
            cout << "Class name: Employee" << endl;
            cout << "Name: " << name << endl;
        }
};

#endif