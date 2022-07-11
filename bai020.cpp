#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct thuebao{
	string so, ten;
	int phi;
	string ngay;
};
void nhap(thuebao a[], int &n){
	n=0;
	int i=0;
	while(true){
		string s;
		fflush(stdin);
		cout<<"\n Nhap vao so thue bao: "; getline(cin,s);
		if(s=="0") break;
		a[i].so=s;
		cout<<"\n Nhap vao ten:"; getline(cin,a[i].ten);
		cout<<"\n Nhap vao cuoc phi: "; cin>>a[i].phi;
		fflush(stdin);
		cout<<"\n Nhap vao ngay: "; getline(cin,a[i].ngay);
		i++;}
	n=i;
	}
void hien(thuebao a[], int n){
	cout<<left<<setw(5)<<"STT \t"<<left<<setw(20)<<"So \t"<<left<<setw(20)
		<<"Ten \t"<<left<<setw(20)<<"Cuoc phi \t"<<left<<setw(15)<<"Ngay"<<endl;
	for(int i=0;i<n;i++){
	cout<<left<<setw(5)<<i+1<<"\t"<<left<<setw(20)<<a[i].so<<"\t"<<left<<setw(20)
		<<a[i].ten<<" \t"<<left<<setw(20)<<a[i].phi<<" \t"<<left<<setw(15)<<a[i].ngay<<endl;}
		}
int main(){
	thuebao a[100];
	int n;
	nhap(a,n);
	hien(a,n);
	return 0;}
		
