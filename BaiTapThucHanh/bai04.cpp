#include<iostream>
using namespace std;
int main()
{	
int n;
	do{
		cout<<"Nhap n: ";
		cin>> n;
		if(n>999||n<100)
		{
			cout<<"\n Khong thoa man! ";
		}
	}while(n>999||n<100);
	int a=n%10;
	int b=(n/10)%10;
	int c=n/100;
	int max=(a>b&&a>c)?a:(b>c?b:c);
	int k=max;
	if(a==k)
	cout<<"\nLa hang don vi "<<max;
	if(b==k)
	cout<<"\nLa hang chuc "<<max;
	if(c==k)
	cout<<"\n La hang tram "<<max;
	return 0;}
	
	
