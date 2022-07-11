#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int n=0;
int a[100];
void ghi_file()
{

    do
    {
        cout << "Nhap n: ";
        cin >> n;
    }
    while (n!=0);
    n++;
    ofstream fileout;
    fileout.open("mang.in",ios::out|ios::ate|ios::binary);
    fileout.write((char*)n,sizeof(int));
}
int main()
{
   ghi_file();
   return 0;
}
