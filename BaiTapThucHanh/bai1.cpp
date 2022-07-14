/* cho mang so nguyen. viet ham tinh tong cac phan tu co chu so dau tien la so le*/
#include<iostream>
using namespace std;
void nhap(int a[], int &n){
	cout<<"\n Nhap vao so luong phan tu: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap a["<<i<<"]=";
		cin>> a[i];}
	}
void hien(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";}
		}
bool kiem_tra_chu_so_dau(int n){
	while(n>=10){
		n/=10;}
	if(n%2!=0)
	return true;
	else
	return false;
	}
// hàm tính trung bình công các so le
float tinh_TBC(int a[], int n){
	float sum=0, dem=0;
	for(int i=0;i<n;i++){
		if(kiem_tra_chu_so_dau(a[i])==true){
			sum+=a[i];
			dem++;}
			}
	return sum/dem;}
int main(){
	int a[100];
	int n;
	nhap(a,n);
	hien(a,n);
	cout<<"TBC="<<tinh_TBC(a,n);
	return 0;}
