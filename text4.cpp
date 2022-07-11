/*Doc 1 day so nguyen cho truoc trong file input.txt
ghi vao cac file ketqua.txt la cac so nguyen to*/
#include<iostream>
#include<fstream>
using namespace std;
bool kiem_tra_snt(int n)
{
	 if(n<2)
	return false;
	else{
	if(n==2)
		return true;
	else
	{ for(int i=0;i<n;i++)
		if(n%i==0)
		return false;
	}
	}
	return true;}
int main()
{
	ifstream fi;
	fi.open("C:\\Users\\AS\\Desktop\\INPUT.txt",ios::in);
	if(fi.fail()==true)
	{cout<<"File khong ton tai!";
	system("pause");
	return 0;}
	int a[100];
	int i=0;
	int dem=0;
	while(!fi.eof())
	{
		fi>>a[i];
		i++;
		dem++;}
	ofstream fo;
	fo.open("C:\\Users\\AS\\Desktop\\Ketqua.txt",ios::out);
	for(i=0;i<dem;i++)
	{
		if(kiem_tra_snt(a[i])==true)
		fo<<a[i]<<" ";
		}
	fi.close();
	fo.close();
	return 0;}
