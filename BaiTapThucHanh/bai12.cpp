#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
  do {
  cout << " nhap n ";
  cin >> n;
  if(n>8||n<2)
  { cout << "khong hop le \n";}}
  while (n>8||n<2);

switch (n)
{
	case 2:{ cout <<" mon ki thuat co so lap trinh \n ";}
		break;
	case 3:{ cout <<" buoi sang mon ki thuat so \n";
			 cout << "buoi chieu mon tin hoc dai cuong";}
		break;
	case 4: { cout << "buoi sang mon giai tich 1 \n";
			  cout <<"buoi chieu mon tieng anh 1";}
		break;
	case 5:
		{ cout << " thuc hanh co so lap trinh \n ";}
		break;
	default:
		{ cout << " khong co mon hoc nao \n"<< n<< endl;}}
	return 0;}
