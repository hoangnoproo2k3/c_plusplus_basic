#include <iostream>
using namespace std;
int UCLN(int a,int b)
{ if (a>b)
	{for (int i=a;i>=1;i--)
	{ if (a%i==0&& b%i==0)
	   { return i;}}}
	else 
	{ for (int i=b; i>=1;i--)
		{ if (a%i==0&&b%i==0)
		  { return i;}}}}
		  
int BCNN(int a,int b)
   {return ( a*b ) / UCLN(a,b);}
  
int main ()
{ int a,b;
   cout << "nhap a: ";
   cin >>a;
   cout << "nhap b: ";
   cin >>b;
    cout << "\n UCLN "<<UCLN(a,b);
    cout << "\n BCNN "<< BCNN(a,b);
    system("pause");
    return 0;
    }
