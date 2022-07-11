#include <iostream>
using namespace std;
bool kiem_tra_so_nguyen_to(int n)
{ if (n<2)
     { return false;}
     else 
     { if (n==2)
            {return true;}
        else {                 
        	   	for (int i=2;i<n;i++)
        			{if (n%i==0){
        				return false;}}}}
        		return true;}
int main ()
		{ int n;
		cout << "nhap n: ";
		cin >> n;
			if (kiem_tra_so_nguyen_to(n)== true)
			{ cout << n << " la so nguyen to";
			}
		if(kiem_tra_so_nguyen_to(n)== false)  
		{
				cout << n<< " khong phai so nguyen to";}
				return 0;
				}
