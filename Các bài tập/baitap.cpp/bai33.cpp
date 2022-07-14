#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
// hàm nhập thông tin
struct xe
{
 string ten_xe;
 string mau_xe;
 int so_cho_ngoi;
 int nam_sx;
 int gia_thue;
};

void nhap(xe &x)
{
   while(getchar()!='\n');
   cout<< "\nnhap ten xe: "; getline(cin,x.ten_xe);
   cout<<"\nNhap mau xe: "; getline(cin,x.mau_xe);
   cout<<"\nNhap vao so cho ngoi: "; cin >> x.so_cho_ngoi;
   cout<<"\nNhap vao nam san xuat: "; cin >> x.nam_sx;
   cout<<"\nNhap vao gia cho thue 1 ngay: "; cin >> x.gia_thue;
}
void hien_thong_tin(xe x)
{
    cout<<endl<<setw(10)<<x.ten_xe<<setw(10)<<x.mau_xe<<setw(10)<<x.so_cho_ngoi
    <<setw(10)<<x.nam_sx<<setw(10)<<x.gia_thue;
}
struct danhsach
{
    xe k[100];
    int n;
};
void nhap_danh_sach(danhsach &ds)
{
    for(int i=0;i<ds.n;i++)
    {
        nhap(ds.k[i]);
    }
}
void hien_danh_sach(danhsach ds)
{
    cout <<setw(10)<< "Ten"<<setw(10)<< "Mau sac"<< setw(10)<< " So cho ngoi"
    <<setw(10)<< "Nam sx"<<setw(10)<<"gia thua" <<endl;
    for(int i=0; i<ds.n;i++)
    {
        hien_thong_tin(ds.k[i]);
    }
}
// hàm sắp xếp giảm dần
void sap_xep(danhsach ds)
{
    for(int i=0;i<ds.n;i++)
    {
        for(int j=i+1;j<ds.n;j++)
        {
            if(ds.k[i].gia_thue<ds.k[j].gia_thue)
            {
                swap(ds.k[i],ds.k[j]);
            }
        }
    }
}
// hàm tính giá thuê từ ngày x- y
int xu_li(danhsach ds)
{
    int a, b;
    cout<< "\nNhap ngay cua x: "; 
    cin >> a;
    cout<<"\n Nhap ngay cua y: ";
    cin >> b;
    sap_xep(ds);
    for(int i=0;i<ds.n;i++)
    {
        if(ds.k[i].so_cho_ngoi==5&&(ds.k[i].gia_thue>=a||ds.k[i].gia_thue<=b))
        {
            hien_thong_tin(ds.k[i]);
        }
    }
}
// hàm xóa 1 xe
void xoa(danhsach &ds, int vt)
{
    for(int i=vt+1;i<=ds.n;i++)
    {
        ds.k[i-1]=ds.k[i];        
    }
    ds.n--;
}
void xoa_danh_sach(danhsach ds)
{
    int n;
    cout<<"\nNhap n: ";
    cin>>n;
    for(int i=0;i<ds.n;i++)
    {
        if((2021-ds.k[i].nam_sx)==n)
        {
            xoa(ds,i);
        }
    }
    hien_danh_sach(ds);
}
void tang_gia(danhsach &ds)
{
    int y;
    cout<< "\nNhap nam: ";
    cin>>y;
    for(int i=0;i<ds.n;i++)
    {
        
        if(ds.k[i].nam_sx==y&&ds.k[i].so_cho_ngoi==5)
        {
            ds.k[i].gia_thue+=ds.k[i].gia_thue*0.1;
            hien_thong_tin(ds.k[i]);
        }
    }
}
int main()
{
    danhsach ds;
    cout<< "\nnhap so luong xe: ";
    cin>>ds.n;
    nhap_danh_sach(ds);
    hien_danh_sach(ds);
    //cout<<"sau xu li: ";
    //xu_li(ds);
    xoa_danh_sach(ds);
    tang_gia(ds);
    return 0;
}