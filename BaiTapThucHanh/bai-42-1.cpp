#include<bits/stdc++.h>
using namespace std;

struct PHIM {
    char tenphim[50],hoten[50],hangsx[20],theloai[20];
    int namsx;
};

PHIM nhap() {
    PHIM p;
    cin.ignore();
    cout<<"\nMoi nhap ten phim: ";
    cin.getline(p.tenphim,50);
    cout<<"Moi nhap ho ten dao dien: ";
    cin.getline(p.hoten,50);
    cout<<"Moi nhap hang sx: ";
    cin.getline(p.hangsx,20);
    cout<<"Moi nhap the loai: ";
    cin.getline(p.theloai,20);
    cout<<"Moi nhap nam sx: ";
    cin>>p.namsx;
    return p;
}

void hien(PHIM p, int i) {
    cout<<setw(5)<<p.tenphim<<setw(25)<<p.hoten<<setw(20)<<p.hangsx<<setw(15)<<p.theloai<<setw(10)<<p.namsx<<endl;
}

void nhapds(PHIM ds[], int &n) {
    cout<<"Moi nhap so phim: ";
    cin>>n;
    for(int i=0;i<n;i++) {
        ds[i]=nhap();
    }
}

void hiends(PHIM ds[], int n) {
    cout<<"\n\n\t\tDANH SACH PHIM"<<endl;
    cout<<setw(5)<<"Ten phim"<<setw(25)<<"Dao dien"<<setw(20)<<"Hang sx"<<setw(15)<<"The loai"<<setw(10)<<"Nam sx"<<endl;
    for(int i=0;i<n;i++) {
        hien(ds[i],i);
    }
}

void ghifile(PHIM ds[] ,int n) {
    fstream f;
    f.open("PHIM.dat",ios::out|ios::binary);
    for(int i=0; i<n; i++)
        f.write((char *) &ds[i],sizeof(PHIM));

    if(!f.good()) {
        cout<<"\n\n\t\t Ghi file that bai!";
    }
    else {
        cout<<"\n\n\t\t Ghi file thanh cong!"<<endl;
    }
    f.close();
}

void docfile(PHIM ds[] ,int &n) {
    fstream f;
    f.open("PHIM.dat", ios::in|ios::binary);
    int i=0;
    while(!f.eof()) //khi chua ket thuc file thi tiep tuc doc
    {
        f.read((char *) &ds[i],sizeof(PHIM));
        i++;
    }
    n=i-1;
    f.close();
    cout<<"\n\n\t\t Doc file thanh cong!"<<endl;

}

void namsx(PHIM ds[], int &n) {
    int k;
    cout<<"Moi nhap nam can tim: ";
    cin>>k;
    cout<<setw(5)<<"Ten phim"<<setw(25)<<"Dao dien"<<setw(20)<<"Hang sx"<<setw(15)<<"The loai"<<setw(10)<<"Nam sx"<<endl;
    for(int i=0; i<n; i++) {
        if(ds[i].namsx==k) {
            hien(ds[i],i);
        }
    }
}

void sapxep(PHIM ds[], int &n) {
    PHIM tg;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(ds[i].namsx<ds[j].namsx) {
                tg=ds[i];
                ds[i]=ds[j];
                ds[j]=tg;
            }
        }
    }
    cout<<"\n\n\t\tDANH SACH PHIM SAU KHI SAP XEP"<<endl;
    cout<<setw(5)<<"Ten phim"<<setw(25)<<"Dao dien"<<setw(20)<<"Hang sx"<<setw(15)<<"The loai"<<setw(10)<<"Nam sx"<<endl;
     for(int i=0; i<n; i++) {
            hien(ds[i],i);
    }
}

void ghifileds(PHIM ds[] ,int n) {
    fstream f;
    f.open("SAPTHEONAM.dat",ios::out|ios::binary);
    for(int i=0; i<n; i++)
        f.write((char *) &ds[i],sizeof(PHIM));

    if(!f.good()) {
        cout<<"\n\n\t\t Ghi file that bai!";
    }
    else {
        cout<<"\n\n\t\t Ghi file thanh cong!"<<endl;
    }
    f.close();
}

void docfileds(PHIM ds[] ,int &n) {
    fstream f;
    f.open("SAPTHEONAM.dat", ios::in|ios::binary);
    int i=0;
    while(!f.eof()) //khi chua ket thuc file thi tiep tuc doc
    {
        f.read((char *) &ds[i],sizeof(PHIM));
        i++;
    }
    n=i-1;
    f.close();
    cout<<"\n\n\t\t Doc file thanh cong!"<<endl;
    hiends(ds,n);
}

void dem(PHIM ds[], int &n) {
    int dem=0;
    for(int i=0; i<n; i++) {
        if(strcmp(ds[i].hangsx,"Giai phong")==0) {
            dem++;
        }
    }
    cout<<"So phim do hang Giai phong la: "<<dem<<endl;
}


int main() {
    PHIM ds[100];
   int n;
   PHIM nhap(ds,n);
   ghifile(ds,n);
   docfile(ds,n);
   namsx(ds,n);
   sapxep(ds,n);
   return 0;}
   
   

