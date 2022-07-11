#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
struct thongtin
{
    string a;
    string b;
    float c;
    int d;
};
typedef struct thongtin Thongtin;
void nhap_thong_tin(Thongtin &x)
{   
    fflush(stdin);
    cout << "\nNhap ma san pham: ";
    getline(cin,x.a);
    fflush(stdin);
    cout << "\nNhap ten san pham: ";
    getline(cin,x.b);
    cout << "\nNhap don gia san pham: ";
    cin>> x.c;
    cout <<"\nNhap so luong: ";
    cin>>x.d;
}
// hàm hi?n th? thông tin s?n ph?m
void hien_thong_tin(Thongtin x)
{
    cout<< "\nMa san pham: "<<x.a;
    cout<< "\nTen san pham: "<< x.b;
    cout<< "\nDon gia cua san pham: "<< x.c;
    cout<< "\nSo luong san pham: "<< x.d;
    cout<< "\n ";
}
// hàm khai báo danh sách s?n ph?m
struct danhsach
{
    Thongtin k[100];
    int n;
};
typedef struct danhsach Danhsach;
// hàm nh?p danh sách sinh viên
void nhap_danh_sach(danhsach &ds)
{
    for(int i=0;i<ds.n;i++)
    {
        cout<< "\n\t\t NHAP THONG TIN SAN PHAM THU: "<<i+1;
        nhap_thong_tin(ds.k[i]);
    }
}
// hàm hi?n th? danh sách
void hien_danh_sach(Danhsach ds)
{
    for(int i=0; i<ds.n;i++)
    {
        cout << "\n\t\tTHONG TIN SAN PHAM THU: "<<i+1;
        hien_thong_tin(ds.k[i]);
    }
}
// hàm tìm ki?m theo tên
void tim_kiem_ten(Danhsach ds, string x)
{
    fflush(stdin);
    cout<< "\n\t NHAP TEN SAN PHAM CAN TIM KIEM: ";
    getline(cin,x);
    for(int i=0;i<ds.n;i++ )
    {
        if(ds.k[i].b==x)
        hien_thong_tin(ds.k[i]);
    }
}
// hàm x?p l?i th? t? s?n ph?m theo s? lu?ng tang d?n
void sap_xep(Danhsach ds)
{
    for(int i=0;i<ds.n;i++)
    {
        for(int j=i+1;j<ds.n;j++)
        {
            if(ds.k[i].d > ds.k[j].d)
            {
                
                swap(ds.k[i],ds.k[j]);
            }
        }
    }
    hien_danh_sach(ds);
}
// hàm th?ng kê cái s?n ph?m có giá t? x->y
void thong_ke(Danhsach &ds)
{
    float x,y;
    cout<< "nhap x: "; cin>>x;
    cout<< "nhap y: "; cin>>y;
    for(int i=0;i<ds.n;i++)
    {
        if(ds.k[i].c>x&&ds.k[i].c<y)
        {
            hien_thong_tin(ds.k[i]);
        }
    }
    ofstream fileout;
    fileout.open("_sach.dat", ios::out|ios::ate|ios::binary);
    fileout.write((char*)&ds,sizeof(ds.n));
    fileout.close();
}
int main()
{
    Danhsach ds;
    cout<< "\n\n\t\t NHAP SO LUONG SAN PHAM: ";
    cin>>ds.n;
    cout<< "\n\t===NHAP DANH SACH====\n";
    nhap_danh_sach(ds);
    cout<<"\n\t===HIEN DANH SACH CAC SAN PHAM===\n";
    hien_danh_sach(ds);
    //string x;
    //tim_kiem_ten(ds,x);
    //sap_xep(ds);
    thong_ke(ds);
    
    system("pause");
    return 0;
}
