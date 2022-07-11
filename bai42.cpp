//bai42
#include<bits/stdc++.h>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
struct phim{
	string ten;
	string dao_dien;
	string hang_sx;
	int nam_sx;
	string the_loai;
};
void nhap_danh_sach(phim a[], int &n){
	cout<<"\n Nhap vao so luong cac bo phim: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\n ten phim: ";
		getline(cin,a[i].ten);
		cout<<"\n dao dien: ";
		getline(cin,a[i].dao_dien);
		cout<<"\n hang san xuat: ";
		getline(cin,a[i].hang_sx);
		cout<<"\n Nam san xuat: ";
		cin>>a[i].nam_sx;
		cout<<"\n the loai phim: ";
		getline(cin,a[i].the_loai);}
		}
void thong_tin(phim x){
	cout << left << setw(20) << x.ten << "\t"
		<< left << setw(20) << x.dao_dien << "\t"
		<< left << setw(25) << x.hang_sx << "\t"
		<< left << setw(20) << x.nam_sx << "\t"
		<< left << setw(20) << x.the_loai<<"\n";
		}
void hien_danh_sach(phim a[], int &n) {
	cout << left << setw(20) << "ten" << "\t"<< left << setw(20) << "dao dien" << "\t"
		<< left << setw(25) << "hang sx"  << "\t"<< left << setw(20) << "nam sx" << "\t"
		<< left << setw(20) << "the loai" <<"\n";
	for (int i = 0; i < n; i++) {
		thong_tin(a[i]);
	}
}
void ghi_file(phim a[], int &n){
	ifstream f;
	f.open("phim.dat",ios::in|ios::binary);
	for(int i=0;i<n;i++)
		{f.write((char*)&a[i],sizeof(phim));}
	if(!f.fail())
	cout<<"\n ghi file thanh cong";
	f.close();
	}
void doc_file(phim a[], int &n){
	ofstream f;
	f.open("phim.dat",ios::out|ios::binary);
	while(!f.eof()){
		f.read((char*)&a[i],sizeof(phim));
		i++;}
		f.close();
		cout<<"\n Da doc file!";
		}
void tim_kiem(phim a[], int &n){
	int k;
	cout<<"\n Nhap k: ";
	cin>>k;
	cout << left << setw(20) << "ten" << "\t"<< left << setw(20) << "dao dien" << "\t"
		<< left << setw(25) << "hang sx"  << "\t"<< left << setw(20) << "nam sx" << "\t"
		<< left << setw(20) << "the loai" <<"\n";
	for(int i=0;i<n;i++){
		if(a[i].nam_sx==k)
		{thong_tin(a[i])}
		}
}
void sap_xep(phim a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].nam_sx<a[j].nam_sx)
				swap(a[i],a[j]);}
			}
	cout<<"\n Danh sach sau khi sap xep: \n";
		hien_danh_sach(a,n);}
void ghifileds(PHIM ds[] ,int n) {
    fstream f;
    f.open("SAPTHEONAM.dat",ios::out|ios::binary);
    for(int i=0; i<n; i++)
        f.write((char *) &ds[i],sizeof(PHIM));

    if(!f.fail()) {
        cout<<"\n\n\t\t Ghi file thanh cong!";
    }
    f.close();
}
		
int main(){
	phim a[100];
	int n;
	nhap_danh_sach(a,n);
	//ghi_file(a,n);
	//doc_file(a,n);
	hien_danh_sach(a,n);
	return 0;}
