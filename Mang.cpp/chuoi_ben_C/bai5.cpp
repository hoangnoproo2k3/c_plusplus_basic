/*Nhập chuỗi từ bàn phím. chuyển chuỗi đó về chữ in thường*/
/*Cách 1: dùng hàm strlwr
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{   char s[30];
    printf("\n Nhap chuoi: ");
    gets(s);
    printf("\n Chuoi s la:%s", s);
    strlwr(s);
    printf("\n Chuoi s sau khi da in thuong thuong:%s", s);
    getch();
    return 0;
} */
// Cách 2: Không dùng hàm strlwr
#include<stdio.h>
#include<conio.h>
#include<string.h>
void STRLWR(char s[])
{
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
}
int main()
{
    char s[30];
    printf("\n nhap chuoi s: ");
    fflush(stdin);
    gets(s);
    printf("\n chuoi s la:%s", s);
    STRLWR(s);
    printf("\n chuoi s sau khi viet thuong:%s", s);
    getch();
    return 0;
}