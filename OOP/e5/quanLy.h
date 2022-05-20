#ifndef quanLy_h
#define quanLy_h
#include <iostream>
#include <vector>
#include "nguoi.h"

class quanLy
{
private:
    vector<nguoi> ng;
public:
    void tinhTien();
    void printDS();
    void delKhachHang();
    void addKhachHang();
};

void quanLy::tinhTien()
{
    int cmt;
    cout << "=== Tinh tien thue phong cho khach hang ===" << endl;
    cout << "Nhap so chung minh thu: "; cin >> cmt;
    for (int i = 0; i < ng.size(); i++)
    {
        if (ng[i].getCMT() == cmt)
        {
            cout << "Khach hang: " << ng[i].printNguoi() << endl;
            ng[i].printPhong();
            ng[i].printSoNgayThue();

            int tienPhong;
            tienPhong = (ng[i].getSoNgayThue()) * (ng[i].getGiaPhong());
            cout << "Tien thue phong la: " << tienPhong << endl;

        }
        
    }
    
}

void quanLy::printDS()
{
    cout << "\n=== In thong tin phong cua khach san X ===" << endl;
    for (int i = 0; i < ng.size(); i++)
    {
        cout << ng[i].printNguoi() << endl;
        ng[i].printPhong();
        ng[i].printSoNgayThue();
        cout << "---------------------------------------" << endl;
    }
    
}

void quanLy::delKhachHang()
{
    cout << "\n=== Xoa khach hang theo so cmtnd ===" << endl;
    int del;
    cout << "Nhap so chung minh thu: "; cin >> del;
    for (int i = 0; i < ng.size(); i++)
    {
        if (ng[i].getCMT() == del)
        {
            ng.erase(ng.begin() + i);
        }
        
    }
}

void quanLy::addKhachHang()
{
    do
    {
        cout << "=== THEM MOI KHACH HANG VAO PHONG CUA KHACH SAN X ===" << endl;
        nguoi it;
        it.setSoNgayThue();
        char loaiPhong;
        cout << "Nhap loai phong (loai: A, B, C): "; cin >> loaiPhong;
        if (loaiPhong == 'a' || loaiPhong == 'A')
        {
            it.getA();
        }
        else if (loaiPhong == 'b' || loaiPhong == 'B')
        {
            it.getB();
        }
        else if (loaiPhong == 'c' || loaiPhong == 'C')
        {
            it.getC();
        }
        ng.push_back(it);

        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n') break;
    } while (true);
    
}




#endif