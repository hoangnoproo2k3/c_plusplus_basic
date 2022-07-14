// cho 1 số nguyên được nhập từ bàn phím. yêu cầu xem có phải số siêu nguyên tố không?
#include <iostream>
using namespace std;
bool kiem_tra_so_nguyen_to(int n)
{
    if(n<2)
    {
        return false;
    }
    if(n>2)
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
bool kiem_tra_so_snt(int n)
{
    while (n!=0)
    {
        if(kiem_tra_so_nguyen_to(n)==false)
        {
            return false;
        }
        n/=10;
    }
    return true;
}
int main(){
    int n;
    cout<< " nhap n ";
    cin >>n;
    if(kiem_tra_so_snt(n)==true)
    {
        cout << n<< " la so sieu nguyen to  ";}
        else {         
            cout <<n <<" khong la so sieu nto  ";
        }
        return 0;}