#include<iostream>
using namespace std;
#include<limits.h>
#define bool
// hàm nh?p m?ng 2 chi?u
void nhap_mang(float a[100][100], int &row, int &column)
{
    cout <<"Nhap vao so hang: ";
    cin>> row;
    cout << "\nNhap vao so cot: ";
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
// hàm tìm hàng có nhi?u ph?n t? âm nh?t 
void tim(float a[100][100], int row, int column)
{
    
    int b[100], max=INT_MIN , kt, am;
     int vitri=0;
    bool kt=false;
    
    for(int i=0;i<row;i++)
    {
        int dem=0;
        for(int j=0;j<column; j++)
        {
            am=1;
            if(a[i][j]<0)
            {
                am=1;
            }
            else{
                am=0;
            }
            if(am==1)
            {
                dem++;
                b[i]=dem;
                kt=true;
            }
        }        
    }
    if(kt==true)
    {
        for(int i=0;i<row;i++)
        {
            cout<<"\n so luong cac phan tu am dong: " <<i<<" la "<< b[i] <<" ";
        }
    }
    else{
        cout<<"\n Khong chua so am";
    }
    if(kt==true)
    {
        for(int i=0;i<row;i++)
		{
			if(b[i]>max)
			{
				max=b[i];
			}
		}
        cout<< "\nCac dong chua nhieu so am nhat la: ";
		for(int i=0;i<row;i++)
		{
			if(b[i]==max)
			{
				vitri=i;
				cout<<i<<" ";
			}
		}
    }
    
}
// hàm có nhi?u nh?t
// float tim_max_dau_tien(float a[100][100], int row, int column)
// {
//     int max=(a,0,column);
//     int x;
//     for(int i=0;i<row;i++)
//     {
//         if(max<tim(a,i,column))
//         {
//             max=tim(a,i,column);
            
//         }
//     }
//     return max;
// }
// void LietKe(float a[100][100],int row,int column)
// {
//     int x=tim_max_dau_tien(a,row,column);
//     int i,j,flag;
    
//     for ( i=0;i<row;i++)
//         {
//             for ( flag =0, j=0; j<column;j++)
//             {
//                 if (a[i][j]==a[x][j])
//                 {
//                     flag=1;
//                     break;
//                 }
//             }
            
//         }
//         if (flag == 1)
//             {
//                 cout<<"Dong chua nhieu nhat: "<<i;
//             }
// }
int main()
{
    float a[100][100];
    int row;
    int column;
    cout << "\n\t\t=====NHAP MANG 2 CHIEU=====\n";
    nhap_mang(a,row,column);
    cout<< "\n\t\t=====HIEN THI MANG 2 CHIEU=====\n";
    hien_mang(a,row,column);
    tim(a,row,column);
    //tim_max(a,row,column);
   // LietKe(a,row,column);
//    cout<<"hang thu: ";
//    tim_max(a,row,column);

    return 0;}