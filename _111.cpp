/*Câu 10.  ** viết các chương trình con thực hiện các công việc sau:

o nhập danh sách các dự án gồm các thông tin: mã dự án, tên dự án, đơn vị, kinh phí;

o hiện danh sách vừa nhập ra màn hình;

o tìm thông tin của các dự án có kinh phí cao nhất;

o thống kê các dự án trực thuộc đơn vị khoa cntt và lưu vào tệp duan.dat (dạng nhị phân).

 Viết chương trình chính để gọi các chương trình con theo thứ tự trên. Nếu có thể tổ chức chương trình thông qua menu thì sẽ là một điểm cộng.
*/
#include<bits/stdc++.h>
using namespace std;

struct Duan
{
    string maduan,tenduan,donvi;
    long kinhphi;
};

void Nhapdsduan( Duan ds[], int &n)
{
    cout<<" Nhap so du an: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n Nhap ma du an: ";
        cin.ignore();
        getline(cin,ds[i].maduan);
        cout<<"\n Nhap ten du an: ";
        cin.ignore();
        getline(cin,ds[i].tenduan);
        cout<<"\n Nhap don vi: ";
        cin.ignore();
        getline(cin,ds[i].donvi);
        cout<<"\n Nhap kinh phi du an: ";
        cin >> ds[i].kinhphi;
        cout<<"\n--------------------\n";
    }
}

void Indsduan( Duan ds[], int n)
{
    cout<<"\n Danh sach du an: ";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<left<<setw(8)<<ds[i].maduan;
        cout<<setw(30)<<ds[i].tenduan;
        cout<<setw(18)<<ds[i].donvi;
        cout<<setw(12)<<ds[i].kinhphi;
    }
}

void Timthongtin( Duan ds[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ds[i].kinhphi>ds[j].kinhphi)
            {
                res=ds[i].kinhphi;
                cout<<"\n Du an co kinh phi lon nhat : ";
                Indsduan(&ds[i],1);
            }
        }
    }
}
void ghi_file(Duan ds[], int n){
	string s="CNTT";
	ofstream f;
	f.open("Duan.dat",ios::out|ios::binary);
	for(int i=0;i<n;i++){
		if(ds[i].donvi==s){
		cout<<"\n"<<left<<setw(8)<<ds[i].maduan;
        cout<<setw(30)<<ds[i].tenduan;
        cout<<setw(18)<<ds[i].donvi;
        cout<<setw(12)<<ds[i].kinhphi;}
        f.write((char*)&ds[i], sizeof(ds[i]));
        if(!f.fail())
        cout<<"\n Ghi file thanh cong! "<<endl;
    f.close();}
}
			
int main ()
{
    int n,option;
    Duan ds[20];
   /* Nhapdsduan(ds,n);
    Indsduan(ds,n);
    Timthongtin(ds,n);*/
    do
    {
        cout<<"\n-------------------Menu------------------"
            <<"\n 1. Nhap danh sach cac du an "
            <<"\n 2. Hien danh sach cac du an "
            <<"\n 3. Thong tin du an co kinh phi cao nhat "
            <<"\n 0. Thoat chuong trinh ";
        cout<<"\n Moi ban chon: ";
        cin >> option;
        switch(option)
        {
            case 1: Nhapdsduan(ds,n); break;
            case 2: Indsduan(ds,n); break;
            case 3: Timthongtin(ds,n); break;
            case 4: ghi_file(ds,n); break;
            case 0: cout<<"\n Da thoat chuong trinh! "; break;
        }
        system("pause");
        system("cls");
    }while(option!=0);
    return 0;
}

