#include<iostream>
using namespace std;
void tim_so_hoan_thien(int n)
{
	int tong=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		tong+=i;}
	if(tong==n)
	cout<<n<<" la so hoan thien!";
	else
	cout<<n<<" khong phai la so hoan thien";
	}
int main()
{
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	tim_so_hoan_thien(n);
	return 0;}
