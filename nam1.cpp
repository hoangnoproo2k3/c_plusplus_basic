#include<bits/stdc++.h>

using namespace std;
struct cong_ty{
    string name_company, name_leader;
    int year, number;
};
void nhap(cong_ty ds[], int n){
    cout << "\n Nhap so cong ty can thong ke: " ; cin >> n;
    for(int i=0;i<n;i++){
        fflush(stdin);
        cout << "\n Nhap ten cong ty: " ; getline(cin,ds[i].name_company);cout << endl;
        cout << "Nhap ten giam doc: "; getline(cin,ds[i].name_leader); cout << endl;
        cout << "Nhap nam thanh lap; "; cin >> ds[i].year;cout << endl;
        cout << "Nhap so luong nhan vien: "; cin >> ds[i].number;
        cout << "\n -------------------------------------------";
    }
}
void hien(cong_ty ds[], int n){
    cout << "\n Danh sach thong ke cong ty";
    for(int i=0;i<n;i++){
        cout << i+1 << setw(10) << ds[i].name_company
             << setw(20) << ds[i].name_leader
             << setw(20) << ds[i].year
             << setw(20) << ds[i].number;
        cout << endl;
    }
}

int main(){
    cong_ty ds[100];
    int n;
    nhap(ds,n);
    hien(ds,n);
  	return 0;
}
