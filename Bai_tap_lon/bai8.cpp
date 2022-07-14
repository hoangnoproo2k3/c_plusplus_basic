#include<iostream>
using namespace std;
// hàm nhập mảng 2 chiều
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
            cout << a[i][j]<<"  ";
        }
        cout<< endl;
    }
}
// Thay thế các phần tử trùng nhau thành trung bình cộng của phần tử đó với phần tử đối xứng nó
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
     /* biến dem để lưa kết quả đã tìm ra 2 số bằng nhau trong vòng lặp k 
và để kiểm tra xem k đã đến cuối dãy hay chưa, nếu đến rồi thì 
thay a[i][j] = TB */

            if ( ( k == column-1)&& (dem>0) )
                   a[i][j] = ( a[i][j] + a[j][i] ) / 2;
        }
    }
 }
}
float trung_binh_cong_duong_cheo_chinh(float a[100][100], int row, int column)
{
    row=column;
    int n=row;
    float tong=0;
    for(int i=0; i<row;i++)
    {
        tong+=a[i][i];
    }
    cout << "\n\tTRUNG BINH CONG DUONG CHEO CHINH: "<< tong/n;
}
// hàm tìm cột có tổng các phần tử lớn nhất
int cot_co_tong_max(float a[100][100], int row, int column)
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
    cout <<"\n\tCOT CO TONG CAC PHAN TU LON NHAT TRONG MA TRAN: " <<cot_co_tong_max(a,row,column);
    return 0;
}