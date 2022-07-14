// Tìm UCLN và BCNN của 2 số nguyên dương
//cách 1:
/* #include<iostream>
using  namespace std;
int UCLN(int a, int b)
{
    if(a>b)
    {
        for(int i=b; i>=1; i--)
        {
            if(a%i==0&& b%i==0)
            {
                return i;
            }
        }
    }
    else{
        for(int i=a;i=1; i--)
        {
           if(a%i==0&& b%i==0)
            {
                return i;
            }  
        }
    }
}
int BCNN(int a, int b)
{
    return (a*b)/UCLN(a,b);
}
int main ()
{
    int a;
    int b;
    cout<<"nhap vao 2 so a va b lan luot la: \n";
    cin >>a>>b;
    cout <<"\n UCLN="<< UCLN(a,b);
    cout << "\n BCNN="<< BCNN(a,b);
    system("pause");
    return 0;
} */
// cách 2
#include <iostream>
using namespace std;
int UCLN(int x, int y)
{
    // theo ơ-le
    while (x!=y)
    {
        if(x<y)
        {
            y=y-x;
        }
        else{
            x=x-y;
        }
    }
    return y;
}
int BCNN(int x, int y)
{
    return (x*y)/UCLN(x,y);
}
int main ()
{
    int a,b;
    cout<< "nhap a va b: \n";
    cin >>a>>b;
    cout << "\n UCLN="<<UCLN(a,b);
    cout <<"\n BCNN="<< BCNN(a,b);
    system("pause");
    return 0;
}