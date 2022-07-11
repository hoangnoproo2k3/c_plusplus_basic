#include <iostream>
using namespace std;
#define max 100
void nhap_mang(int a[], int n)
 {for(int i=0; i<n ;i++)
{ cout <<" nhap mang a["<<i<<"]  "<<endl;
 cin >> a[i];}}
 void xuat_mang(int a[], int n)
 {for(int i=0; i<n; i++)
 { cout << a[i] << " ";
 } }
 void them( int a[], int &n, int x, int k)
 { for (int i=n-1; i>=k;i--)
    {a[i+1]=a[i];
      } 
      a[k]=x;
      n++;
      }
void xoa(int a[], int &n, int k)
{ for (int j= k+1; j <n; j++ )
    { a[j-1]=a[j];}
    n--;}
void sap_xep_tang_dan_mang(int a[],int n)
{ for (int i=0; i<n-1; i++)
 {for(int j=i+1;j<n;j++)
 { if(a[i]>a[j])
 {int c=a[i];
     a[i]=a[j];
     a[j]=c;}}}}
// ki thuat liet ke
 bool kiem_tra_chu_so_chan_dau_tien(int n)
 { while (n>=10)
 { n/=10;}
 if(n%2!=0)
 {return false;}
 return true;}
 // ham liet ke
 void liet_ke(int a[], int n)
 { for(int i=0; i<n; i++)
  { if (kiem_tra_chu_so_chan_dau_tien (a[i])==true)
     
  cout <<  a[i]<< " ";}}
  // ki thuat dem 
int dem(int a[], int n, int x)
  { int dem=0;
    for(int i=0; i<n; i++)
    { if (x== a[i])
     dem++;}
     return dem;}

int main ()
{ int n;
int a[100];
int x;
int k;
   do { cout<< " nhap n: ";
   cin >> n;
    if(n<=0|| n>max)
     { cout << "khong hop le";}}
     while (n<=0|| n>max);
     
cout << " =====nhap mang=====";
nhap_mang(a,n);
cout << "=====xuat mang=====";
xuat_mang(a,n);
/*cout << "nhap gia tri them x: ";
cin >> x;
cout << "nhap vi tri k can them: ";
cin >> k;
them(a,n,x,k);
cout<<"mang luc nay la: "<< endl;
xuat_mang(a,n); */

/*cout<<" nhap vi tri can xoa: "<<endl;
cin >> k;
xoa(a,n,k);
cout <<"mang luc nay la: "<< endl;
xuat_mang(a,n);*/
/* cout <<" sap xep tang dan mang:" << endl;
sap_xep_tang_dan_mang(a,n);
cout <<" mang sau khi sap xep"<< endl;
xuat_mang(a,n); */
/* cout << " tat ca cac so co chu so dau tien la chu so chan la: ";
liet_ke(a, n); */
/*cout << " nhap gia tri can dem: ";
cin >>x;
cout << " so gia tri la: "<<dem(a,n,x);*/ 




return 0;
}
