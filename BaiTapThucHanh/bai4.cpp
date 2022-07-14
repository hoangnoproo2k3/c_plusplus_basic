/*Cho 2 dãy A, B có n, m phan tu voi thu tu tang dan. yeu cau tron 2 day tren thanh 1 day moi C
sao cho sau khi tron thi C van dam bao tinh tang dan. Va khong sap xep C */
#include<iostream>
using namespace std;
void nhap_mang(int a[], int &n){
	cout<<"\n Nhap so luong: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"nhap a["<<i<<"]=";
		cin>>a[i];}
	}
void hien_mang(int a[], int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		}
// Hàm thuc hiên trôn 2 mang A, B vao C
void xu_li(int a[], int b[],int c[], int n, int m, int &k){
	int i=0, j=0;
	while(i<n&&j<m){
		if(a[i]>b[j]){
			c[k]=b[j];
			k++; j++;}
		else{
			c[k]=a[i];
			k++; i++;
		}
	}
// Duyêt vong lap cua A,B de chua cac phan tu cuoi
	for(;i<n;i++){
		c[k]=a[i];
		k++;}
	for(;j<m;j++){
		c[k]=b[j];
		k++;}
	} 
int main(){
	int a[50], b[50], c[100];
	int n, m, k=0;
	nhap_mang(a,n);
	nhap_mang(b,m);
	hien_mang(a,n);
	hien_mang(b,m);
	xu_li(a,b,c,n,m,k);
	hien_mang(c,k);
	return 0;}
