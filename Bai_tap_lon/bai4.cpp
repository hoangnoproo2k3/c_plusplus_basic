#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    bool kiemtra=false;
    do
    {
        cout << "nhap n: ";
        cin >>n;
        if(n<0)
        {
            cout<< "n phai la so nguyen duong\n";
        }
    }while (n<0);
    for(int i=1;i<=n;i++)
    {
        if(sqrt(n)==i)
        {
            kiemtra=true;
        }
    }
    if(kiemtra==true)
    {
        cout <<"la so chinh phuong";
    }
    else{
        cout << "khong la so chinh phuong";
    }
    return 0;
}