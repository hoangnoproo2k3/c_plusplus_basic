// #include <iostream>
// #include <cstring>
// using namespace std;

// int main(){
//   char str[]= "Good School";
//   char chr = 'o';  

//   //Tính độ dài chuỗi ban đầu
//   int len = strlen(str);


//   //sử dụng vòng lặp for để tìm vị trí ký tự "o" trong chuỗi
//   for (int i=0; i < len; i++){
//       //so sánh ký tự có index i với "o"
//       if (str[i] == chr) cout << "Tim thay ky tu "<<chr<<" tai vi tri: "<<i <<endl;
//   }
//   return 0;
// }
#include <iostream>
using namespace std;
#include<string.h>

void NhapChuoi (char*S)
{
    flushall();
    cout<<"Nhap: ";
    gets(S);
}

void main()
{
    char S[100], X[100];
    NhapChuoi (S);
    cout<<"Nhap chu can bat dau tach: ";
    gets (X);
    char*x=strstr (S, X);
    cout<<x;
} 