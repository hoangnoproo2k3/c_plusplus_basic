#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n=1;
	float s=0;
	cin>>n;
	while(1.0/(n*n)>0.000001)
	{ s+=1.0/(n*n);
	n++;}
	cout<<"Gia tri n: "<<n;
	//cout<<"Gia tri cua pi: "<<sqrt(6*s);
	return 0;}
