
#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
int n=0;
struct Xe
{
    string Ma_xe;
    string Ten_xe;
    string Mau_sac;
    float don_gia;
} ds[100];
void nhapdsxe()
{
    while(true)
    {
        string s;
        cout << "\nNhap xe thu "<< n+1 << endl;
        while(getchar()!='\n');
        cout << "\nNhap ma xe:";
        getline(cin,s);
        if (s=="0")
        {
            break;
        }
        ds[n].Ma_xe=s;
        cout << "\nNhap ten xe: ";
        getline(cin,ds[n].Ten_xe);
        cout << "\nNhap mau sac: ";
        getline(cin,ds[n].Mau_sac);
        cout << "Nhap don gia: ";
        cin>>ds[n].don_gia;
        n++;
    }
    cout << endl;
}
void inxe(Xe x)
{
    cout << endl<< setw(20)<<x.Ma_xe
    <<setw(10)<< x.Ten_xe
    <<setw(15)<<x.Mau_sac
    <<setw(18)<<x.don_gia;
}
void inds_xe()
{
    cout <<setw(20)<<" Ma xe  "<<setw(10)<< " Ten xe  "<< setw(15)<< "  Mau sac  "<<setw(18)<< "  Don Gia  "<<endl;
    for (int i=0; i<n; i++)
    {
        inxe(ds[i]);
        cout << endl;
    }
    cout <<endl;
}
void sapxep_ds_xe()
{
    Xe tg;
    for (int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].don_gia>ds[j].don_gia)
            {
                swap(ds[i],ds[j]);
            }
        }
        
    }
    cout << "\ndanh sach xe thu tu giam dan theo don gia!\n";
    inds_xe();
    ofstream fileout;
    fileout.open("honda.dat",ios::out|ios::ate|ios::binary);
    fileout.write((char*)inds_xe,sizeof(Xe)*n);
    fileout.close();
}
// }
// void casy()
// {
//     for (int i=0; i<n; i++)
//     {
//         if (ds[i].Gioi_tinh=='0' && ds[i].nhac_cu=="hat")
//         {
//             intv(ds[i]);
//             cout << endl;
//         }
//     }
//     ofstream a;
//     a.open("casy.dat",ios::out|ios::ate| ios::binary);
//     a.write((char *)ds, sizeof(CLB)*n);
//     a.close();
// }
// //void luudanhsachfile()
// //{
// //
// //    ofstream a;
// //    a.open("casy.dat",ios::out| ios::binary);
// //    a.write((char *)ds, sizeof(CLB)*n);
// //    a.close();
// //}
// void hienthitv()
// {
//     cout << "\nDanh sach thanh vien tren 20 tuoi trong CLB!\n";
//     for (int i=0; i<n; i++)
//     {
//         if (ds[i].tuoi>20)
//         {
//             intv(ds[i]);
//         }
//     }
//     cout <<endl;

// }
int main()
{
    int chon;
    do
    {
        cout << "\n------------------------------------------------MENU--------------------------------------------------\n";
        cout << "\n1.Nhap Danh sach xe cua honda."
             << "\n2.Hien danh sach thong tin xe. "
             << "\n3.Ghi ten tep la honda.dat danh sach xe don gia giam dan"
             << "\n4.Tim xe co mau sac la: "
             << "\n0.Thoat!\n";
        cout << "_________________________________________************************_________________________________________";
        cout << "\nMoi chon: ";
        cin>> chon;
        switch(chon)
        {
        case 1:
            nhapdsxe();
            break;
        case 2:
            inds_xe();
            break;
        case 3:
            sapxep_ds_xe();
            break;
        // case 4:
        // {
        //     casy();
        //    // luudanhsachfile();
        // }
        // break;
        // case 5:
        //     hienthitv();
        //     break;
        case 0:
            exit(0);

        }
        system("pause");
        system("cls");

    }
    while (n!=0);


    return 0;
}

