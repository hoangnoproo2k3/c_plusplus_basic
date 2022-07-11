#include<bits/stdc++.h>
using namespace std;

struct hocsinh
{
    string hoten,masv,lop,ngsinh;
    int soban,tongsotien;
};
void nhap(hocsinh ds[], int &n)
{
    cout<<"\n Nhap so hoc sinh: ";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n Nhap ho ten: ";
        fflush(stdin);
        getline(cin,ds[i].hoten);
        cout<<"\n Nhap ma sinh vien: ";
        getline(cin,ds[i].masv);
        cout<<"\n Nhap ten lop: ";
        getline(cin,ds[i].lop);
        cout<<"\n Nhap ngay sinh: ";
        fflush(stdin);
        cin>> ds[i].ngsinh;
        cout<<"\n Nhap so buoi an: ";
        cin>>ds[i].soban;
        ds[i].tongsotien=ds[i].soban*25000;
        
    }
}
void hien(hocsinh ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<setw(20)<<ds[i].hoten;
        cout<<setw(20)<<ds[i].masv;
        cout<<setw(20)<<ds[i].lop;
        cout<<setw(20)<<ds[i].ngsinh;
        cout<<setw(20)<<ds[i].soban;
        cout<<setw(20)<<ds[i].tongsotien;
    }
}
void Tongtien(hocsinh ds[],int n)
{
    int tong=0;
        cout<<"\n Tong tien: ";
    for(int i=0;i<n;i++)
    {
        tong+=ds[i].tongsotien;
    }
    cout<<tong;
}
void timnguoi(hocsinh ds[],int n)
{
    string s;
    cout<<"\n Nhap ten: ";
    fflush(stdin);
    getline(cin, s);
    for(int i=0;i<n;i++)
    {
        if(ds[i].hoten.compare(s)==0)
        hien(&ds[i],1);
    }
}
int main ()
{
    hocsinh ds[20];
    int n;
    nhap(ds,n);
    hien(ds,n);
    timnguoi(ds,n);
    return 0;
}
