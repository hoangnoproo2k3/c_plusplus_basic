#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float S;
	int T;
	cout<<"Nhap quang duong: ";
	cin>>S;
	cout<<"\nNhap thoi gian: ";
	cin>>T;
	cout<<fixed<<setprecision(5)<<S/T;
	return 0;}
	
