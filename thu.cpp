#include<bits/stdc++.h>
using namespace std;
void daochuoi(){
	string s;
	cout << "\n Nhap chuoi ki tu: ";


	getline(cin,s);
	
	cout << "\n Chuoi sau khi dao nguoc: ";
	for (int i=s.length()-1;i>=0;i--)
		cout << s[i];
}
int main() {
	string s;
	daochuoi();
	return 0;
}
