#include <bits/stdc++.h>
using namespace std;
struct Phim{
	string tenphim,daodien,hangsx,theloai;
	int namsx;
};
void tentieude(){
	cout<<setw(10)<<left<<"STT"
	<<setw(15)<<left<<"TEN PHIM"
	<<setw(15)<<left<<"TEN DAO DIEN"
	<<setw(15)<<left<<"HANG SX"
	<<setw(15)<<left<<"NAM SX"
	<<setw(15)<<left<<"THE LOAI";
}
void nhap(Phim &n){
	cout<<"nhap ten phim: ";
	getline(cin,n.tenphim);
	cout<<"nhap ten dao dien: ";
	getline(cin,n.daodien);
	cout<<"nhap hang san xuat: ";
	getline(cin,n.hangsx);
	cout<<"nhap nam san xuat: ";
	cin>>n.namsx;
	cin.ignore();
	cout<<"nhap the loai phim: ";
	getline(cin,n.theloai);
}
void xuat(Phim n){
	cout<<setw(15)<<left<<n.tenphim;
	cout<<setw(15)<<left<<n.daodien;
	cout<<setw(15)<<left<<n.hangsx;
	cout<<setw(15)<<left<<n.namsx;
	cout<<setw(15)<<left<<n.theloai;
}
void nhapp(Phim n[],int &b){
	cout<<"nhap so luong phim: ";
	cin>>b;
	cin.ignore();
	for(int i=0;i<b;i++){
		nhap(n[i]);
	}
}
void xuatt(Phim n[], int b){
	tentieude();
	for(int i=0;i<b;i++){
		cout<<"\n"<<setw(10)<<i+1;
		xuat(n[i]);
	}
}
void ghi(Phim n[], int &b){
	fstream f;
	f.open("PHIM.DAT", ios::out | ios::binary);
	f.write((char*) &b, sizeof(int));
	for(int i=0;i<b;i++){
		f.write((char*) &n[i], sizeof(Phim));
	}
	cout<<"ghi file thanh cong";
	f.close();
}
void xuatfile(Phim n[], int &b){
	fstream f;
	f.open("PHIM.DAT", ios::in | ios::binary);
	f.write((char*) &b, sizeof(int));
	for(int i=0;i<b;i++){
		f.read((char*) &n[i], sizeof(Phim));
	}
	f.close();
}
void namsx(Phim n[], int b){
	int nam;
	cout<<"nhap nam san xuat muon tim: ";
	cin>>nam;
	cin.ignore();
	tentieude();
	for(int i=0;i<b;i++){
		if(n[i].namsx==nam){
			cout<<"\n"<<setw(10)<<i+1;
			xuat(n[i]);
		}
	}
}
void sapxep(Phim n[],int &b){
	fstream f;
	f.open("PHIM.DAT", ios::out | ios::binary);
	f.write((char*) &b, sizeof(int));
	for(int i=0;i<b;i++){
		for(int j=0;j<b;j++){
			if(n[i].namsx<n[j].namsx){
				swap(n[i],n[j]);
			}
		}
	}
	xuatt(n,b);
	for(int i=0;i<b;i++){
		f.write((char*) &n[i], sizeof(Phim));
	}
	f.close();
}

void giaiphong(Phim n[], int b){
	int dem=0;
	tentieude();
	for(int i=0;i<b;i++){
		if(n[i].hangsx== "giai phong"){
			dem++;
			cout<<"\n"<<setw(10)<<i+1;
			xuat(n[i]);
		}
	}
	if(dem==0){
		cout<<"khong co bo phim nao do hang giai phong san xuat! "<<endl;
	}
	else{
		cout<<"co"<<dem<<"bo phim do hang giai phong san xuat ";
	}
}
int main(){
	fstream f;
	int b,chon;
	Phim n[100];
	bool kiemtra=false;
	do{
		cout<<"\n|------------------------MENU----------------------------|"
		<<"\n| 1.Nhap so phim "
		<<"\n| 2.luu vao tep PHIM.DAT "
		<<"\n| 3.doc file "
		<<"\n| 4.hien thi phim ra man hinh  "
		<<"\n| 5.Nhap nam san xuat tim phim	"
		<<"\n| 6.sap xep phim theo nam giam dan, ghi vao SAPXEPNAM.DAT"
		<<"\n| 7.so bo phim do hang phim giai phong san xuat 		  "
		<<"\n| 8.Thoat chuong trinh ";
		cout<<"\n moi ban chon: ";
		cin>>chon;
		cin.ignore();
		switch(chon){
			case 1:
				nhapp(n,b);
				kiemtra=true;
				break;

			case 2:
				if(kiemtra){
				ghi(n,b);
				break;}
				else{
					cout<<"moi nhap lai";
					break;
				}

			case 3:
				if(kiemtra){
				xuatfile(n,b);
				break;}
				else{
					cout<<"moi nhap lai";
					break;
				}

			case 4:
				if(kiemtra){
				xuatt(n,b);
				break;}
				else{
					cout<<"moi nhap lai";
					break;
				}

			case 5:
				if(kiemtra){
				namsx(n,b);
				break;}
				else{
					cout<<"moi nhap lai";
					break;
				}

			case 6:
				if(kiemtra){
				sapxep(n,b);
				break;}
				else{
					cout<<"moi nhap lai";
					break;
				}

			case 7:
				if(kiemtra){
				giaiphong(n,b);
				break;}
				else{
					cout<<"moi nhap lai";
					break;
				}
			default:{
			cout<<"nhap lai!!! ";
			break;}
				}
	}
	while(chon!=8);
	}

