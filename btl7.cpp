#include<iostream>
using namespace std;
void nhap_mang(int a[], int &n)
{
    do{
        cout << "nhap n: ";
        cin >> n;
        if(n<0|| n> 50)
        {
            cout <<" So luong phan tu vuot qua gioi han!";
        }
    }while(n<0|| n> 50);
    for(int i=0;i<n;i++)
    {
        cout << "a["<<i<<"]=";
        cin>> a[i];
    }
}
void hien_mang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i]<< " ";
    }
}
// hàm chèn 1 ph?n t? vào v? trí k
void chen(int a[], int &n, int k, int x)
{
    cout << "\nnhap vao vi tri can chen: ";
    cin >> k;
    cout << "\nnhap vao gia tri can chen: ";
    cin >> x;
    for(int i=n-1;i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[k]=x;
    n++;
} 
// hàm s?p x?p theo th? t? gi?m d?n
void sap_xep(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
// hàm tính trung bình c?ng các ph?n t? l?
float trung_binh_cong_phan_tu_le(int a[], int n)
{   float tong=0;
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            tong+=a[i];
            dem++;
        }
    }
    cout << "\nTRUNG BINH CONG CUA CAC PHAN TU LE: "<< tong/dem;
}
int main ()
{
    int a[50];
    int n;
    cout << "=====NHAP MANG=====\n";
    nhap_mang(a,n);
    cout << "\n =====HIEN MANG RA MAN HINH=====\n";
    hien_mang(a,n);
    int k;
    int x;
    chen(a,n,k,x);
    cout << "\n===== MANG SAU KHI DUOC CHEN THEM =====\n";
    hien_mang(a,n);
    sap_xep(a,n);
    cout << "\n===== MANG SAU KHI SAP XEP GIAM DAN =====\n";
    hien_mang(a,n);
    cout <<trung_binh_cong_phan_tu_le(a,n);
    return 0;
}
