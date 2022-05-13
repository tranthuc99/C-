#include <iostream>
#include <string>
using namespace std;

// --------------------TAI LIEU---------------------------
class taiLieu
{
private:
    int maTaiLieu;
    string nhaXuatBan;
    int banPhatHanh;
public:
    taiLieu(int mtl, string nxb, int bph)
        : maTaiLieu(mtl), nhaXuatBan(nxb), banPhatHanh(bph)
    {}

    int getMaTaiLieu();
    string getNhaXuatBan();
    int getBanPhatHanh();
};

// --------------------SACH---------------------------
class sach : public taiLieu
{
private:
    string tenTacGia;
    int soTrang;
public:
    sach(int mtl, string nxb, int bph, string ttg, int st)
        : taiLieu(mtl, nxb, bph), tenTacGia(ttg), soTrang(st)
    {}

    string getTenTacGia();
    int getSoTrang();
};

// --------------------TAP CHI---------------------------
class tapChi : public taiLieu
{
private:
    int soPhatHanh;
    int thangPhatHanh;
public:
    tapChi(int mtl, string nxb, int bph, int sph, int tph)
        : taiLieu(mtl, nxb, bph), soPhatHanh(sph), thangPhatHanh(tph)
    {}

    int getSoPhatHanh();
    int getThangPhatHanh();
};

// --------------------BAO---------------------------
class bao : public taiLieu
{
private:
    int ngayPhatHanh;
public:
    bao(int mtl, string nxb, int bph, int nph)
        : taiLieu(mtl, nxb, bph), ngayPhatHanh(nph)
    {}

    int getNgayPhatHanh();
};

// -----------------------------------------------
int taiLieu::getMaTaiLieu()
{
    return maTaiLieu;
}

string taiLieu::getNhaXuatBan()
{
    return nhaXuatBan;
}

int taiLieu::getBanPhatHanh()
{
    return banPhatHanh;
}

string sach::getTenTacGia()
{
    return tenTacGia;
}

int sach::getSoTrang()
{
    return soTrang;
}

int tapChi::getSoPhatHanh()
{
    return soPhatHanh;
}

int tapChi::getThangPhatHanh()
{
    return thangPhatHanh;
}

int bao::getNgayPhatHanh()
{
    return ngayPhatHanh;
}

// --------------------QUAN LY SACH---------------------------
class quanLySach
{
private:

public:
    void addTaiLieu();
    void delTaiLieu(int);
    void infoTaiLieu();
    void searchTaiLieu();
};


int main()
{

    return 0;
}