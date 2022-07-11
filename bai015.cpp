#include<iostream>
using namespace std;
void nhap_mang(int a[], int &n){
	cout<<"Nhap so luong: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{ cout<<"a["<<i<<"]=";
		cin>>a[i];}
}
void hien_mang(int a[], int n){
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";}
void thong_ke(int a[], int n, int x){
	cout<<"\n Nhap x: ";
	cin>>x;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		dem++;}
	cout<<"\nSo lan xuat hien: "<<dem;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		cout<<"\nVi tri lap la: "<<i;}
}
/*void xoa(int a[], int &n){
	for(int i=0;i<n;i++)
	if(a[i]==0){
		for(int j=i;j<n;j++)
		a[j]=a[j+1];
		i--;
		n--;}
		
		}	*/
		
void xoa(int a[], int &n, int vt) {
    for(int i=vt+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    n--;
}
void xoapt0(int a[], int &n) {
    for(int i=0;i<n;i++) {
        if(a[i]==0)
        {
            xoa(a,n,i);
            i--;
        }
    }
}
bool kiem_tra_snt(int n){
	if(n<2)
	return false;
	else{
		if(n==2)
		return true;
		else{
			for(int i=0;i<n;i++)
			if(n%i==0)
			return false;
		}
	}
	return true;}
void sap_xep(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if((kiem_tra_snt(a[i])==false)&&(kiem_tra_snt(a[j])==true))
            {
                swap(a[i], a[j]);
            }
        }
    }
}
int main(){
	int a[100];
	int n;
	nhap_mang(a,n);
	//hien_mang(a,n);
	//int x;
	//thong_ke(a,n,x);
	//xoapt0(a,n);
	//hien_mang(a,n);
	sap_xep(a,n);
	return 0;}
