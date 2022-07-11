/*Vi?t các chuong trinh con th?c hi?n công vi?c sau :
-nh?p m?t danh sách các thành viên trong clb âm nh?c g?m các thông tin: h? tên, gi?i tính(kí hi?u 0 là n? 1 là nam), tu?i nh?c c? s? d?ng cho d?n khi h? tên thành viên nh?p là d?u "*" thì d?ng vi?c nh?p .
- hi?n danh sách thành viên clb âm nh?c ra màn hình
-chuy?n các thành viên s? d?ng nh?c c? là tr?ng lên d?u danh sách
-ghi là t?p "casy.dat" (d?ng t?p nh? phân) các thành viên trong clb có gi?i tính 0 và nh?c c? s?u d?ng là "hát"
-hi?n th? danh sách các thành viên có tu?i trên 20 v?i d?y d? các thông tin
Vi?t chuong trình chính d? g?i các chuong trình con theo tr?t t? dc vi?t nhu trên. N?u có th? t? chúc theo ctr menu thì s? là m?t di?m c?ng.
*/
#include<bits/stdc++.h>
using namespace std;
int n=0;
struct CLB
{
    string Ho_ten;
    char Gioi_tinh;
    int tuoi;
    string nhac_cu;
} ds[100];
void nhapdsnv()
{
    while(true)
    {
        string s;
        cout << "Nhap du lieu nhan vien thu "<< n+1 << endl;
        cout << "Nhap ten nhan vien:";
        fflush(stdin);
        getline(cin,s);
        if (s=="*")
        {
            break;
        }
        ds[n].Ho_ten=s;
        cout << "Nhap gioi tinh(0:nu, 1:nam): ";
        cin>> ds[n].Gioi_tinh;
        cout << "Nhap tuoi: ";
        cin>>ds[n].tuoi;
        cout << "Nhap nhac cu: ";
        cin.ignore();
        getline (cin,ds[n].nhac_cu);
        n++;
    }
    cout << endl;
}
void intv(CLB x)
{
    cout << endl<< setw(20)<<x.Ho_ten;
    if(x.Gioi_tinh=='0')
    {
        cout<<setw(10)<< " Nu ";
    }
    else if (x.Gioi_tinh=='1')
    {
        cout <<setw(10)<< " Nam ";
    }
    cout <<setw(15)<<x.tuoi
         <<setw(18)<<x.nhac_cu;
}
void indstv()
{
    cout <<setw(20)<< "  Ho Ten  "<<setw(10)<< "  Gioi tinh  "<< setw(10)<< "  Tuoi  "<<setw(20)<< "  Nhac cu  "<<endl;
    for (int i=0; i<n; i++)
    {
        intv(ds[i]);
        cout << endl;
    }
    cout <<endl;
}
void sapxepds()
{
    CLB tg;
    for (int i=0; i<n; i++)
    {
        if (ds[i].nhac_cu=="Trong")
        {
            tg=ds[i];
            ds[i]=ds[i-1];
            ds[i-1]=tg;
        }
    }
    cout << "\ndanh sach thanh vien voi sap xep nguoi su dung nhac cu Trong len dau!\n";
    indstv();

}
void casy()
{
    for (int i=0; i<n; i++)
    {
        if (ds[i].Gioi_tinh=='0' && ds[i].nhac_cu=="hat")
        {
            intv(ds[i]);
            cout << endl;
        }
    }
    ofstream a;
    a.open("casy.dat",ios::out|ios::ate| ios::binary);
    a.write((char *)ds, sizeof(CLB)*n);
    a.close();
}
//void luudanhsachfile()
//{
//
//    ofstream a;
//    a.open("casy.dat",ios::out| ios::binary);
//    a.write((char *)ds, sizeof(CLB)*n);
//    a.close();
//}
void hienthitv()
{
    cout << "\nDanh sach thanh vien tren 20 tuoi trong CLB!\n";
    for (int i=0; i<n; i++)
    {
        if (ds[i].tuoi>20)
        {
            intv(ds[i]);
        }
    }
    cout <<endl;

}
int main()
{
    int chon;
    do
    {
        cout << "\n------------------------------------------------MENU--------------------------------------------------\n";
        cout << "\n1.Nhap Danh sach thanh vien CLB am nhac."
             << "\n2.Hien danh sach thong tin thanh vien CLB am nhac. "
             << "\n3.Chuyen cac thanh vien su dung trong len dau."
             << "\n4.Ghi ten tep la casy.dat cac thanh vien trong cau lac bo co gioi tinh nu va su dung nhac cu la hat"
             << "\n5.Hien thi thong tin thanh vien co do tuoi 20 tro len"
             << "\n0.Thoat!\n";
        cout << "_________________________________________************************_________________________________________";
        cout << "\nMoi chon: ";
        cin>> chon;
        switch(chon)
        {
        case 1:
            nhapdsnv();
            break;
        case 2:
            indstv();
            break;
        case 3:
            sapxepds();
            break;
        case 4:
        {
            casy();
           // luudanhsachfile();
        }
        break;
        case 5:
            hienthitv();
            break;
        case 0:
            exit(0);

        }
        system("pause");
        system("cls");

    }
    while (n!=0);


    return 0;
}

