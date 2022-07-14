/* Viết chương trình nhập vào một chuỗi ký tự. Yêu cầu:
- Cho biết các vị trí xuất hiện của ký tự x trong chuỗi ký tự vừa nhập. Với ký tự
x được nhập từ bàn phím
- Thay thế ký tự x trong chuỗi bằng ký tự y. Với ký tự x, y được nhập từ bàn
phím */
#include<iostream>
using namespace std;
#include<string>
int main (){
string s;
char x;
fflush(stdin);
cout << "Nhap vao chuoi: ";
getline(cin,s);
cout << "nhap ki tu x: ";
cin >> x;
int n=s.length();
    for (int i=0; i < n; i++)
    {
        if (s[i] == x)
        {
            cout << x<<" tai vi tri: "<<i <<endl;
        }
    }
char y;
cin >> y;
    for(int i=0;i<n;i++)
    {
        if(s[i]==x)
        {
            s[i]=y;
        }
    }
cout << s;
return 0;
}