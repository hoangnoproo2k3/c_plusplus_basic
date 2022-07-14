/*cho mảng 1 chiều có các phần tử được nhập từ bàn phím. 
 liệt kê tất cả các phần tử có chữ số ngoài cùng bên trái là chữ số chẵn.*/
 /*#include <iostream>
 using namespace std;
 //#define max 100;
void nhap_mang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "\n nhap phan tu a["<<i<<"]= \n";
        cin >> a[i];
    }
}
void xuat_mang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout <<a[i]<<" ";
    }
}
bool kiem_tra_chu_so_ngoai_cung(int n)
{
    while(n>=10)
    {
        n/=10;
    }
    if(n%2!=0)
    {
        return false;
    }
    return true;
}
void liet_ke(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        if(kiem_tra_chu_so_ngoai_cung(a[i])==true)
        {
            cout << a[i]<< " ";
        }
    }
}
int main()
{
    int a[100];
    int n;
    do{
        cout<<"nhap n:";
        cin >> n;
        if(n<=0||n>100)
        {
            cout<< "n khong thoa man so luong \n";
        }
    }
    while (n<=0||n>100);
    cout <<"NHAP MANG \n";
    nhap_mang(a,n);
    cout<<"XUAT MANG \n";
    xuat_mang(a,n);
    cout << "\n cac phan tu thoa man de bai la:\n";
    liet_ke(a,n);
    system("pause");
    return 0;
}*/
// chế đề:
/* nhập vào từ bàn phím 1 mảng 1 chiều có 3 chữ số.
 xuất ra chương trình các số sao cho có chữ số hàng chục là lẻ*/
 #include<iostream>
 using namespace std;
 void nhap_mang(int a[], int n)
 {
      for(int i=0; i<n; i++)
     {
         do{
             cout <<"nhap phan tu a["<<i<<"]=";
             cin >> a[i];
             if(a[i]<100||a[i]> 999)
             {
                 cout << "phai nhap phan tu co 3 chu so!";
             }
         }
         while(a[i]<100||a[i]> 999);
     }
 }
 void xuat_mang(int a[], int n)
 {
     for(int i=0; i<n;i++)
     {
         cout << a[i]<< " ";
     }
 }
 bool kiem_tra_hang_chuc(int n)
 {
     while (n>=100)
     {
         n/=10;
     }
     if(n%2==0)
     {
         return false;
     }
     return true;
 }
 void liet_ke(int a[], int n)
 {
     for(int i=0; i<n; i++)
     {
         if(kiem_tra_hang_chuc(a[i])==true)
         {
             cout << a[i]<< " ";
         }
     }
 }
 int main ()
 {
     int a[100];
     int n;
     do{
        cout<<"nhap n:";
        cin >> n;
        if(n<=0||n>100)
        {
            cout<< "n khong thoa man so luong \n";
        }
    }
    while (n<=0||n>100);
    cout <<"NHAP MANG \n";
    nhap_mang(a,n);
    cout<<"XUAT MANG \n";
    xuat_mang(a,n);
    cout << "cac phan tu thoa man la\n";
    liet_ke(a,n);
    system ("pause");
    return 0;
 }