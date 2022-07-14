/*cho mảng n phần tử sắp xếp các số nguyên tố trong mảng theo thứ tự tăng dần .
 Số lớn thứ 2 là bao nhiêu .*/
 #include<iostream>
 using namespace std;
 void nhap_mang(int a[], int n)
{
    for(int i=0; i <n; i++)
    {
        cout << "nhap vao phan tu a["<<i<<"]=";
        cin >> a[i];
    }
}
void xuat_mang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< a[i]<< " ";
    }
}
bool kiem_tra_snt(int n)
{
    if(n<2)
    {
        return false;
    }
    if(n>2)
    {
        for(int i=2;i<n;i++)
        { if(n%i==0)
            {return false;}
        }
    }
    return true;
}
/*void sap_xep_snt_tang(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        if(kiem_tra_snt(a[i])==true)
        {
            for(int j=i+1; j<n;j++)
            {
                if(kiem_tra_snt(a[j])==true)
                {
                    if(a[i]>a[j])
                    {
                       int c=a[i];
                        a[i]=a[j];
                        a[j]=c;
                    }
                }
            }
        }
    }
}*/
void mang_chua_snt(int a[], int n)
{   for(int i=0; i<n; i++)
    {
        if(kiem_tra_snt(a[i])==true)
        {
            cout <<a[i]<< " ";
        }
    }
}
void sap_xep_mang_snt(int a[], int n)
{
        for(int i=0; i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(a[i]>a[j])
            {
                int c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
}
int main ()
{
    int a[100];
    int n;
    do{
    cout << "nhap n: \n"; cin >> n;
    if(n<=0)
    {
        cout<<"nhap lai theo yeu cau\n\n";
    }}
    while(n<=0);
    cout << "\n\t\t NHAP MANG\n";
    nhap_mang(a,n);
    cout << "\n\t\t XUAT MANG \n";
    xuat_mang(a,n);
    cout<<"\n\n\t\t MANG SNT\n";
    //sap_xep_snt_tang(a,n);
    mang_chua_snt(a,n);
    cout<<"\n\n\t\t MANG SAU KHI SAP XEP\n";
    sap_xep_mang_snt(a,n);
    {mang_chua_snt(a,n);
    cout << "so nguyen to lon thu 2 la: ";
    cout << a[n-2];}
    system("pause ");
    return 0;
}