#ifndef sinhVien_h
#define sinhVien_h
#include <iostream>
#include <string>
using namespace std;

class sinhVien
{
private:
    string hoTen;
    int tuoi;
    string lop;
public:
    string printSV();
    sinhVien(string ht = "Thuc", int t = 18, string l = "MIS");
};

string sinhVien::printSV()
{
    string s = to_string(tuoi);
    return hoTen + ", " + s + ", " + lop;
}

sinhVien::sinhVien(string ht, int t, string l)
    : hoTen(ht), tuoi(t), lop(l)
{}



#endif