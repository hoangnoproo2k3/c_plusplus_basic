#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
#include<iomanip>
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
void hien_thong_tin(Thongtin x)
{
    cout << setw(30) << left << x.a << "\t";
	cout << setw(12) << left << x.b << "\t";
	cout << setw(10) << left << x.c<<"\t";
    cout << setw(10)<<left<< x.d;
    cout<< "\n ";
}
struct danhsach
{
    Thongtin k[100];
    int n;
};
typedef struct danhsach Danhsach;
// hàm nhap danh sách sinh viên
void nhap_danh_sach(danhsach &ds)
{
    for(int i=0;i<ds.n;i++)
    {
        cout<<"Nhap thong tin sp thu: "<<i+1;
        nhap_thong_tin(ds.k[i]);
    }
}
// hàm hi?n th? danh sách
void hien_danh_sach(Danhsach ds)
{
    cout << setw(30) << left << "Ma" << "\t" << setw(12) << left << "Ten" << "\t" 
    << setw(10) << left << "don gia" <<"\t"<< setw(10)<<left<< "so luong"<< endl;
    for(int i=0; i<ds.n;i++)
    {
        
        hien_thong_tin(ds.k[i]);
    }
}
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
// hàm thong kê các san pham có giá tu x->y
void thong_ke_ghi_file(Danhsach &ds){
    float x,y;
    cout<< "nhap x: "; cin>>x;
    cout<< "nhap y: "; cin>>y;
    ofstream fileout;
    fileout.open("sach.dat", ios::out|ios::binary);
    for(int i=0;i<ds.n;i++)
    {
        if(ds.k[i].c>x&&ds.k[i].c<y)
        {
        hien_thong_tin(ds.k[i]);        
    	fileout.write((char*)&ds.k[i],sizeof(ds.n));
        }
    }
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
    thong_ke_ghi_file(ds);
    
    system("pause");
    return 0;
}
