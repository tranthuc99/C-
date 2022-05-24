#ifndef experience_h
#define experience_h
#include <iostream>
#include "employee.h"

using namespace std;

class experience : public employee
{
private:
    int expInYear;
    string proSkill;
public:
    void showInfo();
    experience(int id, string fn, string bd, string p, string e, int et, int eiy, string ps);
    ~experience();
};

void experience::showInfo()
{
    cout << "=== Experience ===" << endl;
    cout << "ID: " << id << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Birthday: " << birthDay << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "employee_type: " << employee_type << endl;
    cout << "employee_count: " << employee_count << endl;
    cout << "Exp in year: " << expInYear << endl;
    cout << "proSkill: " << proSkill << endl;
    cout << "=======================" << endl;
}

experience::experience(int id, string fn, string bd, string p, string e, int et, int eiy, string ps)
    : employee(id, fn, bd, p, e, et), expInYear(eiy), proSkill(ps)
{}

experience::~experience()
{
}



#endif