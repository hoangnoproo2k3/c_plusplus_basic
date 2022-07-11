#include<iostream>
using namespace std;
// hàm nh?p m?ng 2 chi?u
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
            cout << "a["<<i<<"]["<<j<<"]=";
            cin >> a[i][j];
        }
    }
}
void hien_mang(float a[100][100], int row, int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout << a[i][j]<<"   ";
        }
        cout<< endl;
    }
}
// Thay th? các ph?n t? trùng nhau thành trung bình c?ng c?a ph?n t? dó v?i ph?n t? d?i x?ng nó
void thaythe(float a[100][100],int row, int column)
{
 for (int i=0; i<row; i++)
 {
    for (int j=0; j<column-1; j++)
    {
        int dem = 0;
        for ( int k=j+1; k<column; k++)
        {
            if ( a[i][j] == a[i][k] )
                {
                    a[i][k] = ( a[i][k] + a[k][i] ) /2;
                    dem ++;
                }
            if (( k == column-1) && (dem>0) )
                   a[i][j] = ( a[i][j] + a[j][i] ) / 2;
        }
    }
 }
}
int trung_binh_cong_duong_cheo_chinh(float a[100][100], int row, int column)
{
    row=column;
    float tong=0;
    int m=0;
    for(int i=0; i<row;i++)
    {
        tong+=a[i][i];
        m++;
    }
    cout << "\n\tTRUNG BINH CONG DUONG CHEO CHINH: "<< tong/m;
}
// hàm tính t?ng các c?t
int tong_cac_cot(float a[100][100], int row, int column)
{
    float sum=0, max;
    int x;
    for(int i=0; i<row;i++)
    {
       sum+=a[i][0];
    }
    max=sum;
	for(int i=0; i< column;i++)
    {
        sum=0;
	    for(int j=0;j<row;j++)
	      {
	        sum +=a[j][i];
            if ( (j == row-1) && (max<sum) )
            {
                max = sum;
                x=j;
            }
	      }	       
    } 
    return x;
}
int main()
{
    float a[100][100];
    int row;
    int column;
    cout << "\n\t\t=====NHAP MANG 2 CHIEU=====\n";
    nhap_mang(a,row,column);
    cout<< "\n\t\t=====HIEN THI MANG 2 CHIEU=====\n";
    hien_mang(a,row,column);
    cout << "\n\t\t===== MANG SAU KHI THAY THE TRUNG NHAU=====\n";
    thaythe(a,row,column);
    hien_mang(a,row,column);
    cout<< trung_binh_cong_duong_cheo_chinh(a,row,column);
    cout <<"\n\tCOT CO TONG CAC PHAN TU LON NHAT TRONG MA TRAN: " << tong_cac_cot(a,row,column);
    return 0;
}
