#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
// hàm khai báo
struct hocsinh
{
    string ma;
    string ten;
    string gioi_tinh;
    string nam_sinh;
    int ngay;
    int gia;
};
typedef struct hocsinh HS;
void nhap_thong_tin(HS &x)
{
    while(getchar()!='\n');
    cout<<"Nhap ma  "; getline(cin,x.ma);
    cout<<"Nhap ten : "; getline(cin,x.ten);
    cout<<"\nNhap nam sinh: "; getline(cin,x.gioi_tinh);
    cout<<"\nNhap gioi tinh: "; getline(cin,x.nam_sinh);
    cout<<"\nNhap ngay: "; cin>>x.ngay;
}
void hien_thong_tin(HS x)
{
    cout<<endl<<setw(10)<<x.ma<<setw(10)<<x.ten<<setw(15)<<x.gioi_tinh
    <<setw(15)<<x.nam_sinh<<setw(15)<<x.ngay<<setw(15)<<x.so_buoi_an*25000;
}
struct danhsach
{
    HS k[100];
    int n;
};
void nhap_danh_sach(danhsach &ds)
{
    for(int i=0;i<ds.n;i++)
    {
        nhap_thong_tin(ds.k[i]);
    }
}
void hien_danh_sach(danhsach ds)
{
    cout <<setw(10)<< "Ma sinh vien"<<setw(10)<< "Ho Ten"<< setw(20)<< " Ngay sinh "
    <<setw(15)<< "Lop "<<setw(15)<<"So buoi " <<setw(15)<<"tong so tien"<< endl;
    for(int i=0; i<ds.n;i++)
    {
        hien_thong_tin(ds.k[i]);
    }
}