#include <iostream>

using namespace std;

class nguoi
{
protected:
    string hoTen;
    int tuoi;
    string ngheNghiep;
    int cmt;
public:
    nguoi(string ht, int t, string nn, int cmt);
    void infoNguoi();
};

void nguoi::infoNguoi()
{
    cout << hoTen << ", " << tuoi << ", " << ngheNghiep << ", " << cmt << endl;
}

nguoi::nguoi(string ht, int t, string nn, int cmt)
    : hoTen(ht), tuoi(t), ngheNghiep(nn), cmt(cmt)
{}


class hoGiaDinh 
{
private:
    int soThanhVien;
    int soNha;
    nguoi *thanhVien[];
public:
    void addHoGiaDinh();
    void infoHGD();
};

void hoGiaDinh::infoHGD()
{
    cout << "Hien thi thong tin ho gia dinh:" << endl;
    cout << "So thanh vien: " << soThanhVien << endl;
    cout << "So nha: " << soNha << endl;
    for (int i = 0; i < soThanhVien; i++)
    {
        cout << "Thanh vien " << i+1 << endl;
        thanhVien[i]->infoNguoi();

    }
}

void hoGiaDinh::addHoGiaDinh()
{
    cout << "Nhap so thanh vien: "; cin >> soThanhVien;
    cout << "Nhap so nha: "; cin >> soNha;
    cout << "Nhap thanh vien trong gia dinh:" << endl;
    
    for (int i = 0; i < soThanhVien; i++)
    {
        string ht;
        int t;
        string nn;
        int cmt;
        
        cout << "Thanh vien " << i + 1 << endl;
        cout << "Nhap ho va ten: ";
        cin.ignore(); getline(cin, ht);
        cout << "Nhap tuoi: "; cin >> t;
        cout << "Nhap nghe nghiep: ";
        cin.ignore(); getline(cin, nn);
        cout << "Nhap so cmtnd: "; cin >> cmt;
        thanhVien[i++] = new nguoi(ht, t, nn, cmt);
        // cout << "i= " <<i <<endl;
    }

    
}

class khuPho
{
private:
    int soHoGD;
    hoGiaDinh *hgd[];
public:
    khuPho()
    {
        cout << "Nhap so ho gia dinh: "; cin >> soHoGD;
    }

    void addHoGD()
    {
        for (int i = 0; i < soHoGD; i++)
        {
            cout << "Nhap thong tin ho gia dinh thu " << i+1 << endl;
            hgd[i]->addHoGiaDinh();
        }
    }

    void in4HoGD()
    {
        for (int i = 0; i < soHoGD; i++)
        {
            cout << "Hien thi thong tin ho gia dinh thu " << i+1 << endl;
            hgd[i]->infoHGD();
        }
    }
};


int main()
{
    khuPho khupho1;
    khupho1.addHoGD();
    khupho1.in4HoGD();


    return 0;
}