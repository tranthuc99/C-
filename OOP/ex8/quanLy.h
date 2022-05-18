#ifndef quanLy_h
#define quanLy_h
#include <istream>
#include <vector>
#include "sinhVien.h"
#include "theMuon.h"

using namespace std;

class quanLy
{
private:
    sinhVien sv;
    theMuon tm;
    vector<quanLy> danhsach;
public:
    void delThongTin();
    void hienThiTT();
    void addThongTin();
    quanLy(sinhVien sv, theMuon tm);
};

void quanLy::delThongTin()
{
    int del;
    cout << "=== Xoa thong tin theo ma phieu muon ===" << endl;
    cout << "Nhap ma phieu: "; cin >> del;
    int n = danhsach.size();
    for (int i = 0; i < n; i++)
    {
        if (del == danhsach[i].tm.getMaPhieu())
        {
            danhsach.erase(danhsach.begin() + del -1);
        }
        
    }
}

void quanLy::hienThiTT()
{
    cout << "=== Hien thi thong tin ===" << endl;
    int n = danhsach.size();
    for (int i = 0; i < n; i++)
    {
        cout << danhsach[i].sv.printSV() << ", " << danhsach[i].tm.printTM() << endl;
    }
}

void quanLy::addThongTin()
{
    string hoTen;
    int tuoi;
    string lop;
    int maPhieu = 0;
    int ngayMuon;
    int hanTra;
    int soHieuSach;
    do
    {
        cout << "=== Nhap thong tin sinh vien ===" << endl;
        cout << "Nhap ho va ten: ";
        cin.ignore();
        getline(cin, hoTen);
        cout << "Nhap tuoi: "; cin >> tuoi;
        cout << "Nhap lop: ";
        cin.ignore();
        getline(cin, lop);
        ++maPhieu;
        // cout << "Nhap ma phieu muon: "; cin >> maPhieu;
        cout << "Nhap ngay muon: "; cin >> ngayMuon;
        cout << "Nhap han tra: "; cin >> hanTra;
        cout << "Nhap so hieu sach: "; cin >> soHieuSach;

        sinhVien sv(hoTen, tuoi, lop);
        theMuon tm(maPhieu, ngayMuon, hanTra, soHieuSach);

        quanLy *ql = new quanLy(sv, tm);
        danhsach.push_back(*ql);
        delete ql;

        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n') break;

    } while (true);
    
}

quanLy::quanLy(sinhVien sv, theMuon tm)
{
    this->sv = sv;
    this->tm = tm;
}



#endif