/*Thiết kế chương trinh lưu trữ thông tin sinh viên của 1 trường 
đại học nhỏ biết gồm:mã số, họ tên, năm sinh, điểm trung bình
1. khai báo cấu trúc sinh viên
2. Nhập danh sách sinh viên
3. Xuất danh sách sinh viên
4. tìm kiếm thông tin dựa vào điểm
5. Thêm 1 sinh viên vào 1 vị trí bất kì
6. sắp xếp sinh viên tăng dần theo điểm
7. xóa 1 sinh viên khỏi danh sách */
// cách dùng mảng 1 chiều 1 cấu trúc struct
#include<iostream>
#include<string>
#include<conio.h>
#include<cmath>
using namespace std;
struct sinhvien
{
    string maso;
    string hoten;
    int namsinh;
    float diem_tb;
};
typedef struct sinhvien SinhVien;
// hàm nhập thông tin cho 1 sinh viên
void nhap_thong_tin_sinh_vien(SinhVien &x)
{
    while(getchar()!='\n');
    cout << "\n nhap ma so:";
    getline(cin,x.maso);
    cout << "\n nhap ho ten:";
    getline(cin,x.hoten);
    cout << "\n nhap nam sinh: ";
    cin >> x.namsinh;
    cout << "\n nhap diem trung binh:";
    cin >> x.diem_tb;
}
// hàm xuất thông tin cho 1 sinh viên
void xuat_thong_tin_sinh_vien(SinhVien x)
{
    cout << "\n Ma so:"<< x.maso;
    cout << "\n Ho ten:"<< x.hoten;
    cout << "\n Nam sinh: "<< x.namsinh;
    cout << "\n Diem trung binh:"<<x.diem_tb;
}
// hàm nhập danh sách sinh viên
void nhap_danh_sach_sinh_vien(SinhVien a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << "\n\t Nhap Thong Tin Sinh Vien Thu"<<i+1<<endl;
        nhap_thong_tin_sinh_vien(a[i]);
    }
}
// hàm xuất danh sách sinh viên
void xuat_danh_sach_sinh_vien(SinhVien a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << "\n\t Thong Tin Sinh Vien Thu"<<i+1<<endl;
        xuat_thong_tin_sinh_vien(a[i]);
    }
}
// hàm tìm kiếm thông tin của sinh viên thông qua nhập vào 1 con điểm
void tim_kiem_thong_tin_qua_diem(SinhVien a[], int n, float diem)
{    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].diem_tb==diem)
        {
            cout << "Thong tin cua sinh vien: "<< dem++;
            xuat_thong_tin_sinh_vien(a[i]);
        }
    }
}
// hàm thêm 1 sinh viên vào vị trí bất kì
void them(SinhVien a[], int &n, int vt, SinhVien x)
{
    for(int i=0; i<n;i++)
    {
        a[i+1]=a[i];
    }
    a[vt]=x;
    n++;
}
// hàm sắp xếp danh sách theo bảng điểm trung bình tăng dần
void sap_xep_danh_sach(SinhVien a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].diem_tb>a[j].diem_tb)
            {
                float tam=a[i].diem_tb;
                a[i].diem_tb=a[j].diem_tb;
                a[j].diem_tb=tam;
            }
        }
    }
}
// hàm xóa 1 sinh viên bất kì trong danh sách
void xoa(SinhVien a[], int &n, int vt)
{
    for(int i=0;i<n;i++)
    {
        a[i-1]=a[i];
    }
    n--;
}
// hàm xóa sinh viên có điểm trung bình dưới 5
void xoa_duoi_5(SinhVien a[], int &n)
{
    for(int i=0; i<n;i++)
    {
        if(a[i].diem_tb<5)
        {
            xoa(a,n,i);
            i--;
        }
    }
}
int main()
{
    SinhVien a[100];
    int n;
    cout<< "Nhap so luong sinh vien: ";
    cin >> n;
    cout << "\n\n\t\t NHAP DANH SACH:\n";
    nhap_danh_sach_sinh_vien(a,n);
    cout << "\n\n\t\t XUAT DANH SACH:\n";
    xuat_danh_sach_sinh_vien(a,n);
    /*float x;
    cout<< "nhap vao diem can tim x=";
    cin >> x;
    tim_kiem_thong_tin_qua_diem(a,n,x);*/
    /*int vt;
    cout<< "nhap vi tri can them:";
    cin >> vt;
    SinhVien x;
    cout << "nhap thong tin cua sinh vien can them: ";
    nhap_thong_tin_sinh_vien(x);
    them(a,n,vt,x);
    cout << "\n\n\t\t XUAT DANH SACH:\n";
    xuat_danh_sach_sinh_vien(a,n);
    sap_xep_danh_sach(a,n);
    cout << "\n\n\t\t XUAT DANH SACH SAU SAP XEP:\n";
    xuat_danh_sach_sinh_vien(a,n);*/
    int vt;
    cout<< "nhap vi tri can xoa:";
    cin >> vt;

    xoa_duoi_5(a,n);
    cout << "\n\n\t\t XUAT DANH SACH SAU XOA:\n";
    xuat_danh_sach_sinh_vien(a,n);
    system("pause");
    return 0;
}