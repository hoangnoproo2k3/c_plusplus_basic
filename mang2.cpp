#include<iostream>
using namespace std;
#define max 100
void nhap_mang(int arr[],int n){
	for(int i=0; i <n; i++){
	 cout << "nhap arr ["<< i<< "]"<<endl;
	  cin >> arr[i];}}
void xuat_mang(int arr[], int n){
	for (int i=0; i<n ;i++){
		cout << arr[i]<< endl;}}
int tinh_tong(int arr[], int n)
   	{int s=0;
   	for(int i=0; i<n; i++)
   	{ s+=arr[i];}
   	cout<< s<<endl;
   	return s;}

int main()
{ int n, arr[max];
do {cout << "nhap so phan tu cua mang: ";
  	cin >> n;
  	if(n<=0|| n> max)
  	cout <<" khong hop le ";}
  	while (n<=0||n>max);
 cout << "=======nhap mang======="<<endl;
 nhap_mang(arr,n);
 cout<< "======xuat mang=======" <<endl;
 xuat_mang(arr,n);
 cout <<"=====tinh tong====="<<endl;
 tinh_tong(arr,n);

 return 0;
 }
