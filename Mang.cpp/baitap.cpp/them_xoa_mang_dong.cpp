#include<bits/stdc++.h>
using namespace std;
void nhap_mang(int *a, int n)
{ 
    for(int i=0; i<n; i++)
    {
        cout <<"nhap cac phan tu a["<<i<<"]=";
        cin >> a[i];
    }
}
void xuat_mang(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i]<< " ";
    }
}
void them(int *&a, int &n, int vt, int x)
{   int *b=new int [n];
        for(int i=0; i<n; i++)
        {b[i]=a[i];}
        delete [] a;
        a= new int [n+1];
        for(int i=0; i<=n;i++)
        {
            a[i]=b[i];
        }
        delete [] b;
    {for(int i=n-1; i>=vt; i--)
    {
        a[i+1]=a[i];
    }
    a[vt]=x;
    n++;}
}
void xoa(int *&a, int &n, int vt)
{  
        for(int i=vt+1; i<n; i++)
        {
            a[i-1]=a[i];
        }
        n--;
         int *temp= new int [n];
    for(int i=0; i<n; i++)
    {
        temp[i]=a[i];}
        delete[]a;
        a=new int [n];
        for(int i=0; i< n ;i++)
        {
            a[i]=temp[i];
        }
        delete [] temp; 
}
int main()
{
    int n;
    int *a;
    do{
        cout<< "nhap n:";
        cin >> n;
        if(n<=0)
        cout <<"khong hop le";
    } while (n<=0);
    a = new int [n];
cout << "nhap mang\n";
nhap_mang(a,n);
cout << " xuat mang\n";
xuat_mang(a,n);
/*int x;
int vt;
cout << " vi tri can them";
cin >> vt;
cout <<"\n phan tu x=";
cin >> x;
them(a,n,vt,x);
cout << "mang sau khi them\n";
xuat_mang(a,n);
cout << endl;*/
int k;
cout << "nhap vi tri can xoa\n";
cin >> k;
xoa(a,n,k);
cout << " mang sau khi xoa \n";
cout << (a,n);
delete [] a;
return 0;
}