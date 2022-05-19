#ifndef khuPho_h
#define khuPho_h
#include <iostream>
#include <vector>
#include "hoGiaDinh.h"

using namespace std;

class khuPho
{
private:
    vector<hoGiaDinh> hgd;
    vector<nguoi> ng;

public:
    vector<hoGiaDinh> addHGD();
    vector<nguoi> addNguoi();
};

vector<hoGiaDinh> khuPho::addHGD()
{
    vector<hoGiaDinh> hgd;
    vector<nguoi> ng;
    int soNha;
    int i = 0;
    do
    {
        cout << "=== THEM HO GIA DINH " << i+1 << " TRONG KHU PHO X ===" << endl;
        ng = this->addNguoi();
        cout << "Nhap so nha: "; cin >> soNha;
        hoGiaDinh ho(ng, soNha);
        hgd.push_back(ho);
        i++;
        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n') break;
    } while (true);

    return hgd;
}

vector<nguoi> khuPho::addNguoi()
{
    vector<nguoi> ng;
    string hoTen;
    int tuoi;
    string ngheNghiep;
    int soCMT;
    do
    {
        cout << "=== Them thanh vien trong ho gia dinh ===" << endl;
        cout << "Nhap ho va ten: ";
        cin.ignore();
        getline(cin, hoTen);
        cout << "Nhap tuoi: "; cin >> tuoi;
        cout << "Nhap nghe nghiep: ";
        cin.ignore();
        getline(cin, ngheNghiep);
        cout << "Nhap so cmtnd: "; cin >> soCMT;
        nguoi it(hoTen, tuoi, ngheNghiep, soCMT);
        
        ng.push_back(it);

        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n') break;

    } while (true);
    return ng;
}


#endif