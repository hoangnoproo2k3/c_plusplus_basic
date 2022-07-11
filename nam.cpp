#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void save(int n,int &dem)
{
    int a[100];
    int i=0;
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
    if(!f.good())
    {
        cout<<"ghi file that bai !";
        return ;
    }
    else
        cout<<"ghi file thanh cong ";
}
void docfile(int a[],int &dem)
{
    fstream fo;

    fo.open("mang.in",ios::in|ios::binary);
    int i=0;
    while(!fo.eof())
    {
        fo.read((char*) &a[i],sizeof(a[i]));
        i++;
    }
    dem=i-1;
    fo.close();
    cout<<"\ndoc file thanh cong ";
    cout<<"\nmang sau khi nhap xong la : ";
    for(int i=0; i<dem; i++)
    {
        cout<<a[i]<<" ";
    }
}
void sapxep(int a[],int dem)
{
    cout<<"\nmang sau khi xep la : ";
    for(int i=0; i<dem; i++)
    {
        if(a[i]%3==0)
        {
            cout<<a[i]<<"  ";
        }
    }
    for(int i=0; i<dem; i++)
    {
        if(a[i]%3!=0&&a[i]%2==0)
        {
            cout<<" "<<a[i]<<" ";
        }
    }
    for(int i=0; i<dem; i++)
    {
        if(a[i]%3!=0&&a[i]%2!=0)
        {
            cout<<" "<<a[i]<<" ";
        }
    }
}
void save_max_min(int a[],int dem )
{
    int maxx,minn,vitrimax,vitrimin;
    maxx=a[0];
    fstream f_max_min;
    for(int i=1; i<dem; i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
            vitrimax=i;
        }
    }
    for(int i=1; i<dem; i++)
    {
        if(a[i]<minn)
        {
            minn=a[i];
            vitrimin=i;
        }
    }
    f_max_min.open("vitri.out",ios::out|ios::binary);
    f_max_min.write((char*) &vitrimax,sizeof(vitrimax));
    f_max_min.write((char*) &vitrimin,sizeof(vitrimin));
    f_max_min.close();
    if(!f_max_min.good())
    {
        cout<<"\nghi vitri that bai ! ";
    }
    else{
        cout<<"\nghi vitri thanh cong ";
        cout<<vitrimax;
        cout<<" "<<vitrimin;
    }
}
int main()
{
    int a[100],n,dem;
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
            cout<<"cam on ban da dung          ";
            break;

        }
        system("pause");
        system("cls");
    }
    while(true);
 return 0;
}
