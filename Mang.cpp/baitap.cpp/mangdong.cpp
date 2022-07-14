#include<iostream>
using namespace std;
void nhap_mang(int *a, int n)
{ 
    for(int i=0; i<n; i++)
    {
        cout <<"nhap cac phần tử a["<<i<<"]=";
        cin >> a[i];
    }
}
void xuat_mang(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i]<< " ";
    }
}
int main()
{
    int *a;
    int n;
    do{
        cout << "nhap n: ";
        cin >> n;
        if(n<=0)
        cout <<" khong hop le";
    } 
    while (n<=0);
    a= new int [n];
    cout << " nhap mang \n";
    nhap_mang(a,n);
    cout << "xuat mang\n";
    xuat_mang(a,n);
    delete []a;
    return 0;
    }