/*Thông tin sinh viên bao gồm
HỌ tên: tối đa 30 kí tự
Mã sinh viên: tối đa 10 kí tự
Điểm trung bình (0<=10)
1. nhập danh sách sinh viên
2. xuất ra sinh viên có điểm trung bình cao nhất
*/
// cách dùng cấu trúc struct lồng nhau
#include <iostream>
using namespace std;
#include<string>
struct sinhvien
{
    string hoten;
    string masv;
    float diem_tb;
};
typedef struct sinhvien SinhVien;
// nhập thông tin cho 1 sinh viên
void nhap(SinhVien &x)
{
    while(getchar()!='\n');
    do{ //cin.ignore();
        cout << "nhap Ma so: ";
        getline(cin,x.maso);
        if(x.maso.length()>20)
        {
            cout << "chieu dai khong hop le \n";
            system("pause");
        }
    } while(x.maso.length()>20);
    do{ //cin.ignore();
        cout << "nhap Ho ten: ";
        getline(cin,x.hoten);
        if(x.hoten.length()>30)
        {
            cout << "chieu dai khong hop le \n";
            system("pause");

        }
    } while(x.hoten.length()>30);
    do{
        cout << "nhap diem trung binh sinh vien: ";
        cin >> x.diem_tb;
        if(x.diem_tb>10|| x.diem_tb<0)
        {
            cout << "vui long nhap lai diem!\n";
            system("pause");
        }
    }while (x.diem_tb>10|| x.diem_tb<0);
}
// hàm xuất thông tin cho sinh viên đó
void xuat(SinhVien x)
{
    cout << "Ho ten: "<< x.hoten;
    cout <<"\n Ma sinh vien: "<<x.masv;
    cout <<"\n Diem_tb: "<<x.diem_tb;}
struct danhsach
{
    SinhVien a[100];
    int n;
};
typedef struct danhsach DanhSach;
void Nhap_danh_sach(DanhSach &ds)
{
    for(int i=0;i<ds.n;i++)
    {
        cout << "Nhap danh sach sinh vien: \n";
        nhap(ds.a[i]);
        system("pause");
    }
}
void Xuat_danh_sach(DanhSach &ds)
{
    for(int i=0;i<ds.n;i++)
    {
        cout << "Hien danh sach sinh vien: \n";
        xuat(ds.a[i]);
        system("pause");
    }
}
int main()
{
    DanhSach ds;
    int n;
    cout << "\n Nhap so luong sinh vien: ";
    cin >> n;
    cout << "nhap danh sach sinh vien: \n";
    Nhap_danh_sach(ds);
    cout << "Danh sach: \n";
    Xuat_danh_sach(ds);
    system("pause");
    return 0;

}
