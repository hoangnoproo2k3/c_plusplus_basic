#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	float tong=0;
	for(int i=1;i<=n;i++)
	{
		tong+=1.0/(2*i-1);
		}
	cout<<"\Tong:"<<fixed<<setprecision(2)<<tong;
	return 0;}
