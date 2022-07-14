#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void nhapMang(int a[], int &n){
	cout << "Nhap so ptu: "; cin >> n;
	cout << "Nhap cac ptu: ";
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}

void sapXep(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
}

void luuMang(int a[], int n){
	ofstream fout;
	fout.open("songuyen.dat",ios::out|ios::binary);
	for(int i=0;i<n;i++){
		fout << a[i] << " ";
	}
	fout << endl;
	fout.close();
}
void docMang(int a[], int n){
	ifstream fin;
	fin.open("songuyen.dat",ios::in|ios::binary);
	for(int i=0;i<n;i++){
		fin >> a[i];
	}
	fin.close();
}

void luuMang1(int a[], int n){
	ofstream fout;
	fout.open("A.dat",ios::out|ios::binary);
	for(int i=0;i<n;i++){
		fout << a[i] << " ";
	}
	fout << endl;
	fout.close();
}
void luuMang2(int a[], int n){
	ofstream fout;
	fout.open("B.dat",ios::out|ios::binary);
	for(int i=0;i<n;i++){
		fout << a[i] << " ";
	}
	fout << endl;
	fout.close();
}
void luuMang3(int a[], int n){
	ofstream fout;
	fout.open("C.dat",ios::out|ios::binary);
	for(int i=0;i<n;i++){
		fout << a[i] << " ";
	}
	fout << endl;
	fout.close();
}

void ghiMangC(int a[], int n, int m){
	int x=m+n;
	ifstream fin1, fin2;
	fin1.open("A.dat",ios::in);
	fin2.open("B.dat",ios::in);
	for(int i=0;i<x;i++){
		if(i<n){
			fin1>>a[i];
		}
		else{
			fin2>>a[i];
		}
	}
	sapXep(a,x);
	luuMang3(a,x);
	fin1.close();
	fin2.close();
}

void hienMang(int a[], int n){
	cout << "a[" << n << "] = ";
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}

int main(){
	int n,m;
	int a[50], b[50], c[50];
	
	nhapMang(a,n);
	sapXep(a,n);
	luuMang(a,n);
	docMang(a,n);
	luuMang1(a,n);
	
	nhapMang(b,m);
	sapXep(b,m);
	luuMang(b,m);
	docMang(b,m);
	luuMang2(b,m);
	
	ghiMangC(c,n,m);
	
}
