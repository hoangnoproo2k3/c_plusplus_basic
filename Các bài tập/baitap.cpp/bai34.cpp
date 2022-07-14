// Cho thông tin của HỌC SINH ăn bán trú gồm: 
//mã học sinh, họ tên, ngày sinh, lớp, số buổi ăn bán trú, tổng số tiền (= Số buổi ăn bán trú * 25.000).
// Viết chương trình thực hiện các yêu cầu sau:
// - Nhập danh sách các HỌC SINH
// - In lại danh sách các HỌC SINH dưới dạng bảng
// - Tính tổng số tiền thu được từ tiền ăn bán trú
// - Tìm kiếm thông tin của một học sinh khi biết họ tên đầy đủ
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
// hàm khai báo
struct hocsinh
{
    string ma_sinh_vien;
    string ten;
    string ngay_sinh;
    string lop;
    int so_buoi_an;
};
typedef struct hocsinh HS;
void nhap_thong_tin(HS &x)
{
    while(getchar()!='\n');
    cout<<"Nhap ma sinh vien: "; getline(cin,x.ma_sinh_vien);
    cout<<"Nhap ten sinh vien: "; getline(cin,x.ten);
    cout<<"\nNhap ngay sinh: "; getline(cin,x.ngay_sinh);
    cout<<"\nNhap lop: "; getline(cin,x.lop);
    cout<<"\nNhap so buoi: "; cin>>x.so_buoi_an;
}
void hien_thong_tin(HS x)
{
    cout<<endl<<setw(10)<<x.ma_sinh_vien<<setw(10)<<x.ten<<setw(15)<<x.ngay_sinh
    <<setw(15)<<x.lop<<setw(15)<<x.so_buoi_an<<setw(15)<<x.so_buoi_an*25000;
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
int tinh_tong(danhsach ds)
{
    int tong=0;
    for(int i=0;i<ds.n;i++)
    {
        tong+=ds.k[i].so_buoi_an;
        i++;
    }
    return tong*25000;
}
void tim_kiem(danhsach ds)
{
    string s;
    getline(cin,s);
    for(int i=0;i<ds.n;i++)
    {
        if(ds.k[i].ten==s);
        {
            hien_thong_tin(ds.k[i]);
        }
    }
}
int main()
{
    danhsach ds;
    cout<< "\nnhap so luong sinh vien: ";
    cin>>ds.n;
    nhap_danh_sach(ds);
    hien_danh_sach(ds);
    cout<<"Tong so tien: "<<tinh_tong(ds);
    tim_kiem(ds);
    return 0;
}