#include <iostream>
#include <string>
#include "quanLy.h"

using namespace std;

int main()
{
    sinhVien a;
    theMuon b;
    quanLy quanLy(a, b);
    quanLy.addThongTin();
    quanLy.hienThiTT();
    quanLy.delThongTin();
    quanLy.hienThiTT();

    return 0;
}