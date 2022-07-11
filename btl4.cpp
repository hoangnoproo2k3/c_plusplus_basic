#include<iostream>
#include<string>
using namespace std;
void xoa(string s, int k){

	int n=s.length();
	for(int i=k+1;i<n;i++){
		s[i-1]=s[i];
			}
			n--;}
void chuan_hoa_dau_chuoi(string &s){
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]==' ')
		{xoa(s,i);	
		}
		}		
	}
void chuan_hoa_cuoi(string &s){
	int n=s.length();
	for(int i=n-1;i>=0;i--){
		if(s[i]==' '){
		xoa(s,i);
	}
		}
	}
int main(){
	string s;
	cout<<"\n Nhap vao chuoi: ";
	getline(cin,s);
	chuan_hoa_dau_chuoi(s);
	chuan_hoa_cuoi(s);
	cout<<s;
	return 0;}

