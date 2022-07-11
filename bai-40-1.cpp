#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

struct TaiXe{
	string maTX, hoTen, gt, bien;
	int namSinh, luong;
	
	void hienTT(){
		cout << left << setw(15) << maTX
			 << left << setw(25) << hoTen
			 << left << setw(10) << gt
			 << left << setw(10) << namSinh
			 << left << setw(15) << bien
			 << left << setw(15) << luong << endl;
	}
};

void nhapDS(TaiXe ds[], int n){
	cout << "Nhap danh sach" << endl;
	for(int i=0;i<n;i++){
		cout << "Ma tai xe: "; cin.ignore(); getline(cin, ds[i].maTX);
		cout << "Ho va ten: "; getline(cin, ds[i].hoTen);
		cout << "Gioi tinh: "; getline(cin, ds[i].gt);
		cout << "Nam sinh: "; cin >> ds[i].namSinh;
		cout << "Bien so xe: "; cin.ignore(); getline(cin, ds[i].bien);
		cout << "Luong: "; cin >> ds[i].luong;
		cout << endl;
	}
}

void hienDS(TaiXe ds[], int n){
	cout << "Hien danh sach" << endl;
	cout << left << setw(15) << "Ma tai xe"
		 << left << setw(25) << "Ho va ten"
		 << left << setw(10) << "Gioi tinh"
		 << left << setw(10) << "Nam sinh"
		 << left << setw(15) << "Bien so xe"
		 << left << setw(15) << "Luong" << endl;
	for(int i=0;i<n;i++){
		ds[i].hienTT();
	}
}

void ghiDSTX(TaiXe ds[], int n){
    ofstream fout("Taixe.txt",ios::out|ios::binary);
    for(int i=0;i<n; i++){
        fout.write(reinterpret_cast<char*>(&ds[i]), sizeof(ds[i]));
    }
    fout.close();
}

void docDSTX(TaiXe tx[], int n){
    ifstream fin("Taixe.txt",ios::in|ios::binary);
    TaiXe txe;
    fin.read(reinterpret_cast<char*>(&txe), sizeof(txe));
    int slg=0;
    while(!fin.eof()){
        tx[slg]=txe;
        slg++;
        fin.read(reinterpret_cast<char*>(&txe), sizeof(txe));
    }
    fin.close();
    hienDS(tx,slg);
}

void chinhLuong(TaiXe ds[], int n){
	string tim;
	cout << "Nhap ma tai xe: "; cin.ignore(); getline(cin, tim);
	for(int i=0;i<n;i++){
		if(ds[i].maTX.compare(tim)==0){
			int luongTT;
			cout << "Nhap luong thay the: "; cin >> luongTT;
			ds[i].luong=luongTT;
			cout << "Tai xe duoc chinh muc luong: " << endl;
			ds[i].hienTT();
			break;
		}
	}
	ghiDSTX(ds,n);
	cout << endl;
}

void sapXep(TaiXe ds[], int n){
	TaiXe x;
	string x1, x2;
	for(int i=0;i<n-1;i++){
		x1=ds[i].hoTen;
		for(int j=i+1;j<n;j++){
			x2=ds[j].hoTen;
			if(x1[0]>x2[0]){
				x=ds[i];
				ds[i]=ds[j];
				ds[j]=x;
			}
		}
	}
	ofstream fout("Taixesx.txt",ios::out|ios::binary);
    for(int i=0;i<n; i++){
        fout.write(reinterpret_cast<char*>(&ds[i]), sizeof(ds[i]));
    }
    fout.close();
    cout << "Danh sach sau khi sap xep: " << endl;
    hienDS(ds,n);
    cout << endl;
}

void txNu(TaiXe ds[], int n){
	ofstream fout("Taixenu.txt",ios::out|ios::binary);
	cout << "Danh sach tai xe nu: " << endl;
    for(int i=0;i<n; i++){
    	if(ds[i].gt=="nu" || ds[i].gt=="Nu"){
    		fout.write(reinterpret_cast<char*>(&ds[i]), sizeof(ds[i]));
    		ds[i].hienTT();
		}  
    }
    fout.close();
}

int main(){
	int n;
	cout << "Nhap n: "; cin >> n;
	TaiXe ds[50],tx[50];
	nhapDS(ds,n);
	
	ghiDSTX(ds,n);
	docDSTX(tx,n);
	
	chinhLuong(ds,n);
	
	sapXep(ds,n);
	
	txNu(ds,n);
}
