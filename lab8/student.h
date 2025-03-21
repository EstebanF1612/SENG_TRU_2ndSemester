#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "person.h"
using namespace std;


class Student : public Person {
    private:
        string status;
    public:
        Student() : Person() {
            status = "Unknown";
        }

        Student(string name, string address, long int phone, string email, string status) : Person(name, address, phone, email) {
            this->status = status;
        }

        string getStatus() {
            return status;
        }

        void setStatus(string status) {
            this->status = status;
        }

        void toString() override {
            cout<<"Class name: Student" << endl;
            cout<<"Name: " << name << endl;
        }
};

#endif