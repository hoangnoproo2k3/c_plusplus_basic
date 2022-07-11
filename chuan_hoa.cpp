#include<iostream>
#include<string>
#pragma warning
using namespace std;
void xoa_2_dau(string &s){
	while(s[0]==' '){
		s.erase(s.begin()+0);}
	while(s[0]==' '){
		s.erase(s.begin()+s.length()-1);}
	}
void xoa_o_giua(string &s){
	for(int i=0;i<s.length();i++){
		if(s[i]==' '&&s[i+1]==' '){
			s.erase(s.begin()+i+1);
			i--;}
			}
			}
void chuyen_in_thuong(string &s){
	for(int i=0;i<s.length();i++){
		if(s[i]>=65&&s[i]<=90)
			s[i]+=32;}
	cout<<s;
			}
void in_hoa_chu_dau(string &s){
	if(s[0]!=' '){
		if(s[0]>=97&&s[0]<=122)
		s[0]-=32;}
	for(int i=0;i<s.length();i++){
		if(s[i]==' '&&s[i+1]!=' ')
			if(s[i+1]>=97&&s[i+1]<=122)
				s[i+1]-=32;}
				}
int main(){
	string s;
	cout<<"\n Nhap chuoi: ";
	fflush(stdin);
	getline(cin,s);
	xoa_2_dau(s);
	xoa_o_giua(s);
	chuyen_in_thuong(s);
	in_hoa_chu_dau(s);
	cout<<s;
	return 0;}
