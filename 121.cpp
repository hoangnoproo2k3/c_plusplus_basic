#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
struct sanpham
{
    string a;
    string b;
    float c;
    int d;
};
typedef struct sanpham Sanpham;
void nhap_thong_tin(Sanpham &x)
{
    fflush(stdin);
    cout << "nhap ma san pham: ";
    getline(cin,x.a);
    fflush(stdin);
    cout << "\n nhap ten san pham:";
    getline(cin,x.b);
    cout << "Nhap don gia cua san pham:";
    cin>> x.c;
    cout <<"nhap so luong: ";
    cin>>x.d;
}
void xuat_thong_tin_san_pham(Sanpham x)
{
   	cout<< "\nma:"<<x.a;
    cout<< "\nten: "<< x.b;
    cout<< "\ndon gia: "<< x.c;
    cout<< "\nso luong: "<< x.d;
}
struct danhsach
{
    Sanpham *a[100]; 
    int n;
};
typedef struct danhsach Danhsach;
void xuat_danh_sach(Danhsach ds)
{
    for(int i=0; i<ds.n;i++)
    {
        cout << "\n\n\t\t === Thong tin san pham ====";
        xuat_thong_tin_san_pham(*ds.a[i]);
    }
}
void menu(Danhsach &ds)
{
    int luachon;
    while(true)
    {
        system("cls");
        cout<<"\n\n\t\t\t=====MENU=====";
        cout<<"\n\t 1. Nhap danh sach cac san pham";
        cout<<"\n\t 2. Hien danh sach ra man hinh";
        cout<<"\n\t 3. Cap nhat thong tin san phan x: ";
        cout<<"\n\t 4. Sap xep theo so luong tang dan";
        cout<<"\n\t 0. Ket thuc chuong trinh";
        cout<<"\n\n\t\t\t=====END=====";
        cout <<"\n Nhap lua chon :";
        cin >> luachon;
        if(luachon==1)
        {
            Sanpham *x= new Sanpham;
            cout << "\nNhap thong tin: \n";
            nhap_thong_tin(*x);
            ds.a[ds.n]=x;
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
    Danhsach ds;
    ds.n=0;
    menu(ds);
    // gi?i phóng con tr?
    for(int i=0;i<ds.n;i++)
    {
        delete ds.a[i];
    }
    system("pause");
    return 0;
}
