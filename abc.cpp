#include <iostream>
using namespace std;

class A
{
    int a;
public:
    A(int a) { this->a = a; }
    int getA() { return a; }
};
class control
{
public:
    void method()
    {
        A x(5);
        cout << "Cach 1: " <<x.getA() << endl;
        A *y = new A(5);
        cout << "Cach 2: " << y->getA() << endl;
        delete y;
        A z(5); A *p = &z;
        cout << "Cach 3: " << p->getA() << endl;
        // do something
    }
};
int main()
{
    control c;
    c.method();
    return 0;
}