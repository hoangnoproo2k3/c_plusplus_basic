/*Viết Hàm đảo ngược của 1 chuỗi*/
/* Cách 1: dùng hàm strrev
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[30];
    printf("\n Nhap chuoi: ");
    gets(s);
    printf("\n Chuoi s la:%s", s);
    strrev(s);
    printf("\n Chuoi sau khi dao nguoc:%s",s);
    getch();
    return 0;
}
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
// Hàm hoán vị
void hoan_vi(char &a, char &b)
{
    char tam=a;
        a=b;
        b=tam;
}
// xây dựng hàm đảo ngược
void STRREV(char s[])
{
    for(int i=0;i<strlen(s)/2;i++)
    {
        hoan_vi(s[i], s[strlen(s)-i-1]);
    }
}
int main()
{
    char s[30];
    printf("\n Nhap chuoi: ");
    gets(s);
    printf("\n Chuoi s la:%s", s);
    STRREV(s);
    printf("\n Chuoi s sau khi dao nguoc:%s", s);
    getch();
    return 0;
}