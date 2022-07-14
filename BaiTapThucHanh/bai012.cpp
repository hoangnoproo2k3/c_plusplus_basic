#include<iostream>
#include<cmath>
using namespace std;
bool kiem_tra_scp(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(sqrt(n)==i)
			return true;
		}
	return false;}
int main()
{
	int n;
	int tong=0;
	while(n!=0)
	{
		cin >>n;
	if(kiem_tra_scp(n)==true)
	{
		cout<<"\n La so chinh phuong";
		if(n%2==0)
		{
			tong+=n;}
			}
	else
	cout<<"\nKhong co so chinh phuong";}
	cout<<"\nTong: "<<tong;
	return 0;}
		
		
