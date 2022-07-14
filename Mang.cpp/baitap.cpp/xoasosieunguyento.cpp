#include <iostream>
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
// hàm xóa phần tử bất kì 
void xoa(int a[], int &n, int vt)
{
    for(int i=vt+1; i<n; i++)
    {
        a[i-1]=a[i];}
        n--;
    
}
// hàm kiểm tra số nguyên tố
bool kiem_tra_snt(int n)
{
    if(n<2)
    {
        return false;
    }
    if(n>2)
    {
        for(int i=0;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
// hàm kiểm tra số siêu  nguyên tố
bool kiem_tra_sieu_nguyen_to(int n)
{
    while (n!=0)
    {
        if(kiem_tra_snt(n)==false)
        {
            return false;
        }
        n/=10;
    }
    return true;
}
// hàm xóa số siêu nguyên tố 
void xoa_so_sieu_nguyen_to(int a[], int &n)
{
    for(int i=0; i<n;i++)
    {
        if(kiem_tra_sieu_nguyen_to(a[i])==true)
        {
            xoa(a,n,i);
            i--;
        }
    }
}
// hàm chính 
int main ()
{
    int a[100];
    int n;
    do { 
        cout << "nhap n ";
        cin >> n;
        if(n>100&& n<=0)
        {
            cout << "khong hop le";
        }
    } while (n>100&& n<=0);
    cout << "\n\n\t\t\t NHAP MANG ";
    nhap_mang(a,n);
    cout << "\n\n\t\t\t XUAT MANG ";
    xuat_mang(a,n);
    xoa_so_sieu_nguyen_to(a,n);
    cout <<" sau khi xoa con lai mang la:";
    xuat_mang(a,n);
    return 0;
}
