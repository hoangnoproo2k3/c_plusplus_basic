/* Viết chương trình nhập vào mảng hai chiều các số thực.
- In lại mảng 2 chiều các phần tử dưới dạng bảng
- In các phần tử tại hàng thứ k của mảng hai chiều (k>=0)
- Tính tổng các phần tử của cột thứ k của mảng hai chiều (k>=0)
- Thực hiện tìm kiếm phần tử có giá trị là x, cho biết vị trí tìm thấy đầu tiên 
của phần tử trong trường hợp tìm thấy
- Cho biết hàng nào có tổng các phần tử lớn nhất trong mảng hai chiều */
#include <iostream>
using namespace std;
#define max_dong 100
#define max_cot 100
void nhap(int a[][max_cot], int dong, int cot)
{
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            cout << "a["<<i<<"]["<<j<<"]=";
            cin >> a[i][j];
        }
    }
}
void xuat(int a[][max_cot], int dong, int cot)
{
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            cout << a[i][j]<<"  ";
        }
        cout << endl;
    }
}
void hien_dong_k(int a[][max_cot], int dong, int cot, int k)
{
     for(int i=0;i<dong;i++)
    {   
        for(int j=0;j<cot;j++)
        {
            cout << a[k][j]<<"  ";
        }
         break;
    }
}
int cot_thu_x(int a[][max_cot], int dong, int cot, int x)
{
    int tong=0;
     for(int i=0;i<dong;i++)
    {   
        for(int j=0;j<cot;j++)
        {    j=x;
            tong+= a[i][x];
        }
    }
    return tong;
}
void tim_kiem(int a[][max_cot], int dong, int cot, int b)
{
    for(int i=0;i<dong;i++)
    {   
        for(int j=0;j<cot;j++)
        {   
            if(a[i][j]==b)
            {
                cout << "a["<<i<<"]["<<j<<"]";
                break;
            }
        }
    }
}
int _max_hang(int a[][max_cot], int dong, int cot)
{   int max=a[0][cot];
    for(int i=0;i<dong;i++)
    {   int tong=0;
        for(int j=0;j<cot;j++)
        {
            tong+=a[i][j];
        }
        if(max<tong)
        {
             max=tong;
        }
    }
    return max;
}
int main ()
{
    int a[max_dong][max_cot];
    int n,m;
    cout << "\nnhap dong: ";
    cin >>n;
    cout << "\n nhap cot: ";
    cin >>m;
    nhap(a,n,m);
    cout << "\nXUAT MANG:\n ";
    xuat(a,n,m);
    /*int k;
    cout << "\n nhap hang thu k=";
    cin >>k;
    hien_dong_k(a,n,m,k);
    int x;
    cout <<"\n nhap cot thu x=";
    cin >>x;
    cout << "tong: "<< cot_thu_x(a,n,m,x);
    int b;
    cout << "gia tri a: ";
    cin >>b;
    tim_kiem(a,n,m,b);*/
    cout << "tong max: "<< _max_hang(a,n,m);
    return 0;

}