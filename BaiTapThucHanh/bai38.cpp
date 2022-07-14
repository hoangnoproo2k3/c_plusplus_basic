#include <iostream>
using namespace std;

void nhap(int a[], int &n)
{
	cout << "Nhap so phan tu n cua mang: "; cin >> n;
	for (int i=1; i<=n; i++)
	{
		cout << "Nhap phan tu thu " << i << " : ";
		cin >> a[i];
	}
}

void xuat(int a[], int n, char ten[])
{
	cout << "Mang " << ten << ": ";
	for (int i=1; i<=n; i++) 
		cout << a[i] << " ";
	cout << endl;
}

void luuf(int a[], int n, char tenf[], char kieuf[])
{
	FILE *f;
    f = fopen(tenf, kieuf);
	for (int i=1; i<=n; i++) 
        fwrite(&a[i], sizeof(int), 1, f);
	fclose(f);
	cout << "Ghi file " << tenf << " thanh cong!\n\n";
}

void docf(int a[], int &n, char tenf[])
{
	FILE *f;
    f = fopen(tenf, "rb");
	n = 1;
	if (f==NULL) 
		cout << "\nKhong mo duoc file " << tenf << "!\n";
 	else
 	{
	    while (fread(&a[n], sizeof(int), 1, f)==1)
	        n++;
	    fclose(f);
	    n--;
	}
    cout << "Doc file " << tenf << " thanh cong!" << endl;
}

void sapxep(int s[], int n)
{
	for (int i=1; i<n; i++)
		for (int j=i; j<=n; j++)
			if (s[i]<s[j])
			{
				swap(s[i],s[j]); 
			}
				
}

int main()
{
	int a[100], b[100], c[100];
	int n, m, p;
	
	cout << "Nhap mang A:\n";
	nhap(a, n);
	sapxep(a, n);
	luuf(a, n, "A.dat", "wb");
	
	
	cout << "Nhap mang B:\n";
	nhap(b, m);
	sapxep(b, m);
	luuf(b, m, "B.dat", "wb");	
	
	
	docf(a, n, "A.dat");
	luuf(a, n, "C.dat", "wb");
	docf(b, m, "B.dat");
	luuf(b, m, "C.dat", "a+wb");
	docf(c, p, "C.dat");
	sapxep(c, p);
	luuf(c, p, "C.dat", "wb");
	xuat(c, p, "C");
	return 0;
}
