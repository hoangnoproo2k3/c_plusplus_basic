#include<bits/stdc++.h>
using namespace std;
struct hanghoa{
	string ten_hang;
	int so_luong;
	string xuat_xu;
};
void nhap(hanghoa ds[], int &n){
	cout <<"\n Nhap so hang hoa can nhap: "; cin >> n;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout << "\n Nhap ten hang hoa: ";
		getline(cin,ds[i].ten_hang);
		cout << "\n Nhap so luong: ";
		fflush(stdin);
		cin >> ds[i].so_luong;
		cout << "\n Nhap xuat xu: ";
		fflush(stdin);
		getline(cin,ds[i].xuat_xu);
	}
}
void hien(hanghoa ds[], int n){
	for(int i=0;i<n;i++){
		cout << endl<< setw(5) << setiosflags(ios::left) << i+1
			 << setw(15) << ds[i].ten_hang 
			 << setw(15) << ds[i].so_luong
			 << setw(15) << ds[i].xuat_xu;
	}
}
void tim_xuat_xu(hanghoa ds[], int n){
	cout << "\n Nhap noi xuat cu can tim: ";
	string s;
	fflush(stdin);
	getline(cin,s);
	cout << "\n Mat hang co xuat xu: ";
	for(int i=0;i<n;i++){
		if(ds[i].xuat_xu.compare(s) == 0){
			hien(&ds[i],1);
		}
	}
}
void ghi(hanghoa ds[], int n){
	string x;
	fflush(stdin);
	getline(cin,x);
	for(int i=0;i<n;i++){
		if(ds[i].ten_hang.compare(x) == 0){
			hien(&ds[i],1);
		}
	}
	ofstream fo;
	fo.open("HANG.out",ios::out| ios::binary);
	fo.write((char*)hien, sizeof(hang)*n);
	fo.close();
	}
int main(){
	hanghoa ds[100];int n;
	nhap(ds,n);
	hien(ds,n);
	tim_xuat_xu(ds,n);
	ghi(ds,n);
	return 0;
}
