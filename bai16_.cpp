#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=1;
 double s=0;
    cout <<"nhap n";
    cin>> n;
    while (1.0/(n*n)>=0.000001)
    { s=s+1.0/(n*n);
    n++;}
    cout<<"\n gia tri cua n: " <<n;
    system ("pause");
    return 0;}
