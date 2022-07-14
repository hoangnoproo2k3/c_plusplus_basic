/*nhập họ tên của mình và tính độ dài của chuỗi*/
/* cách 1
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
    char hoten[30];
    fflush(stdin);
    printf("\n nhap ho ten: ");
    gets(hoten);
    printf("\n do dai cua chuoi la: %d",strlen(hoten));
    getch();
    return 0;
} */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int tong_do_dai_chuoi(char s[])
{
    /*int i=0;
    while (true)
    {
     if(s[i]=='\0')
     {
         return i;
     }
     i++;
    }
    return 0;*/
    for(int i=0; ;i++)
    {
        if(s[i]=='\0')
        {
            return i;
        }
    }
}
int main ()
{   char hoten[30];

fflush(stdin);
printf("\n nhap vao ho ten: ");
gets(hoten);
printf("\n do dai cua chuoi tren la:%d", tong_do_dai_chuoi(hoten));
getch();
return 0;}

    