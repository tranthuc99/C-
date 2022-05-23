#ifndef phuongtien_h
#define phuongtien_h
#include <iostream>

using namespace std;

// ================= PHUONG TIEN =================
class phuongTien
{
protected:
    int id;
    string hangSanXuat;
    int namSanXuat;
    int giaBan;
    string mauXe;
public:
    string getMauXe();
    int getID();
    phuongTien(string hsx, int nsx, int gb, string mx);
    virtual void printPT() = 0;
    virtual ~phuongTien(){};
};

string phuongTien::getMauXe()
{
    return mauXe;
}

int phuongTien::getID()
{
    return id;
}

int i = 1;
phuongTien::phuongTien(string hsx, int nsx, int gb, string mx)
    : hangSanXuat(hsx), namSanXuat(nsx), giaBan(gb), mauXe(mx)
{
    this->id = i;
    i++;
}

// ================= OTO =================
class oto : public phuongTien
{
private:
    int soChoNgoi;
    string kieuDongCo;
public:
    void printPT();
    oto(string hsx, int nsx, int gb, string mx, int scn, string kdc);
    virtual ~oto(){};
};

void oto::printPT()
{
    cout << "-- Phuong tien Oto:" << endl;
    cout << "ID: " << id << endl;
    cout << "Hang san xuat: " << hangSanXuat << endl;
    cout << "Nam san xuat: " << namSanXuat << endl;
    cout << "Gia ban: " << giaBan << endl;
    cout << "Mau xe: " << mauXe << endl;
    cout << "So cho ngoi: " << soChoNgoi << endl;
    cout << "Kieu dong co: " << kieuDongCo << endl;
}

oto::oto(string hsx, int nsx, int gb, string mx, int scn, string kdc)
    : phuongTien(hsx, nsx, gb, mx), soChoNgoi(scn), kieuDongCo(kdc)
{}

// ================= XE MAY =================
class xeMay : public phuongTien
{
private:
    int congXuat;
public:
    void printPT();
    xeMay(string hsx, int nsx, int gb, string mx, int cx);
    virtual ~xeMay(){};
};

void xeMay::printPT()
{
    cout << "-- Phuong tien xe may:" << endl;
    cout << "ID: " << id << endl;
    cout << "Hang san xuat: " << hangSanXuat << endl;
    cout << "Nam san xuat: " << namSanXuat << endl;
    cout << "Gia ban: " << giaBan << endl;
    cout << "Mau xe: " << mauXe << endl;
    cout << "Cong xuat xe: " << congXuat << endl;
}

xeMay::xeMay(string hsx, int nsx, int gb, string mx, int cx)
    : phuongTien(hsx, nsx, gb, mx), congXuat(cx)
{}

// ================= XE TAI =================
class xeTai : public phuongTien
{
private:
    int trongTai;
public:
    void printPT();
    xeTai(string hsx, int nsx, int gb, string mx, int tt);
    virtual ~xeTai(){};
};

void xeTai::printPT()
{
    cout << "-- Phuong tien xe tai:" << endl;
    cout << "ID: " << id << endl;
    cout << "Hang san xuat: " << hangSanXuat << endl;
    cout << "Nam san xuat: " << namSanXuat << endl;
    cout << "Gia ban: " << giaBan << endl;
    cout << "Mau xe: " << mauXe << endl;
    cout << "Trong tai xe: " << trongTai << endl;
}

xeTai::xeTai(string hsx, int nsx, int gb, string mx, int tt)
    : phuongTien(hsx, nsx, gb, mx), trongTai(tt)
{}



#endif