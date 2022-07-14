/*Doc ghi 1 doi tuong sinh vien*/
#include "bits/stdc++.h"
#include "fstream"
using namespace std;
struct SV{
    char hoten[30];
    int namsinh;
    char lop[15];
};
string filename = "sv.txt";
SV b[20];
int m=0;
void nhapsv(SV &a){
    cout <<"\n Ho ten:";
    //getline(cin, a.hoten);
    cin.getline(a.hoten,30);
    cout << "\n Nam sinh:";
    cin >> a.namsinh;
    fflush(stdin);
    cout << "\n Lop:";
    //getline(cin, a.lop);
    cin.getline(a.lop,15);
}
void hiensv(SV a){
    cout << left << setw(20) << a.hoten
    << setw(8) << a.namsinh
    << setw(15) << a.lop;
}
void ghiF(SV a[], int n){
    ofstream fo(filename,ios::binary);
    for(int i=0; i<n; ++i)
        fo.write((char*)(&a[i]), sizeof(SV));
    fo.close();
}
void docF(){
    SV b;
    //Doc file;
    ifstream fi(filename, ios::binary);
   while(true){
        fi.read((char*)(&b), sizeof(SV));
        if(fi.eof()) break;
        hiensv(b);
        cout << endl;
    }
    fi.close();
}
void nhapds(SV ds[], int n){
    for(int i=0; i<n; ++i)
        nhapsv(ds[i]);
}
void hiends(SV ds[], int n){
    for(int i=0; i<n; ++i){
        hiensv(ds[i]);
        cout << endl;
    }
}
void f2a(){
    SV tg;
    // Doc file "sv.txt" roi luu vao mang b;
    ifstream fi(filename, ios::binary);
    while(1){
        fi.read((char*)&tg,sizeof(SV));
        if(fi.eof()) break;
        b[m] = tg;
        m++;
    }
}
int main(){
    SV a[10];
    int n=2;
    nhapds(a,n);
    hiends(a,n);
    //Hien file
    ghiF(a,n);
    cout << "\n Doc noi dung tep tin" << endl;
    docF();
    f2a(); // doc xong cat vao mang b
    hiends(b,m);
    return 0;
}
