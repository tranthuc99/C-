#include <iostream>
#include <vector>
using namespace std;

// -------------------- CLASS PHONG ---------------------
class phong
{
protected:
    char loaiPhong;
    int giaPhong;
public:
    void setphongA()
    {
        this->loaiPhong = 'A';
        this->giaPhong = 500;
    }
	void setphongB()
    {
        this->loaiPhong = 'B';
        this->giaPhong = 300;
    }
	void setphongC()
    {
        this->loaiPhong = 'C';
        this->giaPhong = 100;
    }
};

// -------------------- CLASS NGUOI ---------------------
class nguoi
{
protected:
    string hoTen;
    int tuoi;
    int cmt;
public:
    nguoi(string ht, int t, int cmt);
};

nguoi::nguoi(string ht, int t, int cmt)
    : hoTen(ht), tuoi(t), cmt(cmt)
{}

// -------------------- CLASS KHACHSAN ---------------------
class khachSan : public nguoi
{
protected:
    int soNgayThue;
    phong room;
    vector<khachSan> ds;
public:
    void addNew();
    khachSan(int snt = 0, phong room = new phong, string ht = "Thuc", int t = 18, int cmt = 123);
};

void khachSan::addNew()
{
    string hoTen;
    int tuoi;
    int cmt;
    int snt;
    char lp;

    do
    {
        cout << "--- Them moi khach hang ---" << endl;
        cout << "Nhap ho va ten: ";
        cin.ignore();
        getline(cin, hoTen);
        cout << "Nhap tuoi: "; cin >> tuoi;
        cout << "Nhap so cmtnd: "; cin >> cmt;
        cout << "Nhap so ngay thue: "; cin >> snt;
        cout << "Nhap loai phong (A, B, or C): "; cin >> lp;
        if (lp == 'A' || lp == 'a') 
        {
            phong a;
            a.setphongA();
            khachSan *it = new khachSan(snt, a, hoTen, tuoi, cmt);
            ds.push_back(*it);
        }
        else if (lp == 'B' || lp == 'b') 
        {
            phong a;
            a.setphongB();
            khachSan *it = new khachSan(snt, a, hoTen, tuoi, cmt);
            ds.push_back(*it);
        }
        else if (lp == 'C' || lp == 'c') 
        {
            phong a;
            a.setphongC();
            khachSan *it = new khachSan(snt, a, hoTen, tuoi, cmt);
            ds.push_back(*it);
        }
        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n') break;

    } while (true);
    
}

khachSan::khachSan(int snt, phong room, string ht, int t, int cmt)
{
    this->hoTen = ht;
    this->tuoi = t;
    this->cmt = cmt;
    this->room = room;
    this->soNgayThue = snt;
}


// -------------------- CLASS PHONG ---------------------

int main()
{
    khachSan A;
    A.addNew();

    return 0;
}