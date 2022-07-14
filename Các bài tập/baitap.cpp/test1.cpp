#include<iostream>
using namespace std;
void nhap_mang(int a[], int &n){
	cout<<"\n Nhap n: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\n Nhap a["<<i<<"]=";
		cin>> a[i];}
	}
void xuat_mang(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";}
		}
bool kiem_tra_snt(int n){
	if(n<2)
	return false;
	else{
		if(n==2)
		return true;
		else{
			for(int i=0;i<n;i++){
				if(n%i==0)
				return false;
		}
	}
	}
	return true;}
void hien_snt(int a[], int &n){
	for(int i=0;i<n;i++){
		if(kiem_tra_snt(a[i])==true)
		{cout<<"\n"<<a[i]<<" ";}
		}
	}
int main(){
	int a[100];
	int n;
	nhap_mang(a, n);
	xuat_mang(a,n);
	hien_snt(a,n);
	return 0;
	}