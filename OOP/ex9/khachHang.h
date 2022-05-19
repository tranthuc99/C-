#ifndef khachHang_h
#define khachHang_h
#include <iostream>
using namespace std;

class khachHang
{
private:
    string hoTen;
    int soNha;
    int maSo;
public:
    string printKH();
    int getMaSo();
    string getHoTen();
    int getSoNha();
    void setHoTen(string);
    void setSoNha(int);
    khachHang(string ht, int sn);
};

string khachHang::printKH()
{
    return "Ho ten: " + hoTen + ", So nha: " + to_string(soNha) + \
            ", Ma so cong to dien: " + to_string(maSo);
}

int khachHang::getMaSo()
{
    return maSo;
}

string khachHang::getHoTen()
{
    return hoTen;
}
int khachHang::getSoNha()
{
    return soNha;
}
void khachHang::setHoTen(string ht)
{
    this->hoTen = ht;
}
void khachHang::setSoNha(int sn)
{
    this->soNha = sn;
}

int ms = 1;
khachHang::khachHang(string ht, int sn)
    : hoTen(ht), soNha(sn)
{
    this->maSo = ms;
    ms++;
}





#endif