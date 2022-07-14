#include<iostream>
using namespace std;
void nhap_mang(float a[100][100], int &row, int &column)
{
    cout <<"Nhap vao so cot: ";
    cin>> row;
    cout << "\nNhap vao so hang: ";
    cin >> column;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"Nhap vao phan tu a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
}
void hien_mang(float a[100][100],int row, int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<< endl;
    }
}
//Nhập vị trí  [i,j], tính tổng hàng, cột đi qua vị trí này và đưa ra hàng hoặc cột có giá trị lớn hơn
float tong_hang(float a[100][100], int row, int column, int x)
{
    float s=0;
    for(int i=0;i<column;i++)
    {
        s+=a[x][i];
    }
    return s;
}
float tong_cot(float a[100][100], int row, int column, int y)
{
    float s=0;
    for(int i=0;i<row;i++)
    {
        s+=a[i][y];
    }
    return s;
}
float max(float a[100][100], int row, int column, int x, int y)
{
    if(tong_cot(a,row,column,y)>tong_hang(a,row,column,x))
    {
        return tong_cot(a,row,column,y);
    }
    else{
        return tong_hang(a,row,column,x);
    }
}
int main()
{
    float a[100][100];
    int row, column,x,y;
    nhap_mang(a,row,column);
    hien_mang(a,row,column);
    cout<<"Nhap vao i,j: ";
    cin>>x>>y;
    cout<<"Tong Hang: "<<tong_hang(a,row,column,x);
    cout<<"Tong Cot: "<<tong_cot(a,row,column,y);
    //cout<<"Max: "<<max(a,row,column,x,y);
    return 0;
}