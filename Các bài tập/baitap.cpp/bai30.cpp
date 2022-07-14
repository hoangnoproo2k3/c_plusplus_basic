#include<iostream>
using namespace std;
bool kiem_tra_snt(int n)
{
    if(n<2)
    {
        return false;
    }
    else
    {
        if(n==2)
        {
            return true;
        }
        else
        {
            for(int i=2;i<n;i++)
            {
                if(n%i==0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main ()
{
    int n;
    int tong=0;
    cout << "nhap n: ";
    cin >> n;
    for(int i=1;i<n;i++)
    {
        if(kiem_tra_snt(i)==true)
        {
            tong+=i;
        }
    }
    cout << tong;
}