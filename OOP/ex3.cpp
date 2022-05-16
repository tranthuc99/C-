#include <iostream>
using namespace std;

// --------------------THI SINH---------------------------
class thiSinh
{
protected:
    int soBaoDanh;
    string hoTen;
    string diaChi;
    int mucUuTien;
public:
    thiSinh(int sbd, string ht, string dc, int mut)
        : soBaoDanh(sbd), hoTen(ht), diaChi(dc), mucUuTien(mut)
    {}
    virtual void infoThiSinh() = 0;
    int getSBD();
};

int thiSinh::getSBD()
{
    return soBaoDanh;
}

// --------------------THI SINH KHOI A---------------------------
class tsKhoiA : public thiSinh
{
private:
    int toan;
    int ly;
    int hoa;
public:
    tsKhoiA(int sbd, string ht, string dc, int mut, int t, int l, int h)
        : thiSinh(sbd, ht, dc, mut), toan(t), ly(l), hoa(h)
    {}
    void infoThiSinh();
};

void tsKhoiA::infoThiSinh()
{
    cout << "Khoi A: " << soBaoDanh << ", " << hoTen << ", " << diaChi << ", "
    << mucUuTien << ", " << toan << ", " << ly << ", " << hoa << endl;
}

// --------------------THI SINH KHOI B---------------------------
class tsKhoiB : public thiSinh
{
private:
    int toan;
    int hoa;
    int sinh;
public:
    tsKhoiB(int sbd, string ht, string dc, int mut, int t, int h, int s)
        : thiSinh(sbd, ht, dc, mut), toan(t), hoa(h), sinh(s)
    {}
    void infoThiSinh();
};

void tsKhoiB::infoThiSinh()
{
    cout << "Khoi B: " << soBaoDanh << ", " << hoTen << ", " << diaChi << ", "
    << mucUuTien << ", " << toan << ", " << hoa << ", " << sinh << endl;
}

// --------------------THI SINH KHOI C---------------------------
class tsKhoiC : public thiSinh
{
private:
    int van;
    int su;
    int dia;
public:
    tsKhoiC(int sbd, string ht, string dc, int mut, int v, int s, int d)
        : thiSinh(sbd, ht, dc, mut), van(v), su(s), dia(d)
    {}
    void infoThiSinh();
};

void tsKhoiC::infoThiSinh()
{
    cout << "Khoi C: " << soBaoDanh << ", " << hoTen << ", " << diaChi << ", "
    << mucUuTien << ", " << van << ", " << su << ", " << dia << endl;
}

// --------------------TUYEN SINH---------------------------
class tuyenSinh
{
private:
    int stt = 0;
    thiSinh *ds[100];
public:
    void addTS();
    void infoTS();
    void searchTS();
};

void tuyenSinh::addTS()
{
    do
    {
        int soBaoDanh;
        string hoTen;
        string diaChi;
        int mucUuTien;
        cout << "Nhap so ban danh: "; cin >> soBaoDanh;
        cout << "Nhap ho va ten: ";
        cin.ignore();
        getline(cin, hoTen);
        cout << "Nhap dia chi: ";
        cin.ignore();
        getline(cin, diaChi);
        cout << "Nhap muc uu tien: "; cin >> mucUuTien;

        char choice;
        cout << "Khoi A: (A), Khoi B: (B), Khoi C: (C). Chon 1: ";
        cin >> choice;
        if (choice == 'a' || choice == 'A')
        {
            int toan;
            int ly;
            int hoa;
            cout << "Nhap diem toan: "; cin >> toan;
            cout << "Nhap diem ly: "; cin >> ly;
            cout << "Nhap diem hoa: "; cin >> hoa;
            ds[stt++] = new tsKhoiA(soBaoDanh, hoTen, diaChi, mucUuTien, toan, ly, hoa);
        }
        else if (choice == 'b' || choice == 'B')
        {
            int toan;
            int hoa;
            int sinh;
            cout << "Nhap diem toan: "; cin >> toan;
            cout << "Nhap diem hoa: "; cin >> hoa;
            cout << "Nhap diem sinh: "; cin >> sinh;
            ds[stt++] = new tsKhoiB(soBaoDanh, hoTen, diaChi, mucUuTien, toan, hoa, sinh);
        }
        else if (choice == 'c' || choice == 'C')
        {
            int van;
            int su;
            int dia;
            cout << "Nhap diem van: "; cin >> van;
            cout << "Nhap diem su: "; cin >> su;
            cout << "Nhap diem dia: "; cin >> dia;
            ds[stt++] = new tsKhoiC(soBaoDanh, hoTen, diaChi, mucUuTien, van, su, dia);
        }
        
        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n' || stt >= 100) break;

    } while (true);
}

void tuyenSinh::infoTS()
{
    cout << "Hien thi thong tin thi sinh va khoi thi:" << endl;
    for (int i = 0; i < stt; i++)
    {
        ds[i]->infoThiSinh();
    }
}

void tuyenSinh::searchTS()
{
    int search;
    cout << "Tim kiem thi sinh" << endl;
    cout << "Nhap so bao danh: "; cin >> search;
    for (int i = 0; i < stt; i++)
    {
        if (search == ds[i]->getSBD())
        {
            ds[i]->infoThiSinh();
        }
    }
}


// --------------------MAIN FUNC---------------------------
int main()
{
    tuyenSinh hanoi;
    hanoi.addTS();
    hanoi.infoTS();
    hanoi.searchTS();

    return 0;
}