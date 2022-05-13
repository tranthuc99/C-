#include <string>
#include <iostream>
#include <vector>
using namespace std;

int minPieces(const vector<int>& original, const vector<int>& desired)
{
    int length = original.size();
    int minCut = length - 1;
    for (int i = 0; i < length; ++i)
    {
        for (int j = 0; j < length; ++j)
        {
            // cout << "i,j= "<< i << j << "   " << original[i] << ", " << desired[j] << endl;
            int count = -1;
            if (original[i] != desired[j])
            {
                continue;
            }
            while (original[i] == desired[j])
            {
                ++i;
                ++j;
                ++count;
                minCut -= count;
            }
            if (i == length)
                {
                    break;
                }
            j = -1;
        }
    }
    return minCut + 1;
}
#ifndef RunTests
int main()
{
    // vector<int> original = {1, 2, 5, 3, 4, 7, 6, 8, 9};
    // vector<int> desired =  {9, 4, 6, 8, 1, 2, 7, 5, 3};
    vector<int> original = {1, 4, 3, 2};
    vector<int> desired = {1, 2, 4, 3};
    cout << "The minimum number of cut pieces: " << minPieces(original, desired);
}
#endif