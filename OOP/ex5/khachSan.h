#ifndef khachSan_h
#define khachSan_h
#include <iostream>
#include <vector>

using namespace std;

class phong
{
public:
    char loaiPhong;
    int giaPhong;
public:
    void printPhong();
    char getLoaiPhong();
    int getGiaPhong();
    void getA();
    void getB();
    void getC();
};

void phong::printPhong()
{
    cout << "Phong loai: " << loaiPhong << ", gia phong: " << giaPhong << endl;
}

char phong::getLoaiPhong()
{
    return loaiPhong;
}

int phong::getGiaPhong()
{
    return giaPhong;
}

void phong::getA()
{
    // cout << "Phong loai A, gia 500" << endl;
    this->loaiPhong = 'A';
    this->giaPhong = 500;
}

void phong::getB()
{
    this->loaiPhong = 'B';
    this->giaPhong = 300;
}

void phong::getC()
{
    this->loaiPhong = 'C';
    this->giaPhong = 100;
}

class khachSan : public phong
{
private:
    int soNgayThue;
public:
    void printSoNgayThue();
    int getSoNgayThue();
    void setSoNgayThue();
};

void khachSan::printSoNgayThue()
{
    cout << "So ngay thue: " << to_string(soNgayThue) << endl;
}

int khachSan::getSoNgayThue()
{
    return soNgayThue;
}

void khachSan::setSoNgayThue()
{
    int soNgayThue;
    cout << "Nhap so ngay thue: "; cin >> soNgayThue;
    this->soNgayThue = soNgayThue;
}






#endif