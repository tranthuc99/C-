#ifndef quanLy_h
#define quanLy_h
#include <iostream>
#include <vector>
#include "khachHang.h"
#include "bienLai.h"

class quanLy
{
private:
    vector<khachHang> kh;
    vector<bienLai> bl;
public:
    void tinhTienDien();
    void delKhachHang();
    void addKhachHang();
};

void quanLy::tinhTienDien()
{
    int soCu;
    int soMoi;
    cout << "=== Tinh tien dien cho cac ho gia dinh ===" << endl;
    for (int  i = 0; i < kh.size(); i++)
    {
        cout << kh[i].printKH() << endl;
        cout << "Nhap so cu: "; cin >> soCu;
        cout << "Nhap so moi: "; cin >> soMoi;
        bienLai it(soCu, soMoi, kh[i].getMaSo());
        cout << it.printBienLai() << endl;
        bl.push_back(it);
    }
    
    

}

void quanLy::delKhachHang()
{
    int del;
    cout << "=== Xoa thong tin ho su dung dien ===" << endl;
    cout << "Nhap ma so cong to dien: "; cin >> del;
    for (int i = 0; i < kh.size(); i++)
    {
        kh.erase(kh.begin() + del - 1);
    }
    
}

void quanLy::addKhachHang()
{
    string hoTen;
    int soNha;
    do
    {
        cout << "=== Them thong tin ho gia dinh ===" << endl;
        cout << "Nhap ho va ten chu ho: ";
        cin.ignore();
        getline(cin, hoTen);
        cout << "Nhap so nha: "; cin >> soNha;
        khachHang it(hoTen, soNha);
        kh.push_back(it);

        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n') break;
    } while (true);
    
}


#endif