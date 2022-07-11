#include <iostream.h>
#include <string.h>
using namespace std;

int main(){
	char s[100];
	int n; //So phan tu cua chuoi
	int a[128]; //Mang luu so lan xuat hien cua tung ky tu (Trong C co 128 ky tu)
	int maxC=-1; //So lan xuat hien nhieu nhat
	int maxI=-1; //Vi tri cu ky tu co so lan xuat hien nhieu nhat
	char c;
	
	cout<<"Nhap chuoi: ";
	gets(s);
	n = strlen(s);
	//Khoi tao gia tri ban dau
	for (int i=0;i<128;i++){
		a[i]=0;
	}
	//Dem so lan xuat hien cua tung ky tu
	for(int i=0;i<n;i++){
		int index = int(s[i]); //Chuyen ky tu ve ma ASCII (Vi du: A -> 65)
		a[index]++;
	}	
	/*for(int i=0;i<128;i++){
		cout<<a[i]<<" ";
	}*/
	//Tim ky tu xuat hien nhieu nhat
	for(int i=0;i<128;i++){
		if(a[i]>maxC){
			maxC=a[i];
			maxI=i;
		}
	}
	c = char(maxI);
	cout<<"Ky tu xuat hien nhieu nhat: "<<c<<endl;
	cout<<"So lan xuat hien: "<<maxC<<endl;
	return 0;
}