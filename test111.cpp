#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	int n, i;
	double S=0,x=0;
	cin >> n;
	if (n<=0)
	{
		cout << "Nhap lai n"; cin >> n;
		}
	for (i=1; i<=n; i++)
	{
		x+=i;
		S= S+1.0/x;
		}
	
	cout << fixed << setprecision(2) << S;
	return 0;
	}
