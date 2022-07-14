
#include <bits/stdc++.h>
using namespace std;
// Nhập một dãy số nguyên
void nhap(int a[],int &n)
{
    cout << "\n So chu so ban muon nhap la : ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout << "\n Hay nhap day so nguyen co (" << n << ") chu so : ";
        cin >> a[i];
    }
}
// Xuất dãy số nguyên vừa nhập
void xuat(int a[], int n)
{
    for(int i=0;i<n;++i)
        cout << setw(3) << a[i];
}
// ghi vào tệp "DATA.INF"
void ghiFile(int a[] ,int &n) {
    fstream f;
    f.open("DATA.INF",ios::out|ios::binary);
    for(int i=0; i<n; i++)
        f.write((char *) &a[i],sizeof(int));

    if(!f.good()) {
        cout<<"\n\n\t\t Ghi file that bai!";
    }
    else {
        cout<<"\n\n\t\t Ghi file thanh cong!"<<endl;
    }
    f.close();
}
// Đọc File "DATA.INF"
void docFile(int a[] ,int &n) {
    fstream f;
    f.open("DATA.INF", ios::in|ios::binary);
    int i=0;
    while(!f.eof())
    {
        f.read((char *) &a[i],sizeof(n));
        i++;
    }
    n=i-1;
    f.close();
    cout<<"\n\n\t\t Doc file thanh cong!"<<endl;

}
// Trung bình cộng các số âm trong tệp “DATA.INF”
void TBcong ( int a[] , int n )
{
    fstream f;
    f.open("DATA.INF", ios::in|ios::binary);
    int sum=0,dem=0 ;
    int i=0;
    while(!f.eof())
    {
        f.read((char*)&a[i], sizeof(int));
        if ( a[i] < 0)
        {
            sum += a[i];
            dem++;
        }i++;
    }
    n=i-1;
    if ( dem == 0 )
        cout << "\n Day so nguyen khong ton tai so nguyen am : " << endl ;
    else
        cout << "\n Trung binh cong cua cac so nguyen am la : " << (double) sum/dem  << endl ;
    f.close();

}
void chen(int a[],int &n)
{
    int x,y ;

    cout << "Nhap vi tri muon chen : " ;
    cin >> x ;
    cout << "Nhap so muon chen : " ;
    cin >> y ;
    for(int i=n;i>=x;i--)
    {
        a[i]=a[i-1];
    }
    a[x] = y;
    n++;
    cout<<"\n Danh sach day so sau khi chen la: ";
    ghiFile(a,n);

}
void timMax(int a[],int n)
{
    fstream f;
    f.open("data.inf",ios::in|ios::binary);
    int Max = a[0];
    int i=0;
    while(!f.eof())
    {
        f.read((char*)&a[i], sizeof(int));
        if( a[i] > Max )
        {
            Max = a[i];
        }
        i++;
    }
    n=i-1;
    cout << "\n Vi tri cua phan tu lon nhat trong tep la : " ;
    for(int i=0;i<n;i++)
    {
        if ( a[i] == Max )
        {
            cout << i + 1 << " " ;
        }
    }
    cout <<  endl ;
    f.close();
}
int main()
{
    int a[20];
    int n;
    nhap(a,n);
    xuat(a,n);
    ghiFile(a,n);
    docFile(a,n);
    TBcong(a,n);
    chen(a,n);
    timMax(a,n);
     /*docFile(a,n);
     xuat(a,n);*/
     return 0;
}

