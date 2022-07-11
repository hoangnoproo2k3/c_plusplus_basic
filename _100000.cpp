/*Câu 9.  ** viết các chương trình con thực hiện các công việc sau:

o nhập 1 danh sách n (0<n<100) đội bóng gồm các thông tin: tên viết tắt, tên đội bóng, số lượng cầu thủ, năm thành lập)

o hiện danh sách n đội bóng ra màn hình với đầy đủ các thông tin

o tìm đội bóng lâu đời nhất trong danh sách, nếu có nhiều đội cùng năm thành lập hãy hiện tất cả các đội đó ra màn hình

o tính trung bình cộng số lượng các cầu thủ trong toàn bộ giải thi đấu. (tổng số cầu thủ / số đội)

o ghi vào tệp “doibong.dat” (dưới dạng nhị phân) danh sách các đội bóng thành lập vào năm x với x là giá trị nhập từ bàn phím.

Viết chương trình chính để gọi các chương trình con trên theo trật tự được viết như trên.
Nếu có thể tổ chức chương trình thông qua menu thì sẽ là một điểm cộng.*/
#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;

struct Doibong
{
    string tenvt,tendoibong;
    long soluongct,namthanhlap;
};

void Nhapdsdoibong( Doibong ds[], int &n)
{
    cout<<"Nhap so luong doi bong: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n Nhap ten viet tat: ";
        cin.ignore();
        getline(cin,ds[i].tenvt);
        cout<<"\n Nhap ten doi bong: ";
        cin.ignore();
        getline(cin,ds[i].tendoibong);
        cout<<"\n Nhap so luong cau thu: ";
        cin >> ds[i].soluongct;
        cout<<"\n Nhap nam thanh lap: ";
        cin >> ds[i].namthanhlap;
        cout<<"\n---------\n";
    }
}

void Indsdoibong( Doibong ds[], int n)
{
    cout<<"\n Danh sach doi bong la: ";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<setw(8)<<ds[i].tenvt;
        cout<<setw(15)<<ds[i].tendoibong;
        cout<<setw(10)<<ds[i].soluongct;
        cout<<setw(8)<<ds[i].namthanhlap;
    }
}

void Doibonglaudoi( Doibong ds[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ds[i].namthanhlap<ds[j].namthanhlap)
            {
                res=ds[i].namthanhlap;
                cout<<"\n Doi bong lau doi nhat: ";
                Indsdoibong(&ds[i],1);
            }
        }
    }
}

void TBC_cauthu( Doibong ds[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ds[i].soluongct;
    }
    cout<<"\n Trung binh cong so luong cau thu: "<< sum/n;
}

void Luufile( Doibong ds[], int n)
{
	int x;
	cout<<"\n Nhap vao nam: ";
	cin>>x;
    ofstream f;
    f.open("doibong.dat",ios::out|ios::binary);
    for(int i=0;i<n;i++){
    	if(ds[i].namthanhlap==x){
    	cout<<"\n"<<setw(8)<<ds[i].tenvt;
        cout<<setw(15)<<ds[i].tendoibong;
        cout<<setw(10)<<ds[i].soluongct;
        cout<<setw(8)<<ds[i].namthanhlap;}	
        f.write((char*) &ds[i],sizeof(Doibong));
    if(!f.fail())
        cout<<"\n Ghi file thanh cong! "<<endl;
    f.close();}
    }

int main ()
{
    int n,option;
    Doibong ds[20];
   /* Nhapdsdoibong(ds,n);
    Indsdoibong(ds,n);
    Doibonglaudoi(ds,n);
    TBC_cauthu(ds,n);
    Luufile(ds,n);*/
    do
    {
        cout<<"\n---------------------Menu---------------------------"
            <<"\n 1.Nhap danh sach doi bong "
            <<"\n 2.Hien danh sach doi bong "
            <<"\n 3.Tim doi bong lau doi nhat "
            <<"\n 4.Trung binh cong tat ca cau thu tham gia giai dau "
            <<"\n 0.Thoat chuong tring "
            <<"\n----------------------------------------------------\n ";
        cout<<"\n Moi ban chon: ";
        cin >> option;
        switch(option)
        {
            case 1: Nhapdsdoibong(ds,n); break;
            case 2: Indsdoibong(ds,n); break;
            case 3: Doibonglaudoi(ds,n); break;
            case 4: TBC_cauthu(ds,n); break;
            case 0: break;
        }
        system("pause");
        system("cls");
    }while(option!=0);
    return 0;
}
