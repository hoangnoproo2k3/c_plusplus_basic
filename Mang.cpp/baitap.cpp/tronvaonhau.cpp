// cho 2 dãy A,B có thứ tự tăng dần. trộn 2 dãy trên thành dãy C cũng có thứ tự tăng dần.
#include <iostream>
using namespace std;
void nhap_mang(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << " nhap a["<<i<<"]=";
        cin >> a[i];
    }
}
void xuat_mang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i]<<" ";
    }
}
void xu_li_mang(int a[], int b[], int c[], int n, int m, int &k)
{
    int i=0;
    int j=0;
     while ((i<n)&& (j<m))
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else 
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    // để không bị sót phần tử thì cần phải thêm vòng lặp quét hết mảng
    for(;i<n;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(;j<m;j++)
    {
        c[k]=b[j];
        k++;
    }
}
int main()
{
    int a[100];
    int b[100];
    int c[200];
    int n;
    int m;
    int k=0;
     do {
        cout << "nhap so phan tu ";
        cin >> n;
        if(n<=0&& n>100)
        {
            cout << "khong hop le";
        }
    } while(n<=0&& n>100);
    cout << " nhap mang A ";
    nhap_mang(a,n);
    do {
        cout << "nhap so phan tu ";
        cin >> m;
        if(m<=0&& m>100)
        {
            cout << "khong hop le";
        }
    } while(m<=0&& m>100);
    cout << " nhap mang B ";
    nhap_mang(b,m);
    xu_li_mang(a,b,c,n,m,k);
    cout<<"mang C";
    xuat_mang(c,k);
    return 0;

}