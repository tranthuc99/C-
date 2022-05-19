#ifndef bienLai_h
#define bienLai_h
#include <iostream>

using namespace std;

class bienLai
{
private:
    int soCu;
    int soMoi;
    int tienDien;
    int maSo;
public:
    string printBienLai();
    void tinhTienDien();
    bienLai(int sc, int sm, int ms);
};

string bienLai::printBienLai()
{
    return "So cu: " + to_string(soCu) + ", So moi: " \
    + to_string(soMoi) + ", Tien dien: " + to_string(tienDien);
}

void bienLai::tinhTienDien()
{
    tienDien = 5 * (soMoi - soCu);
}

bienLai::bienLai(int sc, int sm, int ms)
    : soCu(sc), soMoi(sm), maSo(ms)
{
    this->tinhTienDien();
}




#endif