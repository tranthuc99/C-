#ifndef intern_h
#define intern_h
#include <iostream>
#include "employee.h"

using namespace std;

class intern : public employee
{
private:
    string majors;
    int semester;
    string universityName;
public:
    void showInfo();
    intern(int id, string fn, string bd, string p, string e, int et, string ma, int sem, string uni);
    ~intern();
};

void intern::showInfo()
{
    cout << "=== Intern ===" << endl;
    cout << "ID: " << id << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Birthday: " << birthDay << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "employee_type: " << employee_type << endl;
    cout << "employee_count: " << employee_count << endl;
    cout << "majors: " << majors << endl;
    cout << "semester: " << semester << endl;
    cout << "universityName: " << universityName << endl;
    cout << "=======================" << endl;
}

intern::intern(int id, string fn, string bd, string p, string e, int et, string ma, int sem, string uni)
    : employee(id, fn, bd, p, e, et), majors(ma), semester(sem), universityName(uni)
{}

intern::~intern()
{
}



#endif