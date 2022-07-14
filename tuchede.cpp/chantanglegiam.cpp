#include <iostream>
using namespace std;
void nhap_mang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "nhap phan tu a["<<i<<"]=";
        cin >> a[i];
    }
}
void xuat_mang( int a[], int n)
{
    for(int i=0; i<n ; i++)
    {
        cout << a[i]<< " ";
    }
}

void sap_xep(int a[], int n)
{
    for(int i=0; i< n; i++)
    {
        if(a[i]%2==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]%2==0)
                {
                    if(a[j]< a[i])
                    {
                        int c=a[i];
                        a[i]=a[j];
                        a[j]=c;
                    }
                }
            }
        }
    }
    for(int i=0; i< n; i++)
    {
        if(a[i]%2!=0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]%2!=0)
                {
                    if(a[j]> a[i])
                    {
                        int c=a[i];
                        a[i]=a[j];
                        a[j]=c;
                    }
                }
            }
        }
    }
}
int main()
{
    int a[100];
    int n;
    cin >> n;
    cout << "nhap mang \n";
    nhap_mang(a,n);
    cout << "xuat mang \n";
    xuat_mang(a,n);
    sap_xep(a,n);
    cout<< "sau khi sap xep lai\n";
    xuat_mang(a,n);
    system("pause");
    return 0;
}