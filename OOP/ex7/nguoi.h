#ifndef nguoi_h
#define nguoi_h
#include <iostream>
using namespace std;

class nguoi
{
protected:
    string hoTen;
    int tuoi;
    string queQuan;
    int maSo;
public:
    int getMaSo();
    nguoi(string ht, int t, string q, int ms);
};

int nguoi::getMaSo()
{
    return maSo;
}

nguoi::nguoi(string ht, int t, string q, int ms)
    : hoTen(ht), tuoi(t), queQuan(q), maSo(ms)
{}



#endif