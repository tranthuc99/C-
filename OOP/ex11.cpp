#include <iostream>

using namespace std;

class soPhuc
{
private:
    double phanThuc;
    double phanAo;
public:
    void printSoPhuc();
    soPhuc(double pt = 0, double pa = 0);
    soPhuc operator+ (soPhuc);
    soPhuc operator* (soPhuc);
};

soPhuc soPhuc::operator* (soPhuc sp)
{
    soPhuc res;
    res.phanThuc = this->phanThuc * sp.phanThuc - this->phanAo * sp.phanAo;
    res.phanAo = this->phanThuc * sp.phanAo + this->phanAo * sp.phanThuc;
    return res;
}

soPhuc soPhuc::operator+ (soPhuc sp)
{
    soPhuc res;
    res.phanThuc = this->phanThuc + sp.phanThuc;
    res.phanAo = this->phanAo + sp.phanAo;
    return res;
}

void soPhuc::printSoPhuc()
{
    cout << phanThuc << " + " << phanAo << "i" << endl;
}

soPhuc::soPhuc(double pt, double pa)
    : phanThuc(pt), phanAo(pa)
{}




int main()
{
    soPhuc sp(5,2);
    sp.printSoPhuc();
    soPhuc sp2(4,3);
    sp2.printSoPhuc();
    soPhuc prod = sp * sp2;
    prod.printSoPhuc();
    soPhuc sum = sp + sp2;
    sum.printSoPhuc();
    
    return 0;
}