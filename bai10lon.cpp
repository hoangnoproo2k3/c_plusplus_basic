#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
struct Xe{
    string Ma_xe, Ten_xe, Mau_sac;
    float don_gia;
};
void nhap(Xe ds[], int &n){
	int i=0;
	n=0;
	do{
		fflush(stdin);
		cout<<"\n Nhap ma xe: "; getline(cin,ds[i].Ma_xe);
		if(ds[i].Ma_xe=="0")
		break;
		cout<<"\n Nhap ten xe: "; getline(cin, ds[i].Ten_xe);
		cout<<"\n Nhap mau sac xe: "; getline(cin,ds[i].Mau_sac);
		fflush(stdin);
		cout<<"\n Nhap don gia: "; cin>>ds[i].don_gia;
		i++;
		n++;
	}while(true);}
void hien(Xe ds[], int n){
	cout <<setw(20)<<left <<"Ma xe  "<<"\t"<<setw(10)<<left<< "Ten xe  "<<"\t"<<left<< setw(15)
    << "Mau sac  "<<"\t" <<left<<setw(18)<< "Don Gia  "<<endl;
	for(int i=0;i<n;i++) {
    cout << left<< setw(20)<<ds[i].Ma_xe<<"\t"
    <<setw(10)<<left<< ds[i].Ten_xe<<"\t"
    <<setw(15)<<left<<ds[i].Mau_sac<<"\t"
    <<setw(18)<<ds[i].don_gia<<"\n";
    }
}

void sapxep_ds_xe(Xe ds[], int n){
    for (int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].don_gia<ds[j].don_gia)
            {
                swap(ds[i],ds[j]);
            }
        }        
    }
    cout << "\ndanh sach xe thu tu giam dan theo don gia!\n";
    hien(ds,n);
    ofstream fileout;
    fileout.open("honda.dat",ios::out|ios::ate|ios::binary);
    fileout.write((char*)hien,sizeof(Xe)*n);
    fileout.close();
}
// hàm tìm ki?m xe
void tim_kiem(Xe ds[], int n){
    string x;
    fflush(stdin);
    cout<<"Nhap mau sac: "; getline(cin,x);
    float _min=ds[0].don_gia;
    for(int i=0;i<n;i++)
    {
        
        if(_min>ds[i].don_gia)
        {
            _min=ds[i].don_gia;
        }

    }
    for (int i=0; i<n; i++)
    {
        if(_min==ds[i].don_gia&&ds[i].Mau_sac==x)
	    {cout << left<< setw(20)<<ds[i].Ma_xe<<"\t"
	    <<setw(10)<<left<< ds[i].Ten_xe<<"\t"
	    <<setw(15)<<left<<ds[i].Mau_sac<<"\t"
	    <<setw(18)<<ds[i].don_gia<<"\n";}
        }
    cout<<"\n Khong tim thay ket qua!";
    }
int main(){
	Xe ds[100];
	int n;
    int chon;
    do
    {
        cout << "\n------------------------------------------------MENU--------------------------------------------------\n";
        cout << "\n1.Nhap Danh sach xe cua honda."
             << "\n2.Hien danh sach thong tin xe. "
             << "\n3.Ghi ten tep la honda.dat danh sach xe don gia giam dan"
             << "\n4.Tim xe co mau sac la: "
             << "\n0.Thoat!\n";
        cout << "___________________________________________________END___________________________________________________";
        cout << "\nMoi chon: ";
        cin>> chon;
        switch(chon)
        {
        case 1:
            nhap(ds,n);
            break;
        case 2:
            hien(ds,n);
            break;
        case 3:
            sapxep_ds_xe(ds,n);
            break;
        case 4:
            tim_kiem(ds,n);
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

