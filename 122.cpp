#include <iostream>
using namespace std;
bool kiem_tra_so_nguyen_to(int n)
{
	bool kiem_tra=true;
	{ if(n<2)
	{ return false;}
	if(n>2)
	{ if(n%2==0)
	{ return false;}
	   else {
	   	for(int i=2; i<n;i++)
	   	{ if(n%i==0)
	   	{ return false;}}}}}
	   	return true;}
int main()
{
	int n;
	cout<< " nhap n: ";
	cin>> n;
	if(kiem_tra_so_nguyen_to(n)==true)
	{ cout<< " la so nguyen to";}
	else 
	{ cout<< " khong phai so nguyen to";}
	}
