#include<bits/stdc++.h>
/*#include<string>
#include<iomanip>*/
using namespace std;
int n=0;
struct LK
{
	string ten;
	string quy_cach;
	string loai;
	float don_gia1;
	float don_gia2;};
void nhap(LK &x)
{
	while(getchar()!='\n');
	cout<<"Ten linh kien: ";
	getline(cin,x.ten);
	cout<<"\nQuy cach: ";
	getline(cin,x.quy_cach);
	cout<<"\nLoai:";
	getline(cin,x.loai);
	cout<<"Don gia loai 1: ";
	cin>>x.don_gia1;
	cout<<"Don gia loai 2: ";
	cin>>x.don_gia2;}
	//hàm hien thong tin
void hien(LK x)
{ cout << setw(30) << left << x.ten << "\t";
	cout << setw(12) << left << x.quy_cach << "\t";
	cout << setw(10) << left << x.loai<<"\t";
    cout << setw(10)<<left<< x.don_gia1<<"\t";
    cout << setw(10)<<left<< x.don_gia2<<"\t";
    cout<< "\n ";}
struct danhsach
{
    LK k[100];
    int n;
};
//ham nhap danh sach linh kien
void nhap_danh_sach(danhsach &ds)
{
	for(int i=0;i<ds.n;i++)
	{ cout<<"Nhap thong tin san pham thu "<<i+1;
	nhap(ds.k[i]);}
	}
//ham hien danh sach linh kien
void hien_danh_sach(danhsach ds)
{
	cout << setw(30) << left << "Ten" << "\t" << setw(12) << left << "quy_cach" << "\t" 
    << setw(10) << left << "loai" <<"\t"<< setw(10)<<left<< "don gia loai 1 "<<setw(10)<<left<<"don gia loai 2 "<< endl;
    for(int i=0; i<ds.n;i++)
    { hien(ds.k[i]);}
    }
//hàm sap xep giam dan theo loai linh kien va ten 
void sap_xep(danhsach ds)
{
	for(int i=0;i<ds.n;i++)
	{   for(int j=i+1;j<ds.n;j++)
		{ if(ds.k[i].ten.compare(ds.k[j].ten)<0)
		{
			swap(ds.k[i],ds.k[j]);
		}
		else if(ds.k[i].loai.compare(ds.k[j].loai)<0)
		{
			swap(ds.k[i],ds.k[j]);
		}
		hien(ds.k[i]);
	}
}
}
void kiem_tra(danhsach ds)
{ int dem=0;
	for(int i=0;i<ds.n;i++)
	{
	if(ds.k[i].loai=="a")
	dem++;}
	if(dem>=15)
	cout<<"\na du linh kien";
	else
	cout<<"\na thieu linh kien";}

int main()
{ 	danhsach ds;
    cout<< "\n\n\t\t NHAP SO LUONG LINH KIEN: ";
    cin>>ds.n;
    cout<< "\n\t===NHAP DANH SACH====\n";
    nhap_danh_sach(ds);
    cout<<"\n\t===HIEN DANH SACH CAC LINH KIEN===\n";
    hien_danh_sach(ds);
    cout<<"\n\t==Hien sau khi sap xep==\n";
    sap_xep(ds);
    kiem_tra(ds);
    return 0;}

