#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][10], int &n,int &m){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<","<<j<<"]= ";
			cin >> a[i][j];
	}
}
void hien(int a[][10], int n, int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout << a[i][j]<< " ";
		cout << endl;
	}
}
void hang(int a[][10],int n,int m) {
    int mang_am[n],dem_am=0;
    for(int i=0; i<n; i++){
        dem_am=0; 
        for(int j=0; j<m; j++){
            if(a[i][j]<0) {
                dem_am++;
            }
        }
        mang_am[i]=dem_am; // luu vao mang 1 chieu so luong phan tu am cua hang
    }
    int hang_pt_am_max;
    hang_pt_am_max=mang_am[0];
    for(int i=1; i<n; i++) {
        if(mang_am[i]>hang_pt_am_max) {
            hang_pt_am_max=mang_am[i];
        }
    }
    cout<<"\n Hang co so phan tu am nhieu nhat la : ";
    for(int i=0; i<n; i++) {
        if(mang_am[i]==hang_pt_am_max) {
            cout << i+1 << " ";
        }
    }
}
bool checkspc(int k) {
	if(k<1) return false;
	int i = sqrt(k);
	if(i*i == k) 
		return true;
	return false;
}
void ktra(int a[][10],int n, int m){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			if(checkspc(a[i][j])==true){
				cout << "["<<i<<","<<j<<"] ";
				}
		}
}
int soluong(int a[][10], int n, int m) {
	int dem=0;
	for (int i=0;i<n;i++)
	for (int j=0;j<m;j++){
		if(a[0][0] == a[i][j]){
			dem++;
		}
	}
	return dem-1;
}
void tongkhoang(int a[][10], int n, int m, int x, int y){ // viet ham nhap 2 so nguyen x y dua ra tong cua cac phan tu trong khoang x y;
	int tong=0;
	cout << "\n Nhap so x: "; cin >> x;
	cout << "\n Nhap so y: "; cin >> y;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] >= x && a[i][j] <= y){
				tong += a[i][j];
			}
		}
	}
	cout <<"\n Tong khoang: " << tong;
}
int main(){
	int a[10][10],n,m,dem=0,tong=0;
	int x,y;
	cout <<"\n So hang: "; cin >>n;
	cout <<"\n So cot: "; cin >>m;
	nhap(a,n,m);
	cout << "\n Mang nhap la:"<<endl;
	hien(a,n,m);
//	hang(a,n,m);
//	cout << "\n Vi tri phan tu la so chinh phuong la: ";ktra(a,n,n);
//	cout <<"\n So phan tu co gia tri bang phan tu a[0,0] la: "<<soluong(a,n,m);
	tongkhoang(a,n,m,x,y);	
	return 0;
}

