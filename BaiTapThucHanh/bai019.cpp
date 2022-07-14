#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct hocsinh{
	string ma,ten,ngay_sinh, lop;
	int so_buoi_an;
};
void nhap(hocsinh a[], int &n){
	cout<<"Nhap so luong: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\n Hoc sinh thu: "<<i+1;
		fflush(stdin);
		cout<<"\n Nhap ma: "; getline(cin,a[i].ma);
		cout<<"\n Nhap ten: "; getline(cin,a[i].ten);
		cout<<"\n Nhap ngay sinh: "; getline(cin,a[i].ngay_sinh);
		cout<<"\n Nhap lop: "; getline(cin,a[i].lop);
		cout<<"\n Nhap vao so buoi an: "; cin>>a[i].so_buoi_an;}
		}
void thong_tin(hocsinh x){
	cout<<left<<setw(10)<<x.ma<<"\t"
		<<left<<setw(20)<<x.ten<<"\t"
		<<left<<setw(20)<<x.ngay_sinh<<"\t"
		<<left<<setw(10)<<x.lop<<"\t"
		<<left<<setw(15)<<x.so_buoi_an<<"\t"
		<<left<<setw(20)<<x.so_buoi_an*25000<<endl;}
void hien(hocsinh a[], int n){
	cout<<left<<setw(10)<<"ma \t"
		<<left<<setw(20)<<"ten \t"
		<<left<<setw(20)<<"ngay sinh \t"
		<<left<<setw(10)<<"lop \t"
		<<left<<setw(15)<<"so buoi an \t"
		<<left<<setw(20)<<"tong so tien \n";
	for(int i=0;i<n;i++){
		thong_tin(a[i]);}
		}
void tong_tien(hocsinh a[], int n){
	float s=0;
	for(int i=0;i<n;i++){
		s+=a[i].so_buoi_an*25000;}
		cout<<"\t Tong so tien an: "<<s;}
void tim_kiem(hocsinh a[], int n){
	string x;
	fflush(stdin);
	cout<<"\n Tim sinh vien: "; getline(cin,x);
	for(int i=0;i<n;i++){
		if(a[i].ten==x)
			thong_tin(a[i]);
	}
}
int main(){
	hocsinh a[100];
	int n;
	nhap(a,n);
	hien(a,n);
	tong_tien(a,n);
	tim_kiem(a,n);
	return 0;}
	
