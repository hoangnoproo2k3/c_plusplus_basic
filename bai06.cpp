#include<iostream>
using namespace std;
int main()
{
	cout<<"Nhap vao nam: ";
	int n;
	cin >> n;
	if(n%4==0&&n%100!=0||n%400==0)
		cout<<n<<" \nla nam nhuan";
	else
	cout<<n<<"\n Khong phai nam nhuan";
	return 0;}
