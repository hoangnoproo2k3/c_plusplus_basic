/* Đếm số lần xuất hiện của các phần tử trong mảng 1 chiều. */
#include <iostream>
using namespace std;
void nhap(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << "nhap a["<<i<<"]=";
        cin >> a[i];
    }
}
void xuat(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout << a[i] << " ";
    }
}
void tim_kiem_phan_tu_rieng_biet(int a[], int b[], int n, int &m)
{   m=0;
    b[m]=a[0];
    //m++;
    for(int i=0;i<n;i++)
    {
        bool kiem_tra=true;
        for(int j=i-1; j>=0;j--)
        {
            if(a[j]==a[i])
            {
                kiem_tra= false;
                break;
            }
        }
        if(kiem_tra==true)
        {
            b[m]=a[i];
            m++;
        }
    }
}

// void so_lan_xuat_hien(int a[], int b[], int n, int &m)
// {
//     tim_kiem_phan_tu_rieng_biet(a,b,n,m);
//     for(int i=0; i<m;i++)
//     {
//         int dem=0;
//         for(int j=0;j<n;j++)
//         {
//             if(b[i]==a[j])
//             {
//                 dem++;
//             }
//         }
//         cout << "\n phan tu "<< b[i]<< " xuat hien "<< dem << " lan";
//     }
// }
int main()
{
    int a[100], b[100];
    int m,n;
    cout << "nhap n:";
    cin >>n;
    cout << "nhập mảng: \n";
    nhap(a,n);
    cout <<"xuất mảng: \n";
    xuat(a,n);
    tim_kiem_phan_tu_rieng_biet(a,b,n,m);
    cout << "mang moi b: ";
    xuat(b,m);
    //so_lan_xuat_hien(a,b,n,m);
    system("pause");
    return 0; 
}