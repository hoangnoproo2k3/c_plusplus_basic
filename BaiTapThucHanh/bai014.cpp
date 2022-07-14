#include<iostream>
using namespace std;
int main(){
	int a[100], b[100];
	int x=0,y=0;
	int n;
	do{
		cout<<"Nhap: ";
		cin>>n;
		if(n!=0)
		{
			if(n%2==0)
			{a[x]=n;
			x++;
			}
			else
			if(n%2!=0)
			{b[y]=n;
			y++;}
			}			
	}while(n!=0);
	cout<<"\n trung binh cong Mang so le: ";
	int tong1=0;
	for(int j=0;j<y;j++)
	 tong1+=b[j];
	 cout<<"TBC le="<<1.0*tong1/y;
	 int tong2=0;
	cout<<"\n Trung binh cong Mang so chan: ";
	for(int i=0;i<x;i++)
	tong2+=a[i];
	cout<<"TBC chan="<<1.0*tong2/x;
	
	
	return 0;}
