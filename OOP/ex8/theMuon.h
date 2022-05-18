#ifndef theMuon_h
#define theMuon_h
#include <iostream>
#include <string>
using namespace std;

class theMuon
{
private:
    int maPhieu;
    int ngayMuon;
    int hanTra;
    int soHieuSach;
public:
    int getMaPhieu();
    string printTM();
    theMuon(int mp = 0, int nm = 0, int ht = 0, int shs = 0);
};

int theMuon::getMaPhieu()
{
    return maPhieu;
}

string theMuon::printTM()
{
    return to_string(maPhieu) + ", " + to_string(ngayMuon) + \
    ", " + to_string(hanTra) + ", " + to_string(soHieuSach);
}

theMuon::theMuon(int mp, int nm, int ht, int shs)
    : maPhieu(mp), ngayMuon(nm), hanTra(ht), soHieuSach(shs)
{}





#endif