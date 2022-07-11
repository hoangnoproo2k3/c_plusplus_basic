#include<iostream>

using namespace std;
int main()
{
    float xp,yp,xq,yq,xi,yi,a,b,c;
    cout<<"Nhap toa do diem p:", cin>>xp>>yp;
    cout<<"Nhap toa do diem q:", cin>>xq>>yq;
    a=yq-yp;
    b=xp-xq;
    c=xq*yp-xp*yq;
    cout<<"Phuong trinh duong thang PQ la:"<<a<<"*x+"<<b<<"y+"<<C<<"=0"<<endl;
    cout<<Nhap toa do diem i", cin>>xi>>yi;
    if (a*xi+b*yi+c==0)
    cout<<"Diem i thuoc duong thang PQ.";
    else
        cout<<"Diem i khong thuoc duong thang PQ.";
    return 0;
}
