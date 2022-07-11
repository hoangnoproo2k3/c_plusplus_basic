#include<iostream>
using namespace std;
#include<fstream>
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
	return false;
	}
int main()
{
	ifstream fi;
	fi.open("C:\\Users\\AS\\Desktop\\INPUT.txt",ios::in);
	if(fi.fail()==true)
	{ cout<<"File khong ton tai!";
		system("pause");
		return 0;}
	int x;
	fi>>x;
	ofstream fo;
	fo.open("C:\\Users\\AS\\Desktop\\Output.txt",ios::out);
	if(kiem_tra_snt(x)==true)
	fo<<"true";
	else 
	fo<<"false";
	fi.close();
	fo.close();
	system("pause");
	return 0;}
