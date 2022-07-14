/*Nhap vao va xuat ra man hinh nam sinh va ho ten cua sinh vien*/
#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char hoten[30];
    int namsinh;
    printf("\n nhap nam sinh: ");
    scanf("%d", &namsinh);
    fflush(stdin); // bên C++ thì: cin.ignore(); 
    printf("\n nhap ho ten sinh vien: ");
    gets(hoten);
    printf ("ho ten sinh vien la: %s", hoten);
    printf("\n sinh nam:%d ", namsinh);
    getch();
    return 0;
}