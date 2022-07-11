#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ifstream fi;
	fi.open("C:\\Users\\AS\\Desktop\\input.txt",ios_base::in);
	if(fi.fail()==true)
	{
		cout<<"file khong ton tai!";
		return 0;}
	int x,y;
	fi>>x>>y;
	cout<<"Tong: "<<x+y;
	ofstream fo;
	fo.open("C:\\Users\\AS\\Desktop\\input.txt"output.txt", ios_base::out);
	fo<<x+y;
	fi.close();
	fo.close();
	system("pause");
	return 0;}
	
