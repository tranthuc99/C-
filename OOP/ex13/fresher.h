#ifndef fresher_h
#define fresher_h
#include <iostream>
#include "employee.h"

using namespace std;

class fresher : public employee
{
private:
    string graduationDate;
    char graduationRank;
    string education;
public:
    void showInfo();
    fresher(int id, string fn, string bd, string p, string e, int et, string gd, char gr, string edu);
    ~fresher();
};

void fresher::showInfo()
{
    cout << "=== Fresher ===" << endl;
    cout << "ID: " << id << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Birthday: " << birthDay << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "employee_type: " << employee_type << endl;
    cout << "employee_count: " << employee_count << endl;
    cout << "graduationDate: " << graduationDate << endl;
    cout << "graduationRank: " << graduationRank << endl;
    cout << "education: " << education << endl;
    cout << "=======================" << endl;
}

fresher::fresher(int id, string fn, string bd, string p, string e, int et, string gd, char gr, string edu)
    : employee(id, fn, bd, p, e, et), graduationDate(gd), graduationRank(gr), education(edu)
{}

fresher::~fresher()
{
}



#endif