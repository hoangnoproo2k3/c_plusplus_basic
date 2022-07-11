/*#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout << " Nhap vao canh a: ";
    cin >> a;
    cout << " Nhap vao canh b: ";
    cin >> b;
    cout << " Nhap vao canh c: ";
    cin >> c;
    if ( a<b+c && b<a+c && c<a+b ){
        if ( a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            cout << " Day la tam giac vuong";
        else if (a==b && b==c)
            cout <<" Day la tam giac deu";
        else if(a==b || a==c || b==c )
            cout <<" Day la tam giac can";
        else if (a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
            cout <<" Day la tam giac tu ";
        else
            cout <<" Day la tam giac nhon ";
    }
    else
        cout <<" Ba canh a, b, c khong phai la ba canh cua mot tam giac";
    return 0;
}
*/
#include <iostream>
using namespace std;
#define max 100;
void nhap_mang(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout << " nhap vao cac phan tu a["<<i<<"]= ";
        cin >> a[i];
    }
}
void xuat_mang(int a[], int n)
{
    for(int i=0; i< n; i++)
    {
        cout << a[i]<< " ";
    }
}
// hàm ki?m tra s? nguyên t?
bool kiem_tra_snt(int n)
{
    if(n<2)
    {
        return false;
    }
    if(n>2) {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
// hàm thêm 1 ph?n t? 
void them(int a[], int &n, int x, int vt)
{
    for(int i=n-1;i>= vt; i--)
    {
        a[i+1]=a[i];}
        a[vt]=x;
        n++;}
// x? lí yêu c?u bài toán thêm x sau s? nguyên t?
void xu_li (int a[],int &n,int x)
{
    for(int i=0; i<n; i++)
    {
        if(kiem_tra_snt(a[i])==true)
        {
            them(a,n,x,i+1);
        }
    }
}
int main()
{
    int a[100];
    int n;
    do{
        cout << " nhap so phan tu cua mang: ";
        cin >> n;
        if(n>100|| n<=0)
        {
            cout << "khong hop le!";
        }
        system("pause");
    }
    while (n>100|| n<=0);
cout << "NHAP MANG";
nhap_mang(a,n);
cout <<"XUAT MANG";
xuat_mang(a,n);
int x;
cout<< "nhap gia tri can them ";
cin >> x;
xu_li(a,n,x);
cout <<"xuat lai mang";
xuat_mang(a,n);
return 0;



}
