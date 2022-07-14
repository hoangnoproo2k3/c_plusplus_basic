 /*Nhập n. Viết hàm xuất tất cả các chữ số là số nguyên tố của n*/
/*#include <iostream>
using namespace std;
bool kiem_tra_snt(int n)
{
    if(n<2)
    {
        return false;
    }
    else
    {
        if(n==2)
        {
            return true;
        }
        if(n>2)
        {
            for(int i=2;i<n;i++)
            {
                if(n%i==0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
void xuat_cac_chu_so_nguyen_to(int n)
{
    while (n != 0);
    {
        if(kiem_tra_snt(n%10)==true)
        {
            cout <<"hi"<< n%10<< " ";
        }
        n/=10;
    }
}
int main ()
{
    int n;
    cout << "nhap n:";
    cin >> n;
    xuat_cac_chu_so_nguyen_to(n);
    system("pause");
    return 0;
} */

/*Cho mảng 1 chiều số nguyên. Viết hàm tính trung bình cộng các phần tử có chữ số đầu lẻ*/
#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
    cout << "nhap a["<<i<<"]=";
    cin >> a[i];
    }
}
void xuat(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout << a[i]<< " ";
    }
}
bool chu_so_dau_le( int n)
{
    while(n>=10)
    {
        n/=10;
    }
    if(n%2!=0)
    {
        return true;
    }
    return false;
}
double tinh_tbc(int a[], int n)
{   
    int tong=0;
    int dem=0;
    for(int i=0; i<n;i++)
    {
        if(chu_so_dau_le(a[i])==true)
        {
            tong+=a[i];
            dem++;
        }
    }
    return tong/dem;
}
int main ()
{
    int a[100];
    int n;
    cout<< "nhap n";
    cin >>n;
    nhap(a,n);
    xuat(a,n);
    cout <<"\n tinh tbc:" <<tinh_tbc(a,n);
    return 0;
}