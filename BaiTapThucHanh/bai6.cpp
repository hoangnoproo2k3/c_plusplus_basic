#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,e,f,A,B,C;
	cout<< "nhap toan do P(xp,yp)="; cin>> a>>b;
	cout << "nhap toan do Q(xq,yq)="; cin >> c>> d;
	cout <<"nhap toan do I(xi,yi)="; cin >> e>> f;
	B=a-c;
	A=b-d;
	C=a*d-c*b;
	cout << "phuong trinh co duong thang la "<<(A)<<"*x+"<<(B)<<"*y+"<<(C)<<"=0"<< endl;
	if((A*e)+(B*f)+C==0)
	{ cout << "I thuoc duong thang";}
	else 
	{ cout << "I khong thuoc duong thang";}
	system("pause");
	return 0;
	}
	
