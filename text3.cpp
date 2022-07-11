/*doc 1 day so nguyen cho truoc tu file input.txt
-Dong dau tien la so luong cac phan tu
-Day cac so nguyen
ghi vao file Ketqua.txt cac so nguyen to co trong day*/
#include<iostream>
#include<fstream>
using namespace std;
bool kiem_tra_snt(int n)
{
	if(n<2)
	return false;
	else
	{
		if(n==2)
		return true;
		else
		{ for(int i=2;i<n;i++)
			if(n%i==0)
			return false;}
	}
	return true;}
int main(){
	ifstream fi;
	fi.open("C:\\Users\\AS\\Desktop\\INPUT.txt",ios::in);
	if(fi.fail()==true)
	{cout<<"File khong ton tai!";
		system("pause");
		return 0;}
	int x;
	int a[100];
	fi>>x;
	for(int i=0;i<x;i++)
	{
		fi>>a[i];}
	ofstream fo;
	fo.open("C:\\Users\\AS\\Desktop\\Ketqua.txt",ios::out);
	for(int i=0;i<x;i++)
	{
		if(kiem_tra_snt(a[i])==true)
		fo<<a[i]<<" ";}
	fi.close();
	fo.close();
	system("pause");
	return 0;}
