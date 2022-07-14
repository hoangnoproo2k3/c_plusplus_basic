/* Trong toán học, các số nguyên a và b (hai số khác 0),
được gọi là nguyên tố cùng nhau [2] nếu ước số chung lớn nhất là 1. Ví dụ, 2 và 13
là nguyên tố cùng nhau vì ước số chung lớn nhất của chúng là 1.
Hãy viết chương trình con xác định 02 số (a, b) (được nhập từ bàn phím) có phải
là số nguyên cùng nhau hay không? Sau đó viết chương trình để thực hiện việc nhập
các số, kiểm tra và đưa ra thông báo tương ứng (có phải là số nguyên tố cùng nhau
hoặc không).*/
#include<iostream>
using namespace std;
bool ucln(int a, int b)
{
    if(a>b)
    {
        for(int i=a;i>=1;i--)
        {
            if(a%i==0&&b%i==0)
            {
                if(i==1)
                {
                    return true;
                }
                
            }
        }
    }
    else
    {
        for(int i=b;i>=1;i--)
        {
            if(a%i==0&&b%i==0)
            {
                if(i==1)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
void xu_li(int a, int b)
{
    if(ucln(a,b)==true)
    {
        cout << "nguyen to cung nhau";
    }
    else{
        cout << "khong la nguyen to cung nhau";
    }
}
int main ()
{
    int a, b;
    cout << "nhap a: "; cin >> a;
    cout << "nhap b: "; cin >> b;
    xu_li(a,b);
    return 0;
}