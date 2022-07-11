#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
struct monan{
	string ten;
	float dongia;
	string donvitinh;
	};
void nhap(monan ds[], int &n){
	cout<<"\nNhap vao so mon an: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout << "Nhap mon an thu " << i+1;
		fflush(stdin);
		cout << "\n Nhap ten: ";		
		getline(cin, ds[i].ten);
		cout << "\n Nhap don gia: ";
		cin>>ds[i].dongia;
		fflush(stdin);
		cout << "\n Nhap don vi tinh: ";
		cin >> ds[i].donvitinh;
	}
}
void thong_tin(monan x) {
	cout << left << setw(20) << x.ten << "\t"
		<< left << setw(20) << x.dongia << "\t"
		<< left << setw(25) << x.donvitinh << "\n";
}
void hien_danh_sach(monan ds[], int n) {
	cout << left << setw(20) << "ten mon an" << "\t"
		<< left << setw(20) << "don gia" << "\t"
		<< left << setw(25) << "don vi tinh" << "\n";
	for (int i = 0; i < n; i++) {
		thong_tin(ds[i]);
	}
}
void mon_an_dat_nhat(monan ds[], int n){
	float max=ds[0].dongia;	
	for(int i=0;i<n;i++){
		if(ds[i].dongia>max){
			max=ds[i].dongia;}}
	cout<<"\n Mon an dat nhat: ";
	cout << left << setw(20) << "ten mon an" << "\t"
		<< left << setw(20) << "don gia" << "\t"
		<< left << setw(25) << "don vi tinh" << "\n";
	
	for(int i=0;i<n;i++){
		if(ds[i].dongia==max)
			thong_tin(ds[i]);}
}

void thongke_ghifile(monan ds[], int n){
	float x,y;
	cout<<"\n Nhap x: "; cin>>x;
	cout<<"\n Nhap y: "; cin>>y;
	ofstream f;
	f.open("thucdon.dat", ios::out|ios::binary);
	for(int i=0;i<n;i++){
		if(ds[i].dongia>=x&&ds[i].dongia<=y){
			thong_tin(ds[i]);
			f.write((char*)&ds[i],sizeof(ds[i]));}
			}
			f.close();
		}
int main(){
	monan ds[100];
	int n;
	nhap(ds,n);
	hien_danh_sach(ds,n);
	mon_an_dat_nhat(ds,n);
	thongke_ghifile(ds,n);
	return 0;}

