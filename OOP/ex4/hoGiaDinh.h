#ifndef hoGiaDinh_h
#define hoGiaDinh_h
#include <iostream>
#include <vector>
#include "nguoi.h"

using namespace std;

class hoGiaDinh
{
private:
    vector<nguoi> ng;
    int soNha;
public:
    void printHGD();
    hoGiaDinh(vector<nguoi> ng, int soNha);
};



void hoGiaDinh::printHGD()
{
    cout << "=== Hien thi thong tin ho gia dinh ===" << endl;
    cout << "So thanh vien trong gia dinh: " << ng.size() << endl;
    cout << "So nha: " << soNha << endl;
    cout << "Thong tin moi ca nha trong gia dinh:" << endl;
    for (int i = 0; i < ng.size(); i++)
    {
        cout << "Thanh vien " << i << ": " << ng[i].printNguoi() << endl;
    }
}

hoGiaDinh::hoGiaDinh(vector<nguoi> ng, int soNha)
{
    this->ng = ng;
    this->soNha = soNha;
}

#endif