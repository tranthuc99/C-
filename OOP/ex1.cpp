#include <iostream>
#include <string>
#include <vector>
using namespace std;

// --------------------CAN BO-------------------------
class CanBo
{
private:
    string HoTen;
    int Tuoi;
    string GioiTinh;
    string DiaChi;
public:
    CanBo(string ht, int t, string gt, string dc)
        : HoTen(ht), Tuoi(t), GioiTinh(gt), DiaChi(dc)
    {}
    string getHoTen()
    {
        return HoTen;
    }
    int getTuoi()
    {
        return Tuoi;
    }
    string getGioiTinh()
    {
        return GioiTinh;
    }
    string getDiaChi()
    {
        return DiaChi;
    }
    void setHoTen(string ht)
    {
        this->HoTen = ht;
    }
    void setTuoi(int t)
    {
        this->Tuoi = t;
    }
    void setGioiTinh(string gt)
    {
        this->GioiTinh = gt;
    }
    void setDiaChi(string dc)
    {
        this->DiaChi = dc;
    }
    virtual int getBac() { return 0; }
    virtual string getNganhDT() { return ""; }
    virtual string getCongViec() { return ""; }
    virtual ~CanBo() {}
};

// --------------------CONG NHAN-----------------------
class CongNhan : public CanBo
{
private:
    int Bac;
public:
    CongNhan(string ht, int t, string gt, string dc, int b = 1)
        : CanBo(ht, t, gt, dc), Bac(b)
    {}
    int getBac()
    {
        return Bac;
    }
    void setBac(int b)
    {
        this->Bac = b;
    }
};

// --------------------KY SU---------------------------
class KySu : public CanBo
{
private:
    string NganhDT;
public:
    KySu(string ht, int t, string gt, string dc, string ndt = "cntt")
        : CanBo(ht, t, gt, dc), NganhDT(ndt)
    {}
    string getNganhDT()
    {
        return NganhDT;
    }
    void setNganhDT(string ndt)
    {
        this->NganhDT = ndt;
    }
};

// --------------------NHAN VIEN------------------------
class NhanVien : public CanBo
{
private:
    string CongViec;
public:
    NhanVien(string ht, int t, string gt, string dc, string cv = "ke toan")
        : CanBo(ht, t, gt, dc), CongViec(cv)
    {}
    string getCongViec()
    {
        return CongViec;
    }
    void setCongViec(string cv)
    {
        this->CongViec = cv;
    }
};

// --------------------QLCB---------------------------
class QLCB
{
private:
    vector<CanBo*> ds;
public:
    void add(CanBo &canbo)
    {
        ds.push_back(&canbo);
    }
    void printList()
    {
        for (int i = 0; i < ds.size(); ++i)
        {
            cout << i+1 << ". " << ds[i]->getHoTen() << ", " << ds[i]->getTuoi() \
            << ", " << ds[i]->getGioiTinh() << ", " << ds[i]->getDiaChi() << ", " \
            << ds[i]->getBac() << ", " << ds[i]->getNganhDT() << ", " << ds[i]->getCongViec() <<endl;
        }
    }
    void searchHoTen()
    {
        string input;
        cout << "Nhap hoten: ";
        cin >> input;
        for (int i = 0; i < ds.size(); ++i)
        {
            if (input == ds[i]->getHoTen())
            {
            // cout << i+1 << ". " << ds[i]->getHoTen() << ", " << ds[i]->getTuoi() \
            // << ", " << ds[i]->getGioiTinh() << ", " << ds[i]->getDiaChi() << ", " \
            // << ds[i]->getBac() << ", " << ds[i]->getNganhDT() << ", " << ds[i]->getCongViec() <<endl;
            printf("abc %c", ds[i]->getHoTen());
            }
        }
    }
};

// --------------------MAIN---------------------------
int main()
{
    QLCB khuA;
    CanBo cb("Thuc", 18, "nam", "hn");
    KySu ks("Khai", 18, "nam", "hn");
    NhanVien nv("Nam", 18, "nam", "hn", "coder");
    CongNhan cn("Tung", 18, "nam", "hn");
    khuA.add(cb);
    khuA.add(ks);
    khuA.add(nv);
    khuA.add(cn);
    khuA.printList();
    khuA.searchHoTen();

    return 0;
}