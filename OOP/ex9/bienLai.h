#ifndef bienLai_h
#define bienLai_h
#include <iostream>
#include "khachHang.h"

using namespace std;

class bienLai
{
private:
    khachHang kh;
    int soCu;
    int soMoi;
public:
    bienLai(int sc, int sm, khachHang kh);
};

bienLai::bienLai(int sc, int sm, khachHang kh)
{
    this->kh = kh;
    this->soCu = sc;
    this->soMoi = sm;
}




#endif