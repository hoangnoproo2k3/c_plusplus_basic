#include<stdio.h>
#include<string.h>
using namespace std;
void sol(char a[], char b[])
{
	int n= strlen(a);
	for(int i=0; i< n;i++)
	{
		for(int j=i;j<n;j++)
		{ if(a[j]==a[i]) b[i]++;}
	}
}
void xuat(char a[], char b[])
{
	int max=1;
	int n= strlen(a);

	for(int i=0;i<n;i++)
	{ if(b[i]>max) max=b[i];}
	for(int i=0; i<n;i++)
	{ 
		if(b[i]==max)
		printf("\n ki tu nhieu nhat: %c, so lan %d.",a[i],b[i]);}
	}
	int main()
	{
		char a[100];
		char b[100]={0};
		gets(a);
		sol(a,b);
		xuat(a,b);
		return 0;}
