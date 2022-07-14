#include<iostream>
using namespace std;
int main()
{
	int xp,yp,xq,yq;
	cin>>xp>>yp>>xq>>yq;
	int A=(yq-yp);
	int B=(xp-xq);
	int C=xq*yp-xp*yq;
	cout<<"Phuong trinh duong thang la: "<<"x*"<<A<<"+y*"<<"("<<B<<")"<<"+"<<C<<"=0";
	int xi,yi;
	cin>>xi>>yi;
	int f=A*xi+B*yi+C;
	if(f==0)
	cout<<"\nI thuoc duong thang do";
	else
	cout<<"\nI khong thuoc duong thang do";
	return 0;}
