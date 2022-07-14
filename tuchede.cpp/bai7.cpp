/*Viết chương trình thêm xóa trong bảng động dùng con trỏ.*/
#include <iostream>
using namespace std;
void nhap_mang(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "nhap phan tu a["<<i<<"]=";
        cin >>*(a+i);
    }
}
void xuat_mang(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i];
    }
}
void cap_phat_vung_nho(int *&a, int vung_nho_moi, int vung_nho_cu)
{
    int *temp=new int [vung_nho_cu];
    for(int i=0; i<vung_nho_cu;i++)
    {
        temp[i]=a[i];
    }
    delete []a;
    a=new int [vung_nho_moi];
    for(int i=0; i<vung_nho_cu;i++)
    {
        a[i]=temp[i];
    }
    delete []temp;
}
void them(int *a, int &n, int vt, int x)
{
    cap_phat_vung_nho(a,n+1,n);
    {for(int i=n-1;i>=vt;i--)
    {
        a[i+1]=a[i];
    }
    a[vt]=x;
    n++;}
}
void xoa(int *a, int &n, int vt)
{
    for(int i=vt+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    n--;
    cap_phat_vung_nho(a,n,n);
}
int main()
{
    int n;
    int *a;
    do{
        cout << "nhap n:";
        cin>> n;
        if(n<=0)
        {
            cout << "vo ly, hay nhap lai!";
        }
    }
    while (n<=0);
    a=new int [n];
    cout << "NHAP MANG\n";
    nhap_mang(a,n);
    cout <<"XUAT MANG \n";
    xuat_mang(a,n);
    int vt;
    int x;
    cout << "nhap vi tri can them: ";
    cin >> vt;
    cout << "nhap gia tri can them: ";
    cin >> x;
    them(a,n,vt,x);
    xuat_mang(a,n);
    int k;
    cout << "nhap vi tri can xoa:";
    cin >> k;
    xoa(a,n,k);
    xuat_mang(a,n);
    system("pause");
    return 0;
}