#include<iostream>
using namespace std;
class hocsinh{
	private:
	string ten;
	string ma;
	float toan, van;
	public:
		nhap(){
	fflush(stdin);
	cout<<"\n Nhap vao ten: "; getline(cin, ten);

	cout<<"\n Nhap vao ma: "; getline(cin,ma);
	cout<<"\n Dien toan: "; cin>>toan;
	cout<<"\n Diem van: "; cin>>van;}
		hien(){
	cout<<"\n Ten: "<<ten;
	cout<<"\n Ma: "<<ma;
	cout<<"\n Diem Toan: "<<toan;
	cout<<"\n Diem van: "<<van;}
		trung_binh_diem(){
		return (toan+van)/2;}
		hocsinh();
		~hocsinh();
		float getter_toan(){
	return toan;}
float setter_toan(float Toan){
	toan=Toan;
	}
float getter_van(){
	return van;}
float setter_van(float Van){
	van=Van;
	}
};


int main(){
	hocsinh x;
	x.nhap();
	x.hien();
	cout<<"\n Diem TB: "<<x.trung_binh_diem();
	float a,b;
	//cin>>a>>b;
	//x.getter_toan()==a;
	//x.getter_van()==b;
	//cout<<a<<b;
	return 0;}
