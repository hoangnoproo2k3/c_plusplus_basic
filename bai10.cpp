#include<bits/stdc++.h>
using namespace std;
struct DSdoibong
{
	string tendoibong,huanluyenvien,doitruong;
	int soluongcauthu,sobanthang,sotran;
};
//NHAP THONG TIN
int  nhapthongtin(DSdoibong a[],int i)
{
	for(int i=0;i<50;i++)
	{	
		cout<<"\nNhap ten doi bong: ";
		cin.ignore();getline(cin,a[i].tendoibong);
		cout<<"Huanluyenvien: ";getline(cin,a[i].huanluyenvien);
		cout<<"Nhap ten doi truong: ";getline(cin,a[i].doitruong);
		cout<<"So luong cau thu: ";cin>>a[i].soluongcauthu;
		cout<<"So ban thang: ";cin>>a[i].sobanthang;
		cout<<"So tran: ";cin>>a[i].sotran;
		if(a[i].tendoibong=="*");return 0;
	}
};
//HIEN THI 
void hienthi(DSdoibong x)
{
	cout<<"\n"<<"____________________________________________________________________________________________\n"
	"|"<<setw(17)<<x.tendoibong<<setw(17)<<x.huanluyenvien<<setw(17)<<x.doitruong
	<<setw(10)<<x.soluongcauthu<<setw(10)<<x.sobanthang<<setw(10)<<x.sotran<<setw(10)<<"|";
}
void hienthiDS(DSdoibong a[])
{
	cout<<"\nDanh sach cac doi bong la:";
	for(int i=0;i<50;i++)
	hienthi(a[i]);
}
void tinhtongbanthang(DSdoibong a[])
{
	int s=0;
	cout<<"\nTong ban thang duoc ghi la:";
	for(int i=0;i<50;i++)
	{
		s=s+a[i].sobanthang;
	}
	cout<<s;
}
int main()
{
	DSdoibong a[100];
	int n,i;
	nhapthongtin(a,i);
	hienthiDS(a);
	//tinhtongbanthang(a);
}

