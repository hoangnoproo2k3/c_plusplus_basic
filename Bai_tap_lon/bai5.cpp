#include<iostream>
#include<string>
using namespace std;
void in_sang_chu_hoa(string s)
{
    for(int i=0;i< s.length();i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            s[i]-=32;
        }
    }
    cout<<"Chuoi sau khi duoc in hoa: "<< s<<" ";
}
int main ()
{
    string s;
    cout <<"Nhap chuoi: ";
    getline(cin, s);
    cout <<"chuoi sau khi nhap la: "<<s<<endl;
    in_sang_chu_hoa(s);
    system("pause");
    return 0;
}
// Chuyển từ 1 chuỗi bất kì sang chuỗi in hoa