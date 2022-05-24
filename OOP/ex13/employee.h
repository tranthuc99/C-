#ifndef employee_h
#define employee_h
#include <iostream>

using namespace std;

class employee
{
protected:
    int id;
    string fullName;
    string birthDay;
    string phone;
    string email;
    int employee_type;
    int employee_count;
public:
    virtual void showInfo(){};
    employee(int id, string fn, string bd, string p, string e, int et);
    ~employee();
};

employee::employee(int id, string fn, string bd, string p, string e, int et)
    : id(id), fullName(fn), birthDay(bd), phone(p), email(e), employee_type(et)
{
    this->employee_count += 1;
}

employee::~employee()
{
}




#endif