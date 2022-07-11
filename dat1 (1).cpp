#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class hocsinh  {
public:
   	string ten;
	string ma;
	float toan, van;
void nhap() {
		fflush(stdin);
		cout << "\n Nhap vao ten: "; getline(cin, ten);
		cout << "\n Nhap vao ma: "; getline(cin, ma);
		cout << "\n Dien toan: "; cin >> toan;
		cout << "\n Diem van: "; cin >> van;
	}
void hien() {
		cout << "\n Ten: " << ten;
		cout << "\n Ma: " << ma;
		cout << "\n Diem Toan: " << toan;
	}
float diemtb() {
	return (toan+van) / 2;
}
void capnhat() {
	cout<<"\n Cap nhat: ";
	cin>>toan>>van;
}
};

int main() {
	hocsinh x;
	x.nhap();
	x.hien();
	cout<<"diem tb cua ky la:"<<x.diemtb();
	x.capnhat();
	cout<<"new toan:"<<x.toan<<endl;
	cout<<"new van: "<<x.van;
}
