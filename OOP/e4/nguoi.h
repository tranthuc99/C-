#ifndef nguoi_h
#define nguoi_h
#include <iostream>

using namespace std;

class nguoi
{
private:
    string hoTen;
    int tuoi;
    string ngheNghiep;
    int soCMT;
public:
    string printNguoi();
    nguoi(string ht, int t, string nn, int cmt);
};

string nguoi::printNguoi()
{
    return "Ho va ten: " + hoTen + ", Tuoi: " + to_string(tuoi) \
    + ", Nghe nghiep: " + ngheNghiep + ", So cmtnd: " + to_string(soCMT);
}

nguoi::nguoi(string ht, int t, string nn, int cmt)
    : hoTen(ht), tuoi(t), ngheNghiep(nn), soCMT(cmt)
{}


#endif