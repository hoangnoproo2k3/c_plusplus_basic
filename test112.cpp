#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][10], int &n,int &m){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<","<<j<<"]= ";
			cin >> a[i][j];
	}
}
void hien(int a[][10], int n, int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout << a[i][j]<< " ";
		cout << endl;
	}
}
void sophantu_am(int a[][10],int n,int m) {
    int mang_am[n];
    for(int i=0; i<n; i++){
        int demso_am=0; 
        for(int j=0; j<m; j++){
            if(a[i][j]<0)
            {
                demso_am++;
            }
        }
        mang_am[i]=demso_am;
    }
    int hangslmax;
    hangslmax=mang_am[0];
    for(int i=1; i<n; i++)
    {
        if(mang_am[i]>hangslmax)
        {
            hangslmax=mang_am[i];
        }
    }
    cout<<"\n Hang co so phan tu am nhieu nhat la : ";
    for(int i=0; i<n; i++)
    {
        if(mang_am[i]==hangslmax)
        {
            cout << i+1 << " ";
        }
    }
}
bool checkspc(int k) {
	if(k<1) return false;
	int i = sqrt(k);
	if(i*i == k) 
		return true;
	return false;
}
void ktra(int a[][10],int n, int m){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			if(checkspc(a[i][j])){
				cout << "["<<i<<","<<j<<"] ";
				}
		}
}
int soluong(int a[][10], int n, int m) {
	int dem=0;
	for (int i=0;i<n;i++)
	for (int j=0;j<m;j++){
		if(a[0][0] == a[i][j]){
			dem++;
		}
	}
	return dem-1;
}

int main(){
	int a[10][10],n,m,dem=0;
	cout <<"\n So hang: "; cin >>n;
	cout <<"\n So cot: "; cin >>m;
	nhap(a,n,m);
	cout << "\n Mang nhap la:"<<endl;
	hien(a,n,m);
	sophantu_am(a,n,m);
	cout << "\n Vi tri phan tu la so chinh phuong la: ";ktra(a,n,n);
	cout <<"\n So phan tu co gia tri bang phan tu a[0,0] la: "<<soluong(a,n,m);
	return 0;
}
