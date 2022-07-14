/*BÃ i 39 (TH-CSLT-01).  Viáº¿t cÃ¡c chÆ°Æ¡ng trÃ¬nh con thá»±c hiá»‡n cÃ¡c yÃªu cáº§u sau:
- Nháº­p má»™t máº£ng sá»‘ nguyÃªn gá»“m n (n nháº­p tá»« bÃ n phÃ­m) pháº§n tá»­.
- Hiá»ƒn thá»‹ má»™t máº£ng sá»‘ nguyÃªn ra mÃ n hÃ¬nh
- LÆ°u má»™t máº£ng vÃ o tá»‡p â€œsonguyen.txtâ€ (theo dáº¡ng vÄƒn báº£n).
- Äá»c dá»¯ liá»‡u trong tá»‡p â€œsonguyen.txtâ€ ra má»™t máº£ng sá»‘ nguyÃªn
ChÆ°Æ¡ng trÃ¬nh chÃ­nh, táº¡o menu thá»±c hiá»‡n láº§n lÆ°á»£t cÃ¡c lá»±a chá»n trÃªn
 */

#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

// Nhap mang
void nhap(int a[],int &n)
{
    cout<<"Nhap so phan tu:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    cout<<"\n Mang:";
    for(int i=0; i<n; i++)
        cout<<setw(6)<<a[i];
}

// Luu file van ban
void luufile_mang(int a[],int &n)
{
    int i;
    ofstream f;
    f.open("songuyen.txt",ios::out);
    f<<n<<endl;
    for(int i=0; i<n; i++)
        f<<a[i]<<" ";
    f.close();
}
// Doc file van ban
void docfile_mang(int a[], int &n)
{
    int i;
    ifstream f;
    string s;
    f.open("songuyen.txt",ios::in);
    f>>n;
    for(int i=0; i<n; i++)
    {
        f>>n;
    }
    f.close();
}
int main()
{
    int n,chon,a[50];
    do
    {
        cout<<"-------Menu-------"<<endl;
        cout<<"1.Nhap mangso nguyen"<<endl;
        cout<<"2.Hien mang so nguyen"<<endl;
        cout<<"3.Luu file vao tep"<<endl;
        cout<<"4.Doc du lieu tu trong tep"<<endl;
        cout<<"5.Thoat"<<endl;
        cout<<" Moi ban chon"<<endl;
        cin>>chon;
        switch(chon)
        {
        case 1:
            nhap(a,n);
            break;
        case 2:
            xuat(a,n);
            break;
        case 3:
            luufile_mang(a,n);
            break;
        case 4:
            docfile_mang(a,n);
            xuat(a,n);
            break;
        case 0:
            exit(0);
        }
        system("pause");
        system("cls");
    }
    while(chon!=0);
    return 0;
}

/*
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
void nhapmang (int a[], int &n)
{
	cout<<"Nhap so phan tu : ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
}
void inmang (int a[],int n)
{
	cout<<"\nMang : ";
	for (int i=0;i<n;i++)
	cout<<setw(6)<<a[i];
}
void luumangFILE (int a[], int n)
{
	ofstream f;
	f.open("songuyen.txt",ios::out);
	f<<n<<endl;
	for(int i=0;i<n;i++)
	f<<a[i]<<endl;
	f.close();
}
void docmangFILE (int a[], int &n)
{
	ifstream f;
	string s;
	f.open("songuyen.txt",ios::in);
	f>>n;
	for (int i=0;i<n;i++)
	{
	f>>a[i];
	}
	f.close();
}
int main()
{
	int n,chon;
	int a[20];
		do{
			cout<<"\n1.Nhap mang";
			cout<<"\n2.In mang";
			cout<<"\n3.Luu mang File";
			cout<<"\n4.Doc mang File";
			cout<<"\n0.Dung chuong trinh";
			cout<<"\nMoi ban chon: ";
			cin>>chon;
			switch(chon)
			{
				case 1 : nhapmang(a,n);break;
				case 2 : inmang(a,n);break;
				case 3 : luumangFILE(a,n);break;
				case 4 : docmangFILE(a,n);break;
				case 0 : exit(0);

			}
		}
		while(chon !=0);
	return 0;
}
*/