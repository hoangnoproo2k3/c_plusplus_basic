#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class student  {
public:
   	string ten;
	int mshs;
	float toan, van;
void nhap() {
	getline(cin,ten);
	cin>>mshs;
	cin>>toan>>van;
}
void xuat () {
	cout<<ten<<endl;
	cout<<"mshs: "<<mshs;
	cout<<"\n"<<toan<<"-"<<van<<endl;
}
float diemtb() {
	return (toan+van) / 2;
}
void capnhat() {
	cin>>toan>>van;
}
};

int main() {
	student ky;
	ky.nhap();
	ky.xuat();
	cout<<"diem tb cua ky la:"<<ky.diemtb();
	ky.capnhat();
	cout<<"new toan:"<<ky.toan<<endl;
	cout<<"new van: "<<ky.van;
}
