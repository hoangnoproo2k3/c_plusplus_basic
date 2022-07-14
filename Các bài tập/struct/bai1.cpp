/* Khai báo kiểu dữ liệu để biểu diễn thông tin của 1 sinh viên. Biết rằng
+ Mã sô
+ Họ tên
+ Điểm KTLT
+ Điểm Toán rời rạc
+ Điểm CTDL_GT
*/
// cách làm theo con trỏ

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
struct sinhvien
{
    string maso;
    string hoten;
    float diem_KTLT;
    float diem_TRR;
    float diem_CTDLGT;
};
typedef struct sinhvien SINHVIEN;
// hàm nhập thông tin sinh viên
void nhap_thong_tin(SINHVIEN &x)
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
        cout << "nhap diem KTLT: ";
        cin>> x.diem_KTLT;
        if(x.diem_KTLT<0||x.diem_KTLT>10)
        {
            cout << "diem khong hop li \n";
            system("pause");
        }
    } while(x.diem_KTLT<0||x.diem_KTLT>10);
    do{ 
        cout << "nhap diem Toan roi rac: ";
        cin>> x.diem_TRR;
        if(x.diem_TRR<0||x.diem_TRR>10)
        {
            cout << "diem khong hop li \n";
            system("pause");
        }
    } while(x.diem_TRR<0||x.diem_TRR>10);
    do{ 
        cout << "nhap diem CTDL_GT: ";
        cin>> x.diem_CTDLGT;
        if(x.diem_CTDLGT<0||x.diem_CTDLGT>10)
        {
            cout << "diem khong hop li \n";
            system("pause");
        }
    } while(x.diem_CTDLGT<0||x.diem_CTDLGT>10);
}
// hàm xuất thông tin sinh viên
void xuat_thong_tin_sinh_vien(SINHVIEN x)
{
    cout << "\n Ma so: "<< x.maso;
    cout << "\nHo ten: "<< x.hoten;
    cout << "\nDiem KTLT: "<<x.diem_KTLT;
    cout <<" \nDiem Toan roi rac: "<< x.diem_TRR;
    cout << "\n Diem CTDL_GT: "<< x.diem_CTDLGT;
}
struct danhsach
{
    SINHVIEN *ds_sv[100]; // khai báo 100 con trỏ chỉ sinh viên
    int n;
};
typedef struct danhsach DANHSACH;
// hàm xuất danh sách 
void xuat_danh_sach(DANHSACH ds)
{
    for(int i=0; i<ds.n;i++)
    {
        cout << "\n\n\t\t === Thong tin sinh vien ====";
        xuat_thong_tin_sinh_vien(*ds.ds_sv[i]);
    }
}
void menu(DANHSACH &ds)
{
    int luachon;
    while(true)
    {
        system("cls");
        cout << "\n\n\t\t\t====QUAN LY SINH VIEN====";
        cout << "\n\t 1. Them thong tin sinh vien ";
        cout << "\n\t 2. Xuat thong tin sinh vien ra man hinh";
        cout << "\n\t 0. Ket thuc chuong trinh";
        cout <<"\n\n\t\t\t=====END=====";
        cout <<"\n Nhap lua chon :";
        cin >> luachon;
        if(luachon==1)
        {
            SINHVIEN *x= new SINHVIEN;
            cout << "\nNhap thong tin: \n";
            nhap_thong_tin(*x);
            ds.ds_sv[ds.n]=x;
            ds.n++;
        }
        else if(luachon==2)
        {
            cout <<"\n Hien thi danh sach: \n";
            xuat_danh_sach(ds);
            system("pause");
        }
        else{
                break;
            }
    }
}
int main ()
{
    DANHSACH ds;
    ds.n=0;
    menu(ds);
    // giải phóng con trỏ
    for(int i=0;i<ds.n;i++)
    {
        delete ds.ds_sv[i];
    }
    system("pause");
    return 0;
}