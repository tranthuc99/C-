#include <iostream>
using namespace std;

struct Battery
{
    float charge = 0.0f;
};

void charge(Battery* battery, float charge)
{
    battery->charge = charge;
}

#ifndef RunTests
int main()
{
    Battery battery;
    charge(&battery, 1.0f);
    cout << battery.charge << endl;
}
#endif