#include<iostream>
using namespace std;
int main()
{   
    int n;
    do{
        cout <<"nhap n";
        cin>>n;
        if(n<0|| n>50)
        {
            cout << "n vuot qua gioi han cho phep!";
        }
    }while(n<0|| n>50);
    int dem=0;
    float s=0;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            s+=i;
            dem++;
        }
    }
    cout << "trung binh cong so chan la: "<<s/dem;
}
