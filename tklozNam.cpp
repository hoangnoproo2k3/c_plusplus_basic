#include<iostream>
#include<cmath>
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
			for(int i=2;i<n;i++){
				if(n%i==0)
				return false;
		}
	}
}
	return true;}
bool kiem_tra_scp(int n){
	for(int i=1;i<=n;i++){
		if(sqrt(n)!=i);
		return false;}
	return true;}

void hien_snt(int a[], int n){
	for(int i=0;i<n;i++){
		if(kiem_tra_snt(a[i]))
		{cout<<"\n"<<a[i]<<" ";}
		}
	}
void hien_scp(int a[], int n){
		for(int i=0;i<n;i++){
			if(kiem_tra_scp(a[i]))
			cout<<"\n"<< a[i]<<" ";}
			}
int main(){
	int a[100];
	int n;
	nhap_mang(a, n);
	//xuat_mang(a,n);
	//hien_snt(a,n);
	hien_scp(a,n);
	return 0;
	}
