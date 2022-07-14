/*dem so lan xuat hien cua cac phan tu trong mang 1 chieu*/
#include<iostream>
using namespace std;
void nhap(int a[], int &n){
	cout<<"\n Nhap vao so luong: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\n Nhap a["<<i<<"]=";
		cin>>a[i];}
	}
void hien(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i];}
	}
void gan_vao_mangB(int a[], int b[], int &m, int n){
	m=0;
	//kiem tra xem co bao nhieu phan tu rieng biet
	for(int i=0;i<n;i++){
		bool kiemtra=true;
		for(int j=i-1;j>=0;j--){
			if(a[i]==a[j]){
				kiemtra= false;
				break;}
			}
		if(kiemtra==true){
		b[m]=a[i];
		m++;}		
	}
}
void xu_li(int a[], int b[], int &m, int n){
	gan_vao_mangB(a,b,m,n);
	for(int i=0;i<m;i++){
		int dem=0;
		for(int j=0;j<n;j++){
			if(b[i]==a[j])
			dem++;
		}
	cout<<"\n Phan tu: "<<b[i]<<" xuat hien: "<<dem;}
	}
int main(){
	int a[100];
	int b[100]={0};
	int m,n;
	nhap(a,n);
	hien(a,n);
	//gan_vao_mangB(a,b,m,n);
	xu_li(a,b,m,n);
	return 0;}
