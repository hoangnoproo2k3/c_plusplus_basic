#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	a[0]=0;
	a[1]=1;
	for(int i=0; i<n; i++)
	{
		a[i+2]=a[i]+a[i+1];
	}
	for(int i=0; i<n; i++)
	{
		cout << a[i] << ' ';
	}
	
	return 0;
}
