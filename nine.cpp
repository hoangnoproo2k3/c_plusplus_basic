/*vi?t các ch??ng trình con th?c hi?n các công vi?c sau:
o	nh?p 1 danh sách n (0<n<100) thí sinh tham d? vòng s? lo?i ch??ng trình vietnam idol g?m các thông tin: (s? báo danh, h? tên, gi?i tính, tên ti?t m?c d? thi, k?t qu? (??t/không ??t có th? ký hi?u là 'd' và 'kd')
o	hi?n danh sách thí sinh ra màn hình v?i ??y ?? các thông tin (s? báo danh, h? tên, gi?i tính, tên ti?t m?c, k?t qu?)
o	tìm danh sách các ti?t m?c trùng tên và hi?n thông tin các ti?t m?c ra màn hình (v?i ??y ?? các thông tin: s? báo danh, h? tên, gi?i tính, tên ti?t m?c d? thi)
o	ghi vào t?p "ketqua.dat" (d??i d?ng nh? phân) danh sách các thí sinh ??t vòng d? thi.
o	s?p x?p danh sách thí sinh có tên c?a thí sinh theo th? t? alphabet (a-z)
Vi?t ch??ng trình chính ?? g?i các ch??ng trình con trên theo tr?t t? ???c vi?t nh? trên. N?u có th? t? ch?c ch??ng trình thông qua menu thì s? là m?t ?i?m c?ng.*/
#include<iostream>
#include<string.h>
#include <stdio.h>
#include<fstream>
#include<iomanip>
using namespace std;

struct thisinh 
{
	int sbd;
	char hoten[50];
	char gt[20];
	char tentm[50];
	char kq[10];	
};
void nhap( thisinh &ts)
{
	cout<<"nhap vao so bao danh: ";
	cin>>ts.sbd;
	fflush(stdin);
	cout<<"nhap vao ho ten: ";
	gets( ts.hoten);
	cout<<"nhap vao gioi tinh: ";
	gets(ts.gt);
	cout<<"nhap vao ten tiet muc du thi: ";
	gets(ts.tentm);
	cout<<"nhap vao ket qua: ";
	gets(ts.kq);
	
}
void xuat(thisinh ts)
{ cout<<setw(5)<<" "<<"HOTEN"<<setw(10)<<" "<<"GT"<<setw(5)<<" "<<"TIETMUC"<<setw(15)<<" "<<"KQ"<<endl;
	cout<<setw(5)<<" "<<ts.hoten<<setw(10)<<" "<<ts.gt<<setw(5)<<" "<<ts.tentm<<setw(15)<<" "<<ts.kq<<endl;
}
void nhapdsts( thisinh ds[], int &n)
{
	for( int i=0;i<n;i++)
	{cout<<"Nhap vao thi sinh thu "<<i<<endl;
	nhap(ds[i]);
	}
}
void xuatdsts( thisinh ds[], int n)
{ cout<<setw(5)<<"STT"<<setw(5)<<" "<<"HOTEN"<<setw(10)<<" "<<"GT"<<setw(5)<<" "<<"TIETMUC"<<setw(15)<<" "<<"KQ"<<endl;
 	for( int i=0; i<n;i++)
	{
		cout<<setw(5)<<i+1<<setw(5)<<" "<<ds[i].hoten<<setw(10)<<" "<<ds[i].gt<<setw(5)<<" "<<ds[i].tentm<<setw(15)<<" "<<ds[i].kq<<endl;
	}
}
void trungten( thisinh ds[], int n)
{
	for( int i=0;i<n;i++)
	{for( int j=i+1;j<n;j++)
	{
		if( strcmp(ds[i].tentm,ds[j].tentm)==0)
		{ xuat(ds[i]);
		xuat(ds[j]);
		}
	}
	}
}
void luufile(thisinh ds[], int n)
{
	ofstream f;
	f.open("ketqua.dat",ios::out|ios::binary);
	for( int i=0; i<n;i++)
	{
		if( ds[i].kq=="dat")
		{
			cout<<left<<setw(5)<<" "<<ds[i].hoten<<setw(10)<<" "<<ds[i].gt<<setw(5)<<" "<<ds[i].tentm<<setw(15)<<" "<<ds[i].kq<<endl;
		
	f.write((char*)&ds[i], sizeof(ds[i]));}
	}
	f.close();
}

void sapxep(thisinh ds[], int n)
{	char tmp[50];
	for( int i=0; i<n;i++)
	{
		for( int j=1;j<n;j++)
		if(strcmp(ds[j-1].hoten,ds[j].hoten)>0)
			{
		        strcpy(tmp, ds[j-1].hoten);
		        strcpy(ds[j-1].hoten, ds[j].hoten);
		        strcpy(ds[j].hoten, tmp);
      		}

	}
}

int main()
{
	thisinh ds[100];
	int n;
	cout<<"Nhap vao so luong thi sinh: ";
	cin>>n;
	nhapdsts(ds,n);
	xuatdsts(ds,n);
	/*trungten(ds,n);
	luufile(f,ds,n);
	sapxep(ds,n);
	xuatdsts(ds,n);*/
	//xuatdsts(ds,n);
	luufile(ds,n);
	return 0;
}
