#include<stdio.h>
#include<string.h>
using namespace std;
void sol(char a[], char b[]){
	int n=strlen(a);
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]==a[j]) b[i]=b[i]+1;}}
			}
void tim_max(char a[], char b[]){
	int n=strlen(a);
	int max=1;
	for(int i=0;i<n;i++){
		if(b[i]>max) max=b[i];}
	for(int i=0;i<n;i++){
		if(b[i]==max)
		printf("\n ki tu xuat hien nhieu nhat: %c, so lan: %d. ",a[i],b[i]);}
		}
int main(){
	char a[30];
	char b[30]={0};
	gets(a);
	sol(a,b);
	tim_max(a,b);
	return 0;}
