#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void hoan_vi(char &a, char &b)
{
    char tam=a;
        a=b;
        b=tam;
}
void dao_nguoc (string s)
{
    //int dodai=s.length();
    for(int i=0; i<s.length()/2;i++)
    {
       hoan_vi(s[i], s[s.length()-i-1]);
    }
}
int main ()
{
    string s;
    cout << "Nhap chuoi: ";
    getline(cin,s);
    cout<< "\n Chuoi ban dau: "<< s;
    dao_nguoc(s);
    cout << " chuoi sau khi dao nguoc: "<< s;
    return 0;
}