#include<bits/stdc++.h>
using namespace std;
struct linhkien{
	string ten_linh_kien,quy_cach,loai;
	int don_gia_1,don_gia_2;
};
void nhap(linhkien ds[], int &n){
	for (int i=0; i<n;i++){
		fflush(stdin);
		cout << "\n Nhap ten linh kien: ";
		getline(cin,ds[i].ten_linh_kien);
		cout << "\n Nhap quy cach: ";
		getline(cin,ds[i].quy_cach);
		cout << "\n Nhap loai: ";
		getline(cin,ds[i].loai);
		cout << "\n Don gia loai 1: " ; cin >> ds[i].don_gia_1;
		cout << "\n Don gia loai 2; " ; cin >> ds[i].don_gia_2;
	}
}
void hien(linhkien ds[], int n){
	for(int i=0;i<n;i++){
		cout << endl << setiosflags(ios::left) << ds[i].ten_linh_kien << setw(20)
			 << ds[i].quy_cach << setw(20)
			 << ds[i].loai << setw(20) << ds[i].don_gia_1
			 << setw(20) << ds[i].don_gia_2;
	}
}
void sap_xep(linhkien ds[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].ten_linh_kien < ds[j].ten_linh_kien){
				swap(ds[i],ds[j]);
			}
			else if(ds[i].ten_linh_kien == ds[i].ten_linh_kien){
				if(ds[i].loai < ds[j].loai){
					swap(ds[i],ds[j]);
				}
			}
		}
	}
}
void ktra(linhkien ds[], int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(ds[i].loai == "A"){
			dem++;
		}
	}
	if(dem < 15) cout << "\n Da du loai link kien A.";
	else cout << "\n Ko du loai linh kien.";
}
int main(){
	linhkien ds[100];
	int n;
	cout << "\n Nhap so linh kien: "; cin >> n;
	nhap(ds,n);
//	hien(ds,n);
	cout << "\n ------------------------------- \n";
	sap_xep(ds,n);
	hien(ds,n);
	ktra(ds,n);
	return 0;
}
