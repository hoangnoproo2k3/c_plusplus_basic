/*cho mảng 1 chiều. viết chương trình kiểm tra trong mảng có tồn tại số nguyên tố không? */
#include<iostream>
using namespace std;
void nhap_mang(int a[],int n)
{
    for(int i=0; i<n;i++)
    {
        cout << "nhap phan tu a["<<i<<"]=";
        cin >>a[i];
    }
}
void xuat_mang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i]<< " ";
    }
}
bool kiem_tra_snt(int n)
{
    if(n<2)
    {
        return false;
    }
    if(n>2)
    {
        for(int i=2; i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
// kĩ thuật đặt cờ hiệu
bool kiem_tra_mang(int a[], int n)
{
    bool kiem_tra=false;
        {for(int i=0; i<n; i++)
        {
            if(kiem_tra_snt(a[i])==true)
            {
                kiem_tra=true;
                //return true;
                break;
            }
        }
    //return false
    return kiem_tra;}
}
void kiem_tra_xem(int a[], int n)
{
        if(kiem_tra_mang(a,n)==true)
    {
        cout << "\n mang chua so nguyen to \n";
    }
        if(kiem_tra_mang(a,n)==false)
    {
        cout<< "\n mang khong chua so nguyen to \n";
    }
}
void tong_snt(int a[], int n)
{  int s=0;
     for(int i=0; i<n; i++)
    {  
        if(kiem_tra_snt(a[i])==true)
        {
            cout << a[i]<< " ";
             s+=a[i];
        }
    }
    cout << "\ntong so nguyen to ="<<s;
}
int main ()
{
    int a[100];
    int n;
    do{
        cout << "nhap n:";
        cin >> n;
        if(n<=0|| n>100)
        {
            cout << "khong hop li! \n";
        }
    }
    while(n<=0|| n>100);
    cout << "NHAP MANG\n";
    nhap_mang(a,n);
    cout << "XUAT MANG \n";
    xuat_mang(a,n);
    kiem_tra_xem(a,n);
    tong_snt(a,n);
    system("pause");
    return 0;
}