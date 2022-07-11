#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
struct thongtin
{
    string ma;
    string ten;
    float dongia;
    int soluong;
};
typedef struct thongtin Thongtin;
void nhap_thong_tin(Thongtin& x)
{
    while (getchar() != '\n');
    cout << "\nNhap ma san pham: ";
    getline(cin, x.ma);
    fflush(stdin);
    cout << "\nNhap ten san pham: ";
    getline(cin, x.ten);
    cout << "\nNhap don gia san pham: ";
    cin >> x.dongia;
    cout << "\nNhap so luong: ";
    cin >> x.soluong;
}
// hàm hi?n th? thông tin s?n ph?m
void hien_thong_tin(Thongtin x)
{
    cout << setw(30) << left << x.ma << "\t";
    cout << setw(12) << left << x.ten << "\t";
    cout << setw(10) << left << x.dongia << "\t";
    cout << setw(10) << left << x.soluong;
    cout << "\n ";
}
// hàm khai báo danh sách s?n ph?m
struct danhsach
{
    Thongtin k[100];
    int n;
};
typedef struct danhsach Danhsach;
// hàm nh?p danh sách sinh viên
void nhap_danh_sach(danhsach& ds)
{
    for (int i = 0; i < ds.n; i++)
    {
        cout << "Nhap thong tin sp thu: " << i + 1;
        nhap_thong_tin(ds.k[i]);
    }
}
// hàm hi?n th? danh sách
void hien_danh_sach(Danhsach ds)
{
    cout << setw(30) << left << "Ma" << "\t" << setw(12) << left << "Ten" << "\t"
        << setw(10) << left << "don gia" << "\t" << setw(10) << left << "so luong" << endl;
    for (int i = 0; i < ds.n; i++)
    {

        hien_thong_tin(ds.k[i]);
    }
}

// hàm th?ng kê cái s?n ph?m có giá t? x->y
void thong_ke_ghi_file(Danhsach& ds)
{
    float x, y;
    cout << "nhap x: "; cin >> x;
    cout << "nhap y: "; cin >> y;
    for (int i = 0; i < ds.n; i++)
    {
        if (ds.k[i].dongia > x && ds.k[i].dongia < y)
        {
            hien_thong_tin(ds.k[i]);
        }
    }
    ofstream fileout;
    fileout.open("sach.dat", ios::out | ios::binary);
    fileout.write((char*)&ds, sizeof(ds.n));
    fileout.close();
}
int main()
{
    Danhsach ds;
    cout << "\n\n\t\t NHAP SO LUONG SAN PHAM: ";
    cin >> ds.n;
    cout << "\n\t===NHAP DANH SACH====\n";
    nhap_danh_sach(ds);
    cout << "\n\t===HIEN DANH SACH CAC SAN PHAM===\n";
    hien_danh_sach(ds);
    /*string x;
    tim_kiem_ten(ds,x);*/
    //sap_xep(ds);
    thong_ke_ghi_file(ds);

    system("pause");
    return 0;
}
