#include<bits/stdc++.h>
using namespace std;

void vitri(string s, char x) {
	
	
	cout << "\n Nhap ki tu x: "; cin >> x;
	cout << "\n Vi tri xuat hien: ";
	for(int i=0;i < s.size();i++){
		if(s[i] == x){
			cout << i<< " ";
		}
	}
}
int main() {
	string s;
	char x;
	cout << "\n Nhap chuoi: ";
	getline(cin,s);
	vitri(s,x);
	return 0;
}
