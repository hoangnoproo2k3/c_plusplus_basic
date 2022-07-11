#include <iostream>
using namespace std;
int main ()
{ 
string masv,hoten,ngaysinh,lop,sobuoianbantru;
  cout << "\n Ma sinh vien: "<<endl;
  getline (cin,masv);
  cout << " Ho ten la: "<< endl;
  getline (cin,hoten);
  cout << " Ngay sinh: "<< endl;
  getline (cin,ngaysinh);
  cout<< "Lop: "<<endl;
  getline(cin,lop);
  cout<<"so buoi an ban tru: "<<endl;
  getline(cin,sobuoianbantru);
  cout << "Sinh vien"<< masv<<"\t"<<hoten<<"\t"<<ngaysinh<<"\t"<<lop<<"\t"<< sobuoianbantru <<" ";
  return 0;
  }
