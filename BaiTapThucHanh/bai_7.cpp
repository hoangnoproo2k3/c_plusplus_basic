#include<bits/stdc++.h>
using namespace std;
int main ()
{ int a, b;
do{
 cout << "thang: "; cin >> a;
	if(a>=13||a<=0)
	{cout<<"khong co thang nay";}}
 while(a>=13||a<=0);
 cout << "nam "; cin >>b;
 switch(a)
 { case 2:
 	{ if((b%4==0&&b%100!=0)|| b %400==0)
 	 cout << "thang "<< a<< " co 29 ngay la nam nhuan";
 	 else
 	 {cout << "thang "<< a<< " co 28 ngay khong phai la nam nhuan";}
	  break;}
 	 default:
 	{ cout <<"thang "<<a<<" khong phai la nam nhuan";}}
		  return 0;}
