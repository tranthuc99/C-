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
    string getHoTen();
    int getSoNha();
    void setHoTen(string);
    void setSoNha(int);
    khachHang(string ht, int sn, int ms);
};

string khachHang::printKH()
{
    return hoTen + ", " + to_string(soNha) + to_string(maSo);
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

khachHang::khachHang(string ht, int sn, int ms)
    : hoTen(ht), soNha(sn), maSo(ms)
{}





#endif