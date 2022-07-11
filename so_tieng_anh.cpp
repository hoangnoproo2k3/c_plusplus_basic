#include<iostream>
using namespace std;
int main ()
{	int n;
	do{
		cout << " nhap n: ";
	cin >> n;
	if(n<=0)
	{cout<<"khong hop le";}
	} while(n<=0);
	if(n>=1&& n<=9)
	{ 
	 switch (n)
	 {
	 	case 1: 
	 		{cout << "one";}
	 	case 2:
	 		{cout<< "two";}
	 	case 3:
	 		{cout<<"three";}
	 	}}
	else	 	
	 	{ if(n%2==0)
	 	{cout << "even";}
	 	else
	 	{ cout<< "odd";}}
		 return 0;}
