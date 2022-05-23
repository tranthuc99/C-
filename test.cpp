#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    int price;
    public:
        void setData(int a, int b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};


int main(){
    int size = 4;
    ShopItem *ptr[size];
    delete []ptr;
    int p, q;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
        // cout<<"Enter Id and price of item "<< i+1<<endl;
        // cout << "Id= "; cin >> p;
        // cout << "price = "; cin >> q;
        // // ptr->setData(p, q);
        // ptr[i]->setData(p, q);
        // // ptr++;
    }


    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Item number: "<<i+1<<endl;
    //     // ptr->getData();
    //     ptr[i]->getData();
    //     // ptr++;
    // }
    
    
    return 0;
}