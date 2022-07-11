#include<iostream>
using namespace std;
int main()
{ int a,b,c;
cout<<"Nhap cac canh cua tam giac: ";
	cin>>a>>b>>c;
	if(a>=b+c||b>=a+c||c>=a+b)
	cout<<"\nKhong phai tam giac";
	else
	{
		
		if(a==b==c)
		cout<<"\ntam giac deu";
		else if (a==b||b==c||a==c)
		cout<<"\ntam giac can";
		else if(b*b+c*c==a*a||a*a+c*c==b*b||a*a+b*b==c*c)
		cout<<"\nTam giac vuong";
		else
		cout<<"\nTam giac thuong";
		}
		return 0;}
