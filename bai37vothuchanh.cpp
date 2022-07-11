#include<bits/stdc++.h>
using namespace std;
int n;
struct QL
{ 	string stb;
	string ten;
	float cuoc_phi;
	string ngay;} 
ds[100];
void nhap(){ 
	int dem=0;
	while(true)
	{ string s;
	while(getchar()!='\n');
	cout<<"Nhap so thue bao: ";
	getline(cin,s);
	if (s=="0")
        {
            break;
        }
        ds[n].stb=s;
	cout<<"Nhap ten: ";
	getline(cin,ds[n].ten);
	cout<<"Nhap cuoc phi: ";
	cin>>ds[n].cuoc_phi;
	cout<<"Nhap ngay lap: ";
	getline(cin,ds[n].ngay);
	n++;
	dem++;}
	cout<<endl;}
void hien(QL x)
{
    cout << left<< setw(20)<<x.stb<<"\t"
    <<setw(10)<<left<< x.ten<<"\t"
    <<setw(15)<<left<<x.cuoc_phi<<"\t"
    <<setw(18)<<x.ngay<<"\n";
}
void hiends()
{
    cout <<setw(20)<<left <<"So thue bao"<<"\t"<<setw(10)<<left<< "Ten   "<<"\t"<<left<< setw(15)
    << "Cuoc phi "<<"\t" <<left<<setw(18)<< "Ngay lap  "<<endl;
    for (int i=0; i<n; i++)
    {
        hien(ds[i]);
        cout << endl;
    }
    cout <<endl;
}
void sap_xep()
{ 	
	for(int i=0;i<n;i++)
	{ for(int j=i+1;j<n;j++)
		{
			if(ds[i].cuoc_phi<ds[j].cuoc_phi)
			{swap(ds[i],ds[j]);}
		}
		hien(ds[i]);
	}
}
float max_cuoc()
{
	float max=ds[0].cuoc_phi;
	for(int i=0;i<n;i++)
	{
		if(ds[i].cuoc_phi>max)
		{max=ds[i].cuoc_phi;}
	}
	return max;}
void xoa(int &n,int vt)
	{for(int i=vt+1;i<n;i++)
	{ds[i-1]=ds[i];}
		n--;
		}
void xoa_yeu_cau()
	{ for(int i=0;i<n;i++)
		{ if(ds[i].cuoc_phi<10000)
			{xoa(n,i);
			i--;}
			//hien(ds[i]);
		}
	}
int main()
{ 	
	nhap();
	hiends();
	cout<<"Sap xep theo cuoc phi\n";
	sap_xep();
	cout<<"So co cuoc phi cao nhat: "<<max_cuoc();
	nhap();
	cout<<"Hien danh sach sau khi them\n";
	hiends();
	cout<<"Mang sau khi xoa <10000\n";
	xoa_yeu_cau();
	cout<<"Sau khi xoa: \n";
	hiends();
	return 0;}
