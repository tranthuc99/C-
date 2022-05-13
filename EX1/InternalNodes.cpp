#include <vector>
#include <iostream>
using namespace std;

int countInternalNodes(vector<int>& tree)
{
    int sizeVec = tree.size();
    for (int i = 0; i < sizeVec; ++i)
    {
        for (int j = i+1; j < sizeVec; ++j)
        {
            if (tree[i] == tree[j])
            {
                tree.erase(tree.begin()+j);
                sizeVec = tree.size();
                --j;
            }
        }
    }
    for (int a = 0; a < sizeVec; ++a) cout << tree[a] << endl;
    return sizeVec - 1;
}

#ifndef RunTests

int main()
{
    vector<int> tree;
    tree.push_back(1);
    tree.push_back(3);
    tree.push_back(1);
    tree.push_back(-1);
    tree.push_back(3);
    tree.push_back(6);
    tree.push_back(6);
    tree.push_back(4);
    tree.push_back(8);
    tree.push_back(5);
    tree.push_back(4);
    tree.push_back(5);
    cout << countInternalNodes(tree) << " nodes are internal nodes";
}
#endif