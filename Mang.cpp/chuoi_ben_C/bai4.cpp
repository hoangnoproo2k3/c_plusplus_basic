/* Nhập vào 1 chuỗi. Xóa hoặc thêm vị trí bất kì trong chuỗi*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void xoa(char s[], int vt)
{
    int n=strlen(s);
    for(int i=vt+1;i<strlen(s);i++)
    {
        s[i-1]=s[i];
    }
    s[strlen(s)-1]='\0';//s[n-1]='\0'
}
void them(char s[], int vt, int x)
{
    int n=strlen(s);
    for(int i=n-1; i>=vt;i--)
    {
        s[i+1]=s[i];
    }
    s[vt]=x;
    s[strlen(s)+1]='\0';
}
int main()
{
    char s1[30];
    printf("\n Nhap chuoi s1: ");
    gets(s1);
    printf("\n Chuoi s1:%s",s1);
    xoa(s1,6);
    printf("\n chuoi sau khi xoa:%s",s1);
    them(s1, 4, 'a');
    printf("\n chuoi sau khi them:%s", s1);
    getch();
    return 0;
}