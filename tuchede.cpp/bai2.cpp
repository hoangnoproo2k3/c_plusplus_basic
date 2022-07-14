// có 1 số nguyên dương. viết chương trình tính giai thừa 3 số đó
#include<iostream>
using namespace std;
int giai_thua(int n)
{
    int gt=1;
    for(int i=2; i<=n; i++)
    {
        gt*=i;
    }
    cout << gt;
    }
int main()
{
    int n;
    do{
    cout << "nhap n: \n"; cin >> n;
    if(n<=0)
    {
        cout<<"nhap lai theo yeu cau\n\n";
    }}
    while(n<=0);
    cout << "giai thua cua n la: ";
     giai_thua(n);
    return 0;
}