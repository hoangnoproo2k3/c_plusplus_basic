#include<bits/stdc++.h>
using namespace std;
int n=0;
struct HangHoa{
	string maHH;
	string tenHH;
	int SL;
	float DG;
	float TT;
};
void Nhap(HangHoa &x){
	fflush(stdin);
	cout<<"\n Nhap vao ma hang hoa: "; getline(cin,x.maHH);
	cout<<"\n Nhap vao ten hang hoa: "; getline(cin, x.tenHH);
	cout<<"\n Nhap vao so luong: "; cin>>x.SL;
	cout<<"\n Nhap vao don gia: "; cin>> x.DG;
	x.TT=x.SL*x.DG;
	}
void hien(HangHoa x){
	cout<<setw(20)<<left<<x.maHH<<"\t";
	cout<<setw(20)<<left<< x.tenHH<<"\t";
	cout<<setw(20)<<left<<x.SL<<"\t";
	cout<<setw(20)<<left<<x.DG<<"\t";
	cout<<setw(20)<<left<<x.TT<<endl;
	}
struct DanhSach{
	HangHoa k[100];
    int n;
	};
void nhapDanhsach(DanhSach &ds){
	
	for(int i=0;i<ds.n;i++){
		Nhap(ds.k[i]);}
		}
void hiends(DanhSach ds){
	cout<<setw(20)<<left<<"Ma hang hoa\t";
	cout<<setw(20)<<left<< "Ten hang hoa\t";
	cout<<setw(20)<<left<<"So luong\t";
	cout<<setw(20)<<left<<"Don gia\t";
	cout<<setw(20)<<left<<"Thanh tien \n"<<endl;
	for(int i=0;i<ds.n;i++){
		hien(ds.k[i]);}
}
void timkiemMa(DanhSach ds){
	string ma;
	cout<<"\n Nhap ma can tim: \n";
	fflush(stdin);
	getline(cin,ma);
	cout<<setw(20)<<left<<"Ma hang hoa\t";
	cout<<setw(20)<<left<< "Ten hang hoa\t";
	cout<<setw(20)<<left<<"So luong\t";
	cout<<setw(20)<<left<<"Don gia\t";
	cout<<setw(20)<<left<<"Thanh tien"<<endl;
	for(int i=0;i<ds.n;i++){
		if(ds.k[i].maHH.compare(ma)==0){
			hien(ds.k[i]);}
		}
	}
void sapXep(DanhSach ds){
	for(int i=0;i<ds.n; i++){
		for(int j=0;j<ds.n;j++){
			if(ds.k[i].TT<ds.k[j].TT){
				float temp= ds.k[i].TT;
				ds.k[i].TT=ds.k[j].TT;
				ds.k[j].TT=temp;
				}
				}}
				hiends(ds);}
int main(){
	DanhSach ds;
	cout<<"Nhap so luong hang hoa: \n";
	cin>>ds.n;
	nhapDanhsach(ds);
	hiends(ds);
	cout<<"Sau khi sap xep\n";
	sapXep(ds);
	timkiemMa(ds);
	return 0;}
