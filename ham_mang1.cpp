#include <iostream>
using namespace std;
#define max 100
int nhap_ham(int,int);
int xuat_ham(int,int);
void nhap_ham(int arr[],int n){
	for (int i=0;i <n; i++)
	   { cout << "\n nhap arr["<<i<<"] =";
	    cin >> arr[i];}}
void xuat_ham(int arr[],int n)
	 {for (int i=0;i <n; i++)
	   {cout <<  arr[i]<<endl;}}
int tinh_tong (int arr[],int n)
	  {int s=0;
	  for(int i=0;i<n;i++)
	  { s+=arr[i];
	   } 
	   return s;}
int main ()
			 {int arr[max];
			 int n;
			 do { 
			 cout << "nhap so luong phan tu: ";
			 cin >> n;
			 if ( n<=0 || n>max)
			 { cout << "khong hop le"<<endl;}}
			 while (n<=0 || n>max);
 cout << " ======nhap ham======="<<endl;
 nhap_ham(arr,n);
 cout<<" ===xuat==="<< endl;
 xuat_ham(arr,n);
 cout <<"tong cac mang la: " << tinh_tong(arr,n)<< endl;
 return 0;}

   
