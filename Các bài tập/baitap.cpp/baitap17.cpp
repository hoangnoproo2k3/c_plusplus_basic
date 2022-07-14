/*Hãy viết chương trình nhập vào một dãy số đến khi gặp 
số 0 thì dừng, sau đó tách các số chẵn và số lẻ ra 02 mảng khác nhau. Tính trung bình 
cộng các số chẵn dương và trung bình cộng các số lẻ âm.*/
#include<iostream>
using namespace std;
	void nhap(int a[], int n)
	{
		for(int i=0; i<n;i++)
		{
			cout << "nhap a["<<i<<"]=";
			cin >> a[i];
			if(a[i]==0)
			{ break;}
        }
    }
	void hien_mang_chan(int a[], int n)
	{	int tong=0;
	int dem=0;
		for(int i=0; i<n; i++)
		{ 
		    if(a[i]>0&&a[i]%2==0)
		    {
                cout << a[i]<< " ";
                tong+=a[i];
			    dem++;
            }
		}
		cout << "\ntrung binh cong so chan la:"<< tong/dem;
    }
	void hien_mang_le(int a[], int n)
		{  
            int tong=0;
		    int dem=0;
		    for(int i=0;i<n;i++)
		    {   
                if(a[i]<0&& a[i]%2!=0)
                {
                    cout << a[i]<< " ";
                    tong +=a[i];
                    dem++;
                }
        }
        cout << "\ntrung binh cong so le la:"<< tong/dem;
	}
	int main ()
	{
		int a[100];
		int n;
		cin >> n;
		cout << "nhap mang\n";
		nhap(a,n);
        cout << "\nhien: \n";
        hien_mang_chan(a,n);
        cout << "\n hien: \n";
        hien_mang_le(a,n);
        system("pause");
        return 0;}