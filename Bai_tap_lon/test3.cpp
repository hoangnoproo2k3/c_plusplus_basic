#include <iostream>
using namespace std;
void nhap_mang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "nhap phan tu a["<<i<<"]=";
        cin >> a[i];
    }
}
void xuat_mang( int a[], int n)
{
    for(int i=0; i<n ; i++)
    {
        cout << a[i]<< " ";
    }
}
int chancuoi(int a[] , int n)
{
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]% 2==0)
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int a[100];
    int n;
    cin >> n;
    cout << "nhap mang \n";
    nhap_mang(a,n);
    cout << "xuat mang \n";
    xuat_mang(a,n);
    cout<<chancuoi(a,n);
    return 0;
}