#include <iostream>
using namespace std;
int kiem_tra(int &n)
{
    int tong=0;
    bool co=false;
    
    if(n==1||n==0)
    {
        cout <<" khong phai la so hoan thien";
    }
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            tong+=i;
            co=true;
        }
    }
  if (co==true)
  {
      if(tong==n)
      {
          cout << " la so hoan thien";
      }
      else 
      {
          cout << "khong phai la so hoan thien";
      }
  }}
  int main()
  {
  	int n;
  	do{
        cout<< "nhap n: ";
        cin >>n;
        if(n<=0)
        {
            cout << "khong hop le";
        }
    }
    while (n<=0);
    kiem_tra(n);
    return 0;}
  	
