#include <iostream>
#include "quanLy.h"

using namespace std;

int main()
{
    quanLy ql;
    ql.addKhachHang();
    ql.printDS();
    ql.delKhachHang();
    ql.printDS();
    ql.tinhTien();

    return 0;
}