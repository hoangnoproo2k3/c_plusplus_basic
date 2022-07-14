#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    float a;
    float b;
    float x;
    //cin.ignore();
    cout <<"Nhap vao ten don hang: "; getline(cin,s);
    cout << "So luong don hang: "; cin >> a;
    cout <<"Don gia la: "; cin >> b;
    cout <<" ten don hang: "<< s<< endl;
    cout << "so luong: "<< a<< endl;
    cout << "don gia: "<<b<<endl;
    x=a*b;
    cout <<"tinh thanh tien la: "<< x<< endl;
    cout << "Thue VAT la: "<< x*0.1<< endl;
    system("pause");
    return 0;
}