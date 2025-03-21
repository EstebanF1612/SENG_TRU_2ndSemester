#include <iostream>
#include "person.h"
#include "student.h"
#include "employee.h"
#include "faculty.h"
#include "staff.h"
using namespace std;

int main()
{

    Person person("Jeremy", "123 Main St", 1234567890, "jeremy@gmail.com");
    person.toString();
    cout << endl;
    Student student("Brock", "456 Elm St", 9876543210, "brock.@gmail.com", "Freshman");
    student.toString();
    cout << endl;
    Employee employee("Alice", "789 Oak St", 5555555555, "alice@outlook.com", "Accounting Office", 50000, 2020, 1, 15);
    employee.toString();
    cout << endl;
    Faculty faculty("Smith", "101 Pine St", 1112223333, "smith@tru.ca", "Faculty Office", 70000, 2018, 8, 20, "Professor");
    faculty.addOfficeHour("Monday 10 AM - 12 PM");
    faculty.addOfficeHour("Wednesday 2 PM - 4 PM");
    faculty.toString();
    cout << endl;
    Staff staff("Johnson", "202 Maple St", 4445556666, "johnson@tru.ca", "Staff Office", 60000, 2019, 5, 10, "Administrative Assistant");
    staff.toString();
    cout << endl;

    return 0;
}