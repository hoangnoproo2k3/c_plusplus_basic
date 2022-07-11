#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
struct doibong {
	string viet_tat;
	string ten_doi;
	int so_luong;
	int nam;
};
void nhap_danh_sach(doibong a[], int& n) {
	do{
		cout<<"\nNhap vao so doi bong: ";
		cin>>n;
		if(n>100||n<0)
		cout<<"\nVui long nhap lai!";
	}while(n>100||n<0);
	for (int i = 0; i < n; i++) {
		cout << "Nhap doi bong thu " << i+1;
		while (getchar() != '\n');
		cout << "\n Nhap ten viet tat: ";		
		getline(cin, a[i].viet_tat);
		cout << "\n Nhap ten doi bong: ";
		getline(cin, a[i].ten_doi);
		cout << "\n Nhap so luong cau thu: ";
		cin >> a[i].so_luong;
		cout << "\n Nhap nam thanh lap: ";
		cin >> a[i].nam;
	}
}
void thong_tin(doibong x) {
	cout << left << setw(20) << x.viet_tat << "\t"
		<< left << setw(20) << x.ten_doi << "\t"
		<< left << setw(25) << x.so_luong << "\t"
		<< left << setw(15) << x.nam << "\n";
}
void hien_danh_sach(doibong a[], int n) {
	cout << left << setw(20) << "ten viet tat" << "\t"
		<< left << setw(20) << "ten doi bong" << "\t"
		<< left << setw(25) << "so luong cau thu" << "\t"
		<< left << setw(15) << "nam thanh lap" << "\n";
	for (int i = 0; i < n; i++) {
		thong_tin(a[i]);
	}
}
void doi_bong_lau_doi(doibong a[], int n) {
	int min =a[0].nam;
	for (int i = 0; i < n; i < i++) {
		if (a[i].nam<min)
			min=a[i].nam;
	}
	cout << "\n Doi bong thanh lap lau doi nhat \n";
	cout << left << setw(20) << "ten viet tat" << "\t"
		<< left << setw(20) << "ten doi bong" << "\t"
		<< left << setw(25) << "so luong cau thu" << "\t"
		<< left << setw(15) << "nam thanh lap" << "\n";
	for (int i = 0; i < n; i++) {
		if (a[i].nam == min)
			thong_tin(a[i]);
	}
}
float trung_binh_cong(doibong a[], int n)
{
	float tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[i].so_luong;
	}
	return 1.0*tong / n;
}
void ghi_file(doibong a[], int n)
{
	int x;
	cout << "\n Nhap vao nam: ";
	cin >> x;
	ofstream fileout;
	fileout.open("doibong.dat", ios::out | ios::binary);	
	for (int i = 0; i < n; i++) {
		if (a[i].nam == x)
			thong_tin(a[i]);
		fileout.write((char*)&a[i], sizeof(a[i]));
		fileout.close();
	}
}
int main() {
	doibong a[100];
	int n;
	int chon;
	do {
		cout << "\n\t\t=====MENU=====";
		cout << "\n1.Nhap danh sach";
		cout << "\n2.Hien danh sach";
		cout << "\n3.Doi bong lau doi nhat";
		cout << "\n4.Trung binh cong so luong cau thu";
		cout << "\n5.Ghi vao file doi bong co nam thanh lap";
		cout << "\n0.Thoat!";
		cout << "\t\t=====END=====";
		cout << "\n\n\tNhap lua chon: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
			nhap_danh_sach(a, n);
			break;
		case 2:
			hien_danh_sach(a, n);
			break;
		case 3: 
			doi_bong_lau_doi(a,n);
			break;
		case 4:
			cout<<"Trung binh cong: "<<trung_binh_cong(a, n);
			break;
		case 5: 
			ghi_file(a, n);
			break;
		case 0:
			exit(0);
		}
		system("pause");
		system("cls");
	} while (true);
	return 0;
}
