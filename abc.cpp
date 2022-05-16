#include<iostream>
#include<string>
using namespace std;

int main()
{
	int maTaiLieu;
    string nhaXuatBan;
    int banPhatHanh;

    cout << "Nhap ma tai lieu: ";
	cin >> maTaiLieu;
	cout << "Nhap nha xuat ban: ";
	cin.ignore();
    getline(cin, nhaXuatBan);
	// fflush(stdin);
    cout << "Nhap so ban phat hanh: ";
	cin >> banPhatHanh;

	return 0;
}
