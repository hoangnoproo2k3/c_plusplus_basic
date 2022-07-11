#include<bits/stdc++.h>
#include<fstream>

using namespace std;
struct doi_bong{
	string ten_doi,ten_hlv,ten_cap;
	int so_tran,so_ban_thang,so_luong_ct;
};
void nhap(doi_bong ds[], int &n){
	int i=0;
	do{
		fflush(stdin);
		cout << "\n Nhap ten doi bong: "; getline(cin,ds[i].ten_doi);
		if(ds[i].ten_doi == "*")
			break;
		cout << "\n Nhap ten huan luyen vien truong: ";getline(cin,ds[i].ten_hlv);
		cout << "\n Nhap ten doi truong: ";getline(cin,ds[i].ten_cap);
		cout << "\n Nhap so luong cau thu: ";
		fflush(stdin);
		cin >> ds[i].so_luong_ct;
		cout << "\n So ban thang ghi duoc: "; cin >> ds[i].so_ban_thang;
		cout << "\n So tran dau da tham gia: "; cin >> ds[i].so_tran;
		i++;
		n++;
	}
	while(true);
}
void hien(doi_bong ds[], int n){
	for(int i=0;i<n;i++) {
		cout << setiosflags(ios::left) << setw(20) << ds[i].ten_doi << setw(20) << ds[i].ten_hlv
			 << setw(20) << ds[i].ten_cap
			 << setw(20) << ds[i].so_luong_ct
			 << setw(20) << ds[i].so_ban_thang
			 << setw(20) << ds[i].so_tran;
	}
}
void tong_ban(doi_bong ds[],int n){
	int tong=0;
	cout << "\n Tong so ban thang cua cac doi tai giai dau: ";
	for(int i=0;i<n;i++){
		tong+=ds[i].so_ban_thang;
	}
	cout << tong<<endl;
}
void ty_le(doi_bong ds[], int n){
	cout << "\n Danh sach cac doi bong co ty le ban thang tren tran dau tren 1,5 la" << endl;
	for(int i=0;i<n;i++){
		if((float)ds[i].so_ban_thang / ds[i].so_tran > 1.5){
			hien(&ds[i],1);
		}
	}
	ofstream fileout;
    fileout.open("doibong.dat",ios::out|ios::binary);
    fileout.write((char*) hien,sizeof(doi_bong)*n);
    fileout.close();
	
}
void sap_xep(doi_bong ds[], int n){
	cout << "\n Danh sach sau khi sap xep theo so luong cau thu tang dan: "<< endl;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].so_luong_ct > ds[j].so_luong_ct){
				swap(ds[i],ds[j]);
			}
		}
		hien(&ds[i],1);
	}
}
int main(){
	doi_bong ds[100];
	int n;
	nhap(ds,n);
	hien(ds,n);
	tong_ban(ds,n);
	ty_le(ds,n);
	sap_xep(ds,n);
	return 0;
}
