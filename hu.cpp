#include<iostream>
using namespace std;
void nhap_mang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];}
		}
void xuat_mang(int a[], int n)
{
	for(int i=0;i<n;i++ )
	{
	
		cout<<a[i]<<" ";}
		}
float tong_chan(int a[], int n)
{
	float tong=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			tong+=a[i];}
			}
			return tong;
			}
void lon_hon_5(int a[], int n)
{
	for(int i=0;i<n;i++)
	{ if(a[i]>5)
	{
		cout<<a[i]<<" ";}}}
	
int main(){
int *tranthanhdat;
int n;
tranthanhdat=new int [n];
cin>>n;
cout<<"Nhap ma: ";
nhap_mang(tranthanhdat,n);
cout<<"\nHien thi ma sinh vien:";
xuat_mang(tranthanhdat,n);
cout<<"\nTong cac so chan: "<<tong_chan(tranthanhdat,n);
cout<<"\nCac so lon hon 5: ";
lon_hon_5(tranthanhdat,n);
delete [] tranthanhdat;
return 0;}

