#include<iostream>
#include<cmath>
using namespace std;
float tong(int n)
	{ float s=0;
	 for(int i=1;i<=n;i++)
	 { s= s+1.0/(2*i-1);}
	 return s;}
 int main()
 {
 	int n;
 	cin >>n;
 	cout << tong(n)<<endl;
 	return 0;}
