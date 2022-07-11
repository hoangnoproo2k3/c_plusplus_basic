#include<iostream>
using namespace std;
#include<string>
int main(){
	string s;
	char x;
	cout<<"\n Nhap vao chuoi: "; 
	getline(cin,s);
	cout<<"\n Nhap ki tu x: "; cin>>x;
	for(int i=0;i<s.length();i++){
		if(s[i]==x)
		{cout<<"Vi tri: "<<i;}}
	char y;
	cout<<"\n Nhap vao ki tu y: ";
	cin>>y;
	for(int i=0;i<s.length();i++){
		if(s[i]==x)
		{s[i]=y;}}
	cout<<s;
	return 0;}
