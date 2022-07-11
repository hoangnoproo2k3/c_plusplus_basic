//bai41:
#include<iostream>
#include<fstream>
using namespace std;
void nhap_mang(int a[], int& n)
{
	cout << "Nhap so luong: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nNhap a[" << i << "]=";
		cin >> a[i];
	}
}
void hien_mang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void ghi_file(int a[], int n) {
	ofstream f;
	f.open("DATA.INF", ios::out | ios::binary);
	for (int i = 0; i < n; i++) 
		f.write((char*)&a[i], sizeof(a[i]));
	if(!f.fail()){
        cout<<"\n\n\t\t Ghi file thanh cong!";
    }
	f.close();
}
void docFile(int a[] ,int &n) {
    fstream f;
    f.open("DATA.INF", ios::in|ios::binary);
    int i=0;
    while(!f.eof())
    {
        f.read((char *) &a[i],sizeof(a[i]));
        i++;
    }
    n=i-1;
    f.close();
    cout<<"\n\n\t\t Doc file thanh cong!"<<endl;

}
void TBCong(int a[], int n) {
	ifstream f;
	f.open("DATA.INF", ios::in | ios::binary);
	float s = 0;
	int i = 0,dem = 0;
	while (!f.eof()) {
		f.read((char*)&a[i], sizeof(a[i]));
		if (a[i] < 0) {
			s += a[i];
			dem++;
		}i++;
	}
	cout << "TBC=" << 1.0 * s / dem;
	f.close();
}
void chen(int a[], int &n){
	int x; cout<<"\n Nhap gia tri them: "; cin>>x;
	int y; cout<<"\n Nhap vi tri chen: "; cin>>y;
	for(int i=n-1;i>=y;i--){
		a[i+1]=a[i];}
		a[y]=x;
		n++;
	cout<<"\n Danh sach sau khi chen: ";
	ghi_file(a,n);}
int vi_tri_max(int a[], int n){
fstream f;
    f.open("data.inf",ios::in|ios::binary);
    int Max = a[0];
    int i=0;
    while(!f.eof())
    {
        f.read((char*)&a[i], sizeof(a[i]));
        if( a[i] > Max )
        {
            Max = a[i];
        }
        i++;
    }
    n=i-1;
    cout << "\n Vi tri cua phan tu lon nhat trong tep la : " ;
    for(int i=0;i<n;i++)
    {
        if ( a[i] == Max )
        {
            cout << i + 1 << " " ;
        }
    }
    cout <<  endl ;
    f.close();
}
	
	
int main() {
	int a[50];
	int n;
	nhap_mang(a, n);
	hien_mang(a, n);
	ghi_file(a, n);
	TBCong(a, n);
	chen(a,n);
	vi_tri_max(a,n);
	docFile(a,n);
	hien_mang(a,n);
	return 0;
}
