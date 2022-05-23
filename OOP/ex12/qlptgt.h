#ifndef qlptgt_h
#define qlptgt_h
#include <iostream>
#include "phuongtien.h"

using namespace std;

class qlptgt
{
private:
    int num;
    phuongTien *pt[100];
public:
    void seaPhuongTien();
    void delPhuongTien();
    void printPhuongTien();
    void addPhuongTien();
};

void qlptgt::seaPhuongTien()
{
    string sea;
    cout << "\n=== TIM PHUONG TIEN GIAO THONG ===" << endl;
    cout << "Nhap mau cua phuong tien: ";
    cin.ignore();
    getline(cin, sea);

    for (int i = 0; i <= num; i++)
    {
        if (sea == pt[i]->getMauXe())
        {
            pt[i]->printPT();
            break;
        }
        
    }
}

void qlptgt::delPhuongTien()
{
    int del;
    cout << "\n=== XOA PHUONG TIEN GIAO THONG ===" << endl;
    cout << "Nhap ID phuong tien: "; cin >> del;
    for (int i = 0; i <= num; i++)
    {
        if (del == pt[i]->getID())
        {
            pt[i] = nullptr;
            break;
        }
        
    }
}

void qlptgt::printPhuongTien()
{
    cout << "\n=== DANH SACH PHUONG TIEN GIAO THONG ===" << endl;
    for (int i = 0; i <= num; i++)
    {
        pt[i]->printPT();
        cout << "--------------------------" << endl;
    }
    
}

void qlptgt::addPhuongTien()
{
    string hangSanXuat;
    int namSanXuat;
    int giaBan;
    string mauXe;

    int soChoNgoi;
    string kieuDongCo;
    int congXuat;
    int trongTai;

    cout << "=== THEM PHUONG TIEN GIAO THONG ===" << endl;
    int i = 0;
    for (i; true ; i++)
    {
        cout << "Nhap hang san xuat: ";
        cin.ignore();
        getline(cin, hangSanXuat);
        cout << "Nhap nam san xuat: "; cin >> namSanXuat;
        cout << "Nhap gia ban: "; cin >> giaBan;
        cout << "Nhap mau xe: ";
        cin.ignore();
        getline(cin, mauXe);

        char choice;
        cout << "Oto (O), Xe may (M), Xe tai (T). Chon 1: "; cin >> choice;
        if (choice == 'O' || choice == 'o')
        {
            cout << "Nhap so cho ngoi: "; cin >> soChoNgoi;
            cout << "Nhap kieu dong co: ";
            cin.ignore();
            getline(cin, kieuDongCo);
            pt[i] = new oto(hangSanXuat, namSanXuat, giaBan, mauXe, soChoNgoi, kieuDongCo);
        }
        else if (choice == 'M' || choice == 'm')
        {
            cout << "Nhap cong xuat xe: "; cin >> congXuat;
            pt[i] = new xeMay(hangSanXuat, namSanXuat, giaBan, mauXe, congXuat);
        }
        else if (choice == 'T' || choice == 't')
        {
            cout << "Nhap trong tai xe: "; cin >> trongTai;
            pt[i] = new xeTai(hangSanXuat, namSanXuat, giaBan, mauXe, trongTai);
        }
        
        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n') break;
    }
    this->num = i;
}



#endif