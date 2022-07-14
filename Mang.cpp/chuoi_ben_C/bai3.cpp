/*Nhập vào chuỗi s1, sau đó sao chép chuỗi s1 sang cho chuỗi s2.*/
/* cách 1
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[30];
    fflush(stdin);
    printf("\n Nhap chuoi s1: ");
    gets(s1);
    printf("\n Chuoi s1 la:%s", s1);
    char s2[30];
    strcpy(s2,s1);
    printf("\n chuoi s2 sau khi da sao chep la:%s", s2);
    getch();
    return 0;
}*/
/* Cách 2:
#include<stdio.h>
#include<conio.h>
#include<string.h>
void sao_chep_ham(char s2[], char s1[])
{
    for(int i=0; i<strlen(s1); i++)
    {
        s2[i]=s1[i];
    }
    s2[strlen(s1)]='\0';
}
int main()
{
    char s1[30];
    char s2[30];
    fflush(stdin);
    printf("\n Nhap chuoi: ");
    gets(s1);
    printf("\n Hien chuoi s1:%s", s1);
    sao_chep_ham(s2,s1);
    printf("\n Hien chuoi s2 khi da sao chep:%s ", s2);
    getch();
    return 0;
} */
/* Cách 3: dùng STRDUP
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char *STRDUP(char s1[])
{
    char *s2=(char*)malloc(strlen(s1)+1);
    for(int i=0; i<strlen(s1);i++)
    {
        s2[i]=s1[i];
    }
    s2[strlen(s1)]='\0';
    return s2;
    free(s2);
}
int main()
{
    char s1[30];
    fflush(stdin);
    printf("\n Nhap chuoi s1:");
    gets(s1);
    printf("\n Chuoi s1 la:%s", s1);
    char *s2=STRDUP(s1);
    printf("\n Chuoi s2 sau khi sao chep:%s", s2);
    free(s2);
    return 0;
}*/
// Cách 4: dùng thẳng lệnh strdup
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[30];
    printf("\n Nhap chuoi: ");
    gets(s1);
    printf("\n Chuoi cua s1:%s", s1);
    char *s2=strdup(s1);
    printf("\n Chuoi cua s2 sau khi sao chep: %s", s2);
    return 0;
}