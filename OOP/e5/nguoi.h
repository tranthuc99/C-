#ifndef nguoi_h
#define nguoi_h
#include <iostream>
#include "khachSan.h"

using namespace std;

class nguoi : public khachSan
{
private:
    string hoTen;
    int tuoi;
    int soCmt;
public:
    int getCMT();
    string printNguoi();
    nguoi();
};

int nguoi::getCMT()
{
    return soCmt;
}

string nguoi::printNguoi()
{
    return hoTen + ", " + to_string(tuoi) \
            + ", " + to_string(soCmt);
}

nguoi::nguoi()
{
    string hoTen;
    int tuoi;
    int soCmt;
    cout << "Nhap ho va ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap tuoi: "; cin >> tuoi;
    cout << "Nhap so cmt: "; cin >> soCmt;
    this->hoTen = hoTen;
    this->tuoi = tuoi;
    this->soCmt = soCmt;
}



#endif