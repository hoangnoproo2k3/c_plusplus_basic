#include<iostream>
using namespace std;
void nhap(int a[], int &n){
	n=0;
	float so;
	do{ 
	cout<<"\n Nhap: ";
	cin>>so;
	if(so==0) break;
	n++;
	a[n-1]=so;
	if(n==100) break;
	}while(so!=0);
}
void hien(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";}
		}
void tong_am(int a[], int n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			tong+=a[i];}
			}
	cout<<"\n Tong cac phan tu khong am: "<<tong;
	int sum=0,dem=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			sum+=a[i];
			dem++;}
			}
	cout<<"\n TBC="<<1.0*sum/dem;}
void sap_xep(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;}
				}
		}
	cout<<"\n  \n";
	hien(a,n);
}
void giam(int a[], int n){
	for(int i=0;i<n;i++){
		if(i%2==0){
			a[i]=a[i]*0.9;
			}
		}
}
void xoa1(int a[], int &n, int k){
	for(int i=k+1;i<n;i++){
		a[i-1]=a[i];}
		n--;
		}
void xoa(int a[], int n){
	for(int i=0;i<n;i++){
		if(i%2==1){
			xoa1(a,n,i);
			i--;
				}
			}
		}				
int main(){
	int a[100];
	int n;
	nhap(a,n);
	//hien(a,n);
	//tong_am(a,n);
	//sap_xep(a,n);
	//giam(a,n);
	//sap_xep(a,n);
	xoa(a,n);
	hien(a,n);
	return 0;}
