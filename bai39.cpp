#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;
string ten1 = "A.dat";
string ten2 = "B.dat";
string ten3 = "C.dat";
void nhap_mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
void hien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void ghi_file(int a[], int n, string ten)
{
	ofstream fo(ten, ios::binary);
	for (int i = 0; i < n; i++)
		fo.write((char*)&a[i], sizeof(n));
	fo.close();
}
void doc_file(string ten)
{
	int tg;
	ifstream fi(ten, ios::binary);
		while (1) {
			fi.read((char*)&tg, sizeof(tg));
			if (fi.eof()) break;
			cout << tg;
		}
	fi.close();
}
void sap_xep(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (a[i] < a[j])
				swap(a[i], a[j]);
	}
}
void mangA(int a[], int n)
{
	nhap_mang(a, n);
	sap_xep(a, n);
	ghi_file(a, n, ten1);
}
void mangB(int b[], int n)
{
	nhap_mang(b, n);
	sap_xep(b, n);
	ghi_file(b, n, ten2);
}
void mangC(int a[], int b[], int c[], int n, int& m)
{ m=0;
	mangA(a, n);
	int tg1;
	ifstream fi(ten1, ios::binary);
	while (1) {
		fi.read((char*)(&tg1), sizeof(tg1));
		if (fi.eof()) break;
		c[m] = tg1;
		m++;
	}
	fi.close();

	mangB(b, n);
	int tg2;
	ifstream fi(ten2, ios::binary);
	while (1) {
		fi.read((char*)(&tg2), sizeof(tg2));
		if (fi.eof()) break;
		c[m] = tg2;
		m++;
	}
	fi.close();
	sap_xep(c, m);
	ghi_file(c, m, ten3);
}
int main()
{
	int a[100], b[100], c[200];
	int n = 5;
	int m;
	mangC(a, b, c, n, m);
	return 0;
}

