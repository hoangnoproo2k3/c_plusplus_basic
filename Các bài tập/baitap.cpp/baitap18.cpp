/*Nhập vào từ bàn phím dãy số gồm n số nguyên (n>0) 
và thực hiện các yêu cầu sau đây
a. Hiển thị dãy số ra màn hình
b. Nhập vào từ bàn phím số nguyên x. Hãy cho biết x xuất hiện trong dãy số 
bao nhiêu lần và các vị trí xuất hiện của x
c. Xoá các số có giá trị bằng 0 có trong dãy
d. Sắp xếp các số nguyên tố về đầu dãy, các số không phải là số nguyên tố về 
cuối dãy
e. Tính trung bình cộng các số chia hết cho 3 có trong dãy */
#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << "a["<<i<<"]=";
        cin >> a[i];
    }
}
void hien(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout << a[i]<< " ";
    }
}
int dem(int a[], int n ,int x)
{   
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            ++dem;
        }
        //i--;
    }
    return dem;
}
void xoa(int a[], int &n, int vt)
{
    for(int i=vt+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    n--;
}
void xoa_0(int a[], int &n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            xoa(a,n,i);
            i--;
        }
        //i--;
    }
}  
bool kiem_tra_snt(int n)
{
    if(n<2)
    {return false;}
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
void sap_xep(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if((kiem_tra_snt(a[i])==false)&&(kiem_tra_snt(a[j])==true))
            {
                swap(a[i], a[j]);
            }
        }
    }
}
int trung_binh_cong_so_chia_het_3(int a[],int n)
{   float dem=0;
    float tong=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {
            tong+=a[i];
            dem++;
        }
    }
    return tong/dem;
}
int main()
{
    int a[100];
    int n;
    cin >> n;
    cout << "NHAP MANG\n";
    nhap(a,n);
    cout << "XUAT MANG\n";
    hien(a,n);
    int x;
    /*cout << "nhap x:";
    cin >> x;
    cout << "SO LAN XUAT HIEN: \n"<< dem(a,n,x);
    xoa_0(a,n);
    cout<< "MANG SAU KHI XOA 0: \n";
    hien(a,n);*/
    
    cout << "\n MANG SAU KHI SAP XEP: ";
    sap_xep(a,n);
    hien(a,n);
    //cout << " TRUNG BINH CONG :"<< trung_binh_cong_so_chia_het_3(a,n);
    //system("pause");
    return 0;
}



