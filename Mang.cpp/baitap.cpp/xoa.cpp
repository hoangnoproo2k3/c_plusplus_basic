#include<iostream>
using namespace std;
void nhap_mang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "nhap a["<<i<<"]=";
        cin >> a[i];
    }
}
void xuat_mang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i] <<" ";
    }
}
void xoa(int a[], int &n, int vt)
{
    for(int i=vt+1; i<n;i++)
    {
        a[i-1]=a[i];
    }
    n--;
}
void xu_li(int a[], int &n)
{
    for(int i=0; i<n;i++)
    {
        if(a[i]%5==0)
        {
            xoa(a,n,i);
            i--;
        }
    }
}
int main()
{
    int a[100];
    int n;
    cin >>n;
    nhap_mang(a,n);
    xuat_mang(a,n);
    xu_li(a,n);
    xuat_mang(a,n);
    return 0;
}