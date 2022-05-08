#include <iostream>
#include <string>
#include <vector>
using namespace std;

string firstUniqueProduct(const vector<string>& products)
{
    int sizeProd = products.size();
    for (int i = 0; i < sizeProd; ++i)
    {
        for (int j = 0; j < sizeProd; ++j)
        {
            // cout << "i,j= "<< i << j << products[i] << ", " << products[j] << endl;
            if ((products[i] == products[j]) && (i != j))
            {
                break;
            }
            else if (products[i] == products[j] && i == j)
            {
                if (i == sizeProd - 1)
                {
                    return products[i];
                }
                
                continue;
            }
            else if (products[i] != products[j] && j != sizeProd - 1)
            {
                continue;
            }
            
            else if ((products[i] != products[j]) && (j == sizeProd - 1))
            {
                return products[i];
            }
        }
    }
    return "empty";
}

#ifndef RunTests
int main()
{
    vector<string> products = {"Apple", "Apple", "Computer", "Bag", "Computer", "Bag", "Thuc"};
    cout << firstUniqueProduct(products);
}
#endif