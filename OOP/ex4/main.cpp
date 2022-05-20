#include <iostream>
#include "khuPho.h"
using namespace std;

int main()
{
    khuPho khuA;
    vector<hoGiaDinh> hgd = khuA.addHGD();

    for (int i = 0; i < hgd.size(); i++)
    {
        hgd[i].printHGD();
    }
    

    return 0;
}