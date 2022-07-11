/* Bài 12/5/SBT Th?y NTTMK:Tính S(n)=n+n^2+n^3+...+n^x . 174.cpp */
#include <bits/stdc++.h>

using namespace std;
int main ()
{ int n,x;
 cout << "nhap n: "<< endl;
 cin >> n;
	do { cout << "nhap x: ";
		cin >> x;
		 if (x<1)
		 { cout << " khong co x thoa man ";}}
		 while ( x<1);
	float s=0;
	for (int i=1; i<=x;i++)
	 { s+=pow(n,i);}
	 cout << s<<endl;
	
	 return 0;
	 }
