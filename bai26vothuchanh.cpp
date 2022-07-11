#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1,smoi;
    cout<<"\n Chuoi can nhap: ";
    getline(cin,s);
    cout<<"\n Vi tri bat dau tach: ";
    cin>>s1;
    int vitri=s.find(s1);
    smoi=s.substr(vitri);
    cout <<"\n Chuoi sau khi tach: "<<smoi;
    return 0;
}
