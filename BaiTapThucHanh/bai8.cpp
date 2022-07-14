#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout << "nhap canh a="<<endl;
    cout << "nhap canh b="<<endl;
    cout << "nhap canh c="<<endl;
    cin >>a>>b>>c;
    if (a+b<=c||a+c<=c||b+c<=a)
    cout << "khong tao tam giac"<<endl;
    else 
    cout << "tao ra tam giac"<<endl;
    {if (a==b==c)
    cout <<"tam giac deu";
    else if(a==b||a==c||b==c)
    cout << "tam giac can";
    else if (a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    cout << "tam giac vuong";
    else 
    cout << "tam giac thuong";
    return 0;
    }
}