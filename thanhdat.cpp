/*#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Nhap so gio lam them: "; cin>>x;
	cout<<"Luong bao gom tien thuong: "<< 10*8*30+x*2*30; //don vi USD
	return 0;}*/
/*	#include<iostream>
	using namespace std;
float Max(float a, float b, float c){
   float max = a;
   if(b > max){
      max = b;
   }
   if(c > max){
      max = c;
   }
   return max;
}
int main()
{
	float a,b,c;
	cin>>a>>b>>c;
	cout<< " So lon nhat: "<<Max(a,b,c);
	return 0;} */
	/*#include<iostream>
	using namespace std;
	int main()
	{
		int i, n;
		float sum=0;
		do{
			cout <<"Nhap n: ";
			cin >>n;
			if(n<=1)
			{
				cout<<"Nhap lai!";
			}
		}while(n<=1);
		for(int i=0;i<=n;i++)
		{
			sum+=1.0/(2*n);
			}
			cout<<"Tong: "<<sum;
			return 0;} */
 #include<iostream>
using namespace std;
void nhap_mang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];}
		}
void xuat_mang(int a[], int n)
{
	for(int i=0;i<n;i++ )
	{
	
		cout<<a[i]<<" ";}
		}
float tong_chan(int a[], int n)
{
	float tong=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			tong+=a[i];}
			}
			return tong;
			}
void lon_hon_5(int a[], int n)
{
	for(int i=0;i<n;i++)
	{ if(a[i]>5)
	{
		cout<<a[i]<<" ";}}}
	
int main(){
int *tranthanhdat;
int n;
tranthanhdat=new int [n];

cout<<"Nhap ma: ";
cin>>n;
cout<<"Nhap ma: ";
nhap_mang(tranthanhdat,n);
cout<<"\nHien thi ma sinh vien:";
xuat_mang(tranthanhdat,n);
cout<<"\nTong cac so chan: "<<tong_chan(tranthanhdat,n);
cout<<"\nCac so lon hon 5: ";
lon_hon_5(tranthanhdat,n);
delete [] tranthanhdat;
return 0;}



	