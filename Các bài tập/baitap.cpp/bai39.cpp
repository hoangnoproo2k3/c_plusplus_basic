/*Viết chương trình bao gồm các chương trình con sau:
- Nhập một mảng số nguyên gồm n (n nhập từ bàn phím) phần tử.
- Lưu một mảng vào tệp “songuyen.dat” (theo dạng nhị phân), nếu tệp chưa tồn
tại thì tạo tệp mới, ngược lại, chèn toàn bộ mảng vào phần cuối tệp.
- Chương trình con sắp xếp một mảng theo chiều giảm dần.
- Đọc dữ liệu trong tệp ra một mảng số nguyên
- Hiển thị một mảng số nguyên ra màn hình */
#include<iostream>
#include<fstream>
using namespace std;

string filename1 = "A.dat", filename2 = "B.dat", filename3 = "C.dat";

void nhap(int a[], int &n) {
    for(int i=0; i<n; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void hien(int a[], int n) {
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
void sapxep(int a[], int n) {
    for(int i=0; i<n-1; i++)
        for(int j=j+1; j<n; j++)
            if(a[i]<a[j])
                swap(a[i], a[j]);
}
void ghi(int a[], int n, string filename) {
    ofstream fo(filename, ios::binary);
    for(int i=0; i<n; i++)
    fo.write((char*)(&a[i]),sizeof (n));
    fo.close();
}
void doc(string filename) {
    int d;
    ifstream fi(filename, ios::binary);
    while (true) {
        fi.read((char*)(&d),sizeof (d));
        if(fi.eof())
            break;
        cout<<d<<" ";
    }
    fi.close();
}
void manga(int a[], int n) {
    nhap(a,n);
    sapxep(a,n);
    ghi(a,n,filename1);
}
void mangb(int b[], int n) {
    nhap(b,n);
    sapxep(b,n);
    ghi(b,n,filename2);
}
void mangc(int a[], int b[], int c[], int n, int &k) {
    manga(a,n);
    int d;
    ifstream fi(filename1, ios::binary);
    while (true) {
        fi.read((char*)(&d),sizeof (d));
        if(fi.eof())
            break;
        c[k]=d;
        k++;
    }
    fi.close();
    mangb(b,n);
    int e;
    ifstream fi(filename2, ios::binary);
    while (true) {
        fi.read((char*)(&e),sizeof (e));
        if(fi.eof())
            break;
        c[k]=e;
        k++;
    }
    fi.close();
    sapxep(c,k);
    ghi(c,k,filename3);
    doc(filename3);
}
int main() {
    int a[10],b[10],c[20];
    int n=5;
    int k;
    mangc(a,b,c,n,k);
    return 0;
}
