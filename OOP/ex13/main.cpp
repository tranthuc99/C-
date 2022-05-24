#include <iostream>
#include "fresher.h"

using namespace std;

int main()
{
    employee *e = new fresher(2, "abc", "bcd", "cde", "def", 2, "efg", 'a', "edu");
    e->showInfo();

    return 0;
}