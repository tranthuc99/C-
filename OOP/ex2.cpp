#include <iostream>
#include <string>
using namespace std;

// --------------------TAI LIEU---------------------------
class taiLieu
{
protected:
    int maTaiLieu;
    string nhaXuatBan;
    int banPhatHanh;
public:
    taiLieu(int mtl, string nxb, int bph)
        : maTaiLieu(mtl), nhaXuatBan(nxb), banPhatHanh(bph)
    {}
    virtual void inSach() = 0;
    virtual string taiLieuGi() = 0;
    virtual ~taiLieu(){};
    int getMaTaiLieu();
};

int taiLieu::getMaTaiLieu()
{
    return maTaiLieu;
}


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
    string taiLieuGi();
    void inSach();
};

string sach::taiLieuGi()
{
    return "sach";
}

void sach::inSach()
{
    cout << maTaiLieu << " " << nhaXuatBan << " " << banPhatHanh << " " \
    << tenTacGia << " " << soTrang << endl;
}

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
    string taiLieuGi();
    void inSach();
};

string tapChi::taiLieuGi()
{
    return "tapchi";
}

void tapChi::inSach()
{
    cout << maTaiLieu << " " << nhaXuatBan << " " << banPhatHanh << " " \
    << soPhatHanh << " " << thangPhatHanh << endl;
}

// --------------------BAO---------------------------
class bao : public taiLieu
{
private:
    int ngayPhatHanh;
public:
    bao(int mtl, string nxb, int bph, int nph)
        : taiLieu(mtl, nxb, bph), ngayPhatHanh(nph)
    {}
    string taiLieuGi();
    void inSach();
};

string bao::taiLieuGi()
{
    return "bao";
}

void bao::inSach()
{
    cout << maTaiLieu << " " << nhaXuatBan << " " << banPhatHanh << " " \
    << ngayPhatHanh << endl;
}

// --------------------QUAN LY SACH---------------------------
class quanLySach
{
private:
    int stt = 0;
    taiLieu *ds[100];
public:
    void addTaiLieu();
    void infoTaiLieu();
    void searchTaiLieu();
    void delTaiLieu();
};

void quanLySach::delTaiLieu()
{
    do
    {
        char mtl;
        cout << "Xoa tai lieu. Nhap ma tai lieu: ";
        cin >> mtl;

        for (int i = 0; i < stt; i++)
            {
                if (ds[i]->getMaTaiLieu() == mtl)
                {
                    delete ds[i];
                } 
            }
        
        
        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n' || stt >= 100) break;


    } while (true);
}

void quanLySach::searchTaiLieu()
{
    do
    {
        char choice;
        cout << "Tim kiem tai lieu theo\n Sach (S), Tap Chi (T), Bao (B). Chon 1: ";
        cin >> choice;
        if (choice == 's' || choice == 'S')
        {
            for (int i = 0; i < stt; i++)
            {
                if (ds[i]->taiLieuGi() == "sach")
                {
                    ds[i]->inSach();
                } 
            }
        }
        else if (choice == 't' || choice == 'T')
        {
            for (int i = 0; i < stt; i++)
            {
                if (ds[i]->taiLieuGi() == "tapchi")
                {
                    ds[i]->inSach();
                } 
            }
        }
        else if (choice == 'b' || choice == 'B')
        {
            for (int i = 0; i < stt; i++)
            {
                if (ds[i]->taiLieuGi() == "bao")
                {
                    ds[i]->inSach();
                } 
            }
        }
        
        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n' || stt >= 100) break;


    } while (true);
    
}

void quanLySach::infoTaiLieu()
{
    cout << "Hien thi thong tin tai lieu:" << endl;
    for (int i = 0; i < stt; i++)
    {
        ds[i]->inSach();
    }
}

void quanLySach::addTaiLieu()
{
    do
    {
        int maTaiLieu;
        string nhaXuatBan;
        int banPhatHanh;
        cout << "Nhap ma tai lieu: "; cin >> maTaiLieu;
        cout << "Nhap nha xuat ban: ";
        cin.ignore();
        getline(cin, nhaXuatBan);
        cout << "Nhap so ban phat hanh: "; cin >> banPhatHanh;
        char choice;
        cout << "Sach (S), TapChi (T), Bao (B). Chon 1: ";
        cin >> choice;
        if (choice == 's' || choice == 'S')
        {
            string tenTacGia;
            int soTrang;
            cout << "Nhap ten tac gia: ";
            cin.ignore();
            getline(cin, tenTacGia);
            cout << "Nhap so trang: ";
            cin >> soTrang;
            ds[stt++] = new sach(maTaiLieu, nhaXuatBan, banPhatHanh, tenTacGia, soTrang);
        }
        else if (choice == 't' || choice == 'T')
        {
            int soPhatHanh;
            int thangPhatHanh;
            cout << "Nhap so phat hanh: ";
            cin >> soPhatHanh;
            cout << "Nhap thang phat hanh: ";
            cin >> thangPhatHanh;
            ds[stt++] = new tapChi(maTaiLieu, nhaXuatBan, banPhatHanh, soPhatHanh, thangPhatHanh);
        }
        else if (choice == 'b' || choice == 'B')
        {
            int ngayPhatHanh;
            cout << "Nhap ngay phat hanh: ";
            cin >> ngayPhatHanh;
            ds[stt++] = new bao(maTaiLieu, nhaXuatBan, banPhatHanh, ngayPhatHanh);
        }
        
        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n' || stt >= 100) break;

    } while (true);
    
}


int main()
{
    quanLySach thuvien;
    thuvien.addTaiLieu();
    thuvien.infoTaiLieu();
    thuvien.delTaiLieu();
    thuvien.infoTaiLieu();
    thuvien.searchTaiLieu();
    return 0;
}