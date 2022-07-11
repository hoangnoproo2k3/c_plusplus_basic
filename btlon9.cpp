#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void save(int n,int &dem)
{
    int a[100];
    int i=0;
    dem=0;
    fstream f;
    do
    {
        cout<<"moi nhap phan tu thu "<<i<<" : ";
        cin>>n;
        a[i]=n;
        i++;
        dem++;
    }
    while(n!=0);
    f.open("mang.in",ios::out|ios::binary);
    for(int i=0; i<dem-1; i++)
    {
        f.write((char*) &a[i],sizeof(a[i]));
    }
    f.close();
}
void docfile(int a[],int &dem)
{
	int b[100],m=0;

    fstream fi;
	
    fi.open("mang.in",ios::in|ios::binary);
    int i=0;
    while(true)
    {
    	b[i] = a[i];
//    	m++;
    	fi.read((char*)&b[i],sizeof(b[i]));
		if(fi.eof()) break;
		
		cout << b[i] << " ";
	
//        fo.read((char*) &a[i],sizeof(a[i]));
        i++;
    }
//    dem=i-1;
    fi.close();
	for(int i=0;i<dem-1;i++){
	a[i] = b[i];
	}
//    cout<<"\nmang sau khi nhap xong la : ";
//    for(int i=0; i<dem-1; i++)
//    {
//        cout<<a[i]<<" ";
//    }
}

void sapxep(int a[],int dem)
{
    cout<<"\nmang sau khi xep la : ";
    for(int i=0; i<dem-1; i++)
    {
        if(a[i]%3==0)
        {
            cout<<a[i]<<"  ";
        }
    }
    for(int i=0; i<dem-1; i++)
    {
        if(a[i]%3!=0&&a[i]%2==0)
        {
            cout<<" "<<a[i]<<" ";
        }
    }
    for(int i=0; i<dem-1; i++)
    {
        if(a[i]%3!=0&&a[i]%2!=0)
        {
            cout<<" "<<a[i]<<" ";
        }
    }
}
int _max(int a[],int dem){
	int x;
	int maxx=0;
	for(int i=0; i<dem-1; i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
            x=i;
        }
    }
    return x;
}
int _maxx(int a[],int dem){
	int x;
	int maxx=0;
	for(int i=0; i<dem-1; i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
        
        }
    }
    return maxx;
}
int _min(int a[], int dem){
	int minn=_maxx(a,dem);int k;
    for(int j=0; j<dem-1; j++)
    {
        if(a[j]<minn)
        {
            minn=a[j];
            k=j;
        }
    }
    return k;
}

void save_max_min(int a[],int dem )
{
	int x = _max(a,dem);int k=_min(a,dem);
    fstream f_max_min;
    f_max_min.open("vitri.out",ios::out|ios::binary);
    f_max_min.write((char*) &x,sizeof(x));
    f_max_min.write((char*) &k,sizeof(k));
    f_max_min.close();
    cout << x << " " << k;
}
int main()
{
    int a[100],n,dem;int b[100];
    int chon;
    do
    {
        cout<<"\n-----------------------------------MENU----------------------------------------\n"
            <<"1.Nhap mang va ghi file(nhi phan). \n"
            <<"2.doc file va xuat ra man hinh. \n"
            <<"3.sap xep mang so chia het cho 3 len dau, tiep theo la so chan con lai la le. \n"
            <<"4.luu vi tri vao tep duoi dang file nhi phan. \n"
            <<"5.Thoat "
            <<"\n-------------------------------------------------------------------------------";
        cout<<"\nMoi ban chon option : ";
        cin>>chon;
        switch(chon)
        {
        case 1:
            save(n,dem);
            break;
        case 2:
            docfile(a,dem);
            break;
        case 3:
            sapxep(a,dem);
            break;
        case 4:
            save_max_min(a,dem);
            break;
        case 5:
            exit(0);
            break;

        }
        system("pause");
        system("cls");
    }
    while(true);
	return 0;
}
