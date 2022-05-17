#ifndef cbgv_h
#define cbgv_h
#include <iostream>
#include <vector>
#include "nguoi.h"
using namespace std;

class cbgv : public nguoi
{
private:
    double luongCung;
    double luongThuong;
    double tienPhat;
    double luongThucLinh;
    vector<cbgv> danhsach;
public:
    void delCanbo();
    void hienthiDanhSach();
    void printCB();
    void addCanbo();
    cbgv(double lc = 1, double lt = 1, double tp = 1, double tl = 1, \
        string ht = "Thuc", int t = 18, string q = "tn", int ms = 0);
    ~cbgv();
};

void cbgv::delCanbo()
{
    int del;
    cout << "--- Xoa can bo giao vien ---" << endl;
    cout << "Nhap ma so giao vien: "; cin >> del;
    for (int i = 0; i < danhsach.size(); i++)
    {
        if (del == danhsach[i].getMaSo())
        {
            danhsach.erase(danhsach.begin() + del - 1);
        }
    }

}

void cbgv::hienthiDanhSach()
{
    for (int i = 0; i < danhsach.size(); i++)
    {
        danhsach[i].printCB();
    }
}

void cbgv::printCB()
{
    cout << hoTen << ", " << tuoi << ", " << queQuan << ", " << maSo \
    << ", " << luongThucLinh << endl;
}

void cbgv::addCanbo()
{
    string hoTen;
    int tuoi;
    string queQuan;
    int maSo = 0;
    double luongCung;
    double luongThuong;
    double tienPhat;
    double luongThucLinh;

    do
    {   
        cout << "--- Them can bo giao vien ---" << endl;
        cout << "Nhap ho va ten: ";
        cin.ignore();
        getline(cin, hoTen);
        cout << "Nhap tuoi: "; cin >> tuoi;
        cout << "Nhap que quan: ";
        cin.ignore();
        getline(cin, queQuan);
        cout << "Nhap luong cung: "; cin >> luongCung;
        cout << "Nhap luong thuong: "; cin >> luongThuong;
        cout << "Nhap tien phat: "; cin >> tienPhat;
        luongThucLinh = luongCung + luongThuong - tienPhat;
        ++maSo;
        cbgv *canbo = new cbgv(luongCung, luongThuong, tienPhat, luongThucLinh, \
                                    hoTen, tuoi, queQuan, maSo);
        danhsach.push_back(*canbo);

        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n')
        {
            cout << "-----------------------------" << endl;
            break;
        }

    } while (true);

}

cbgv::cbgv(double lc, double lt, double tp, double tl, string ht, int t, string q, int ms)
    : luongCung(lc), luongThuong(lt), tienPhat(tp), luongThucLinh(tl), nguoi(ht, t, q, ms)
{}

cbgv::~cbgv()
{
}




#endif