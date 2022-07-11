/*Bài 40 (TH-CSLT-07): Vi?t các CTC th?c hi?n l?n lu?t các yêu c?u sau:
1. Nh?p danh sách n tài x? t? bàn phím. M?i tài x? có các thông tin sau: Mã tài x?, H? và tên, Gi?i tính, Nam sinh, Bi?n s? xe, Luong. 
2. In danh sách các tài x? lên màn hình
3. Luu danh sách tài x? vào file “Taixe.dat”  - File nh? phân
4. Ð?c file “Taixe.dat” vào m?ng và hi?n th? danh sách tài x? ra màn hình
5. Trích l?c thông tin c?a các tài x? có gi?i tính n? và luu vào file “Taixenu.dat”
6. Nh?p t? bàn phím mã tài x?, ch?
6. Nh?p t? bàn phím mã tài x?, ch?nh s?a luong c?a tài x? dó và c?p nh?t vào file. Ð?c file “Taixe.dat” và hi?n th? danh sách tài x? sau khi c?p nh?t ra màn hình
Luu ý: T? ch?c các file du?i d?ng file nh? phân.*/
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
struct taixe
{
 string ten;
 string maxe;
 string gioitinh;
 string biensoxe;
 int namsinh;
 int luong;
};
void nhapds(taixe ds[], int &n)
{
    cout<<"\n--------------------";
    cout<<"\nNhap so tai xe: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"\nNhap ten cua tai xe: ";
        cin.ignore();
        getline(cin, ds[i].ten);
        cout<<"\nNhap ma xe: ";
        getline(cin, ds[i].maxe);
        cout<<"\nNhap gioi tinh: ";
        getline(cin, ds[i].gioitinh);
        cout<<"\nNhap bien so xe: ";
        getline(cin, ds[i].biensoxe);
        cout<<"\nNhap nam sinh: ";
        cin>>ds[i].namsinh;
        cout<<"\nNhap luong: ";
        cin>>ds[i].luong;
    }
}
void intaixe(taixe x)
{
    cout<<"\n"<<setw(20)<<x.ten;
    cout<<setw(15)<<x.maxe;
    cout<<setw(15)<<x.gioitinh;
    cout<<setw(15)<<x.biensoxe;
    cout<<setw(15)<<x.namsinh;
    cout<<setw(15)<<x.luong;
}
void indstaixe(taixe ds[], int &n)
{
    cout<<"\nDanh sach cac tai xe la: ";
    for(int i=0; i<n; i++)
        intaixe(ds[i]);
}
void luufileds(taixe ds[], int&n)
{
    ofstream f;
    f.open("taixe.dat", ios::out|ios::ate|ios::binary);
    for(int i=0; i<n; i++)
        f.write((char *) &ds[i], sizeof(taixe));
    if (!f.good())
    {
        cout<< "\ghi bi loi : "<<endl;
        return;
    }
    cout<< "\ghi thanh cong "<<endl;
    f.close();
}
void docfileds(taixe ds[], int&n)
{
    ifstream f;
    f.open("taixe.dat", ios::in|ios::binary);
    int i=0;
    while(!f.eof())
    {
         f.read((char *) &ds[i], sizeof(taixe));
         i++;
    }
    n=i-1;
    f.close();
    cout<<"\nDoc file thanh cong!";
}
void indstaixenu(taixe ds[],int &n)
{
    cout<<"\nCac tai xe nu la: ";
    for(int i=0; i<n; i++)
    {
        if(ds[i].gioitinh=="nu")
            intaixe(ds[i]);
    }
}
void taixenu(taixe gioitinh(), int &n)
{
    
}
void luufiledsnu(taixe ds[], int&n)
{
    ofstream k;
    k.open("taixenu.dat", ios::out|ios::ate|ios::binary);
    for(int i=0; i<n; i++)
        k.write((char *) &ds[i], sizeof(taixe));
    if (!k.good())
    {
        cout<< "\nghi bi loi : "<<endl;
        return;
    }
    cout<< "\nghi thanh cong "<<endl;
    k.close();
}
void docfiledsnu(taixe ds[], int&n)
{
    ifstream k;
    k.open("taixenu.dat", ios::in|ios::binary);
    int i=0;
    while(!k.eof())
    {
         k.read((char *) &ds[i], sizeof(taixe));
         i++;
    }
    n=i-1;
    k.close();
    cout<<"\nDoc file thanh cong!";
}
int main()
{
    taixe ds[20];
    taixe gioitinh[15];
    int n, chon;
    do
    {
        cout<<"\n------------------------------------";
        cout<<"\n1. Nhap danh sach tai xe ";
        cout<<"\n2. In danh sach tai xe ";
        cout<<"\n3. Luu danh sach tai xe dang nhi phan ";
        cout<<"\n4. Doc danh sach tai xe va hien thi danh sach tai xe ra man hinh ";
        cout<<"\n5. In danh sach tai xe nu va luu, doc file ";
        cout<<"\n6. ";

        cout<<"\n7.  ";
        cout<<"\n0. Dung chuong trinh ";
        cout<<"\nMoi ban chon: ";
        cin>>chon;
        switch(chon)
        {
            case 1 : nhapds(ds, n) ; break;
            case 2 : indstaixe(ds, n) ; break;
            case 3 : luufileds(ds, n);break;
            case 4 : docfileds(ds, n);break;
            case 5 : indstaixenu(ds, n), luufiledsnu(ds, n), docfiledsnu(ds, n)  ;break;
            case 6 : ;break;
            case 7 : ;break;
            case 0 : exit (0);
        }

    } while(chon != 0);

return 0;
}

