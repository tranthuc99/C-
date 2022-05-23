#include <iostream>
#include "qlptgt.h"
#include "qlptgt.h"

using namespace std;

int main()
{
    qlptgt ql;
    ql.addPhuongTien();
    ql.printPhuongTien();
    ql.delPhuongTien();
    ql.printPhuongTien();
    ql.seaPhuongTien();

    return 0;
}