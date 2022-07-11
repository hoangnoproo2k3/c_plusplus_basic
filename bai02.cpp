#include<iostream>
using namespace std;
int main()
{
	int n;
	do{ 
		cout <<"Nhap n: ";
		cin>> n;
		if(n>99||n<10)
		{
			cout<<"\n n khong thoa man";
		}
	} while(n>99||n<10);
	int tong=0;
	while(n!=0)
	{ 
	tong+=n%10;
	n=n/10;} 
	cout<<"\n Tong cac chu so la: "<<tong;
	return 0;}
