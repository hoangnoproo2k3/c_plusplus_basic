/*kiem tra co phai so doi xung khong */
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool kiem_tra(int &n){
	
//kiem tra so chu so
int dem=-1;
int temp=n;
int x=0;
while(temp!=0){
	temp/=10;
	dem++;}
	temp=n;

while(temp!=0){
	x=x+(temp%10)*pow(10,dem);
	dem--;
	temp=temp/10;
	}
	if(x==n)
	return true;
	else
	return false;}
int main(){
	int n;
	cout<<"\n Nhap n: ";
	cin>>n;
	if(kiem_tra(n)==true)
	cout<<"\n n la so doi xung ";
	else if (kiem_tra(n)==false)
	cout<<"\n khong la so doi xung";
	return 0;}
