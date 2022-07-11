#include<iostream>
using namespace std;
int main()
{
	string a;
	int b,c,d;
	cout<<"Nhap ten: ";
	getline(cin, a);
	cout<<"Nhap so tien cong 1 ngay: ";
	cin>>b;
	cout<<"\nNhap so ngay lam viec trong 1 thang: ";
	cin>>c;
	cout<<"\n Nhap so tien da tam ung: ";
	cin>>d;
	cout<<"\n\tOng/Ba: "<<a;
	cout<<"\nSo tien luong duoc huong: "<<b*c;
	cout<<"\n\nSo tien da tam ung: "<<d;
	cout<<"\n\tSo tien duoc linh: "<< b*c-d;
	return 0;}
