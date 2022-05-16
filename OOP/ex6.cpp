#include <iostream>
#include <vector>
using namespace std;

// --------------------NGUOI---------------------------
class hocsinh
{
private:
    string hoTen;
    int tuoi;
    string queQuan;
    int lop;
public:
    hocsinh(string ht, int t, string q, int l)
        : hoTen(ht), tuoi(t), queQuan(q), lop(l)
    {}
    void in4hs()
    {
        cout << hoTen << ", " << tuoi << ", " << queQuan << ", " << lop << endl;
    }
    int getTuoi()
    {
        return tuoi;
    }
    string getQue()
    {
        return queQuan;
    }
};

class truong
{
private:
    vector<hocsinh> ds;
public:
    void addHS();
    void hienThiDanhSach();
    void hocSinh20tuoi();
    int soHS23tuoiQueDN();
};

int truong::soHS23tuoiQueDN()
{
    int count = 0;
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i].getTuoi() == 23 &&  ds[i].getQue() == "DN")
        {
            count += 1;
        }
    }
    return count;
}

void truong::hocSinh20tuoi()
{
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i].getTuoi() == 20)
        {
            ds[i].in4hs();
        }
        
        
    }
}

void truong::addHS()
{
    do
    {
        string hoTen;
        int tuoi;
        string queQuan;
        int lop;
        cout << "Nhap ho va ten: ";
        cin.ignore();
        getline(cin, hoTen);
        cout << "Nhap tuoi: "; cin >> tuoi;
        cout << "Nhap que quan: ";
        cin.ignore();
        getline(cin, queQuan);
        cout << "Nhap lop: "; cin >> lop;

        hocsinh *a = new hocsinh(hoTen, tuoi, queQuan, lop);
        ds.push_back(*a);
        
        char choiceEnd;
        cout << "tiep (Y), dung (N): "; cin >> choiceEnd;
        if (choiceEnd == 'N' || choiceEnd == 'n') break;

    } while (true);
}
void truong::hienThiDanhSach()
{
    for (int i = 0; i < ds.size(); i++)
    {
        ds[i].in4hs();
    }
}

int main()
{
    truong thcsABC;
    thcsABC.addHS();
    thcsABC.hienThiDanhSach();
    thcsABC.hocSinh20tuoi();
    thcsABC.soHS23tuoiQueDN();

    return 0;
}