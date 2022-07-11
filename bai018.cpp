#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct xe{
	string ten, mausac;
	int so_cho_ngoi, nam, gia;
};
void nhap(xe a[], int &n){
	cout<<"\n Nhap so luong xe: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\n so thu tu: "<<i+1;
		fflush(stdin);
		cout<<"\n Nhap ten: "; getline(cin,a[i].ten);
		cout<<"\n Nhap mau sac: "; getline(cin, a[i].mausac);
		cout<<"\n Nhap so cho ngoi: "; cin>>a[i].so_cho_ngoi;
		cout<<"\n Nhap nam san xuat: "; cin>>a[i].nam;
		cout<<"\n Nhap don gia: "; cin>>a[i].gia;}
	}
void hien(xe a[], int n){
	cout<<left<<setw(5)<<"STT"<<"\t"<<left<<setw(20)<<"Ten xe"<<"\t"
		<<left<<setw(20)<<"Mau sac"<<"\t"<<left<<setw(15)<<"So cho ngoi"<<"\t "<<left<<setw(10)
		<<"Nam sx"<<"\t"<<left<<setw(15)<<"don gia"<<"\n";
	for(int i=0;i<n;i++){
		cout<<left<<setw(5)<<i+1<<"\t"<<left<<setw(20)<<a[i].ten<<"\t"
		<<left<<setw(20)<<a[i].mausac<<"\t"
		<<left<<setw(15)<<a[i].so_cho_ngoi<<"\t"
		<<left<<setw(10)<<a[i].nam<<"\t"
		<<left<<setw(15)<<a[i].gia<<"\n";}
		}
void sap_xep(xe a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].gia<a[j].gia){
				xe tg=a[i];
				a[i]=a[j];
				a[j]=tg;}
				}
		}
	hien(a,n);
	}
void tim_kiem(xe a[], int n){
	int x,y;
	cout<<"\n Nhap x: "; cin>>x;
	cout<<"\n Nhap y: "; cin>>y;
	for(int i=0;i<n;i++){
		if(a[i].so_cho_ngoi==5&&a[i].gia>=x&&a[i].gia<=y){
		cout<<left<<setw(5)<<i+1<<"\t"<<left<<setw(20)<<a[i].ten<<"\t"
		<<left<<setw(20)<<a[i].mausac<<"\t"
		<<left<<setw(15)<<a[i].so_cho_ngoi<<"\t"
		<<left<<setw(10)<<a[i].nam<<"\t"
		<<left<<setw(15)<<a[i].gia<<"\n";}
		}
	}
void xoa(xe a[], int &n, int vt){
	for(int i=vt+1;i<n;i++){
		a[i-1]=a[i];}
		n--;}
void xoa_xe(xe a[], int &n){
	//xoa bo cac phan tu cach N nam
	int k;
	cout<<"\n Nhap k: ";
	cin>>k;
	for(int i=0;i<n;i++){
		if((2021-a[i].nam)==k){
			xoa(a,n,i);
			i--;}
		}
	}
int main(){
	xe a[100];
	int n;
	nhap(a,n);
	hien(a,n);
	//sap_xep(a,n);
	//tim_kiem(a,n);
	xoa_xe(a,n);
	hien(a,n);
	return 0;}
	


