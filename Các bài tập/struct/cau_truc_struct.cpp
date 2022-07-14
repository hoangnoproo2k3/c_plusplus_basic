/*Nhập vào tọa độ 3 đỉnh của tam giác. tính độ dài các cạnh.*/
#include<iostream>
using namespace std;
#include<cmath>
struct toado
{
    float x;
    float y;
};
typedef toado TOADO;
void nhap_toa_do(TOADO &td)
{
    cout << "nhap x:";
    cin >> td.x;
    cout << "nhap y:";
    cin >> td.y;
}
void xuat_toa_do(TOADO td)
{
    cout << "("<<td.x<<","<<td.y<<")=";
}
struct tamgiac
{
    TOADO a;
    TOADO b;
    TOADO c;
};
typedef struct tamgiac TAMGIAC;
void nhap_toa_do_tam_giac(TAMGIAC &tg)
{
    cout << "nhap A:";
    nhap_toa_do(tg.a);
    cout << "nhap B: ";
    nhap_toa_do(tg.b);
    cout << "nhap toa do C:";
    nhap_toa_do(tg.c);
}
void xuat_toa_do_tam_giac(TAMGIAC tg)
{
    cout << "diem A: \n";
    xuat_toa_do(tg.a);
    cout<< "diem B: \n";
    xuat_toa_do(tg.b);
    cout << "diem C: \n";
    xuat_toa_do(tg.c);
}
float tinh_do_dai_canh(TOADO a, TOADO b)
{
    return sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
}
int main ()
{
    TAMGIAC tg;
    /*TOADO a;
    TOADO b;
    TOADO c;
    cout << "nhap A:";
    nhap_toa_do(a);
    cout << "nhap B: ";
    nhap_toa_do(b);
    cout << "nhap toa do C:";
    nhap_toa_do(c);
    cout << "diem A: \n";
    xuat_toa_do(a);
    cout<< "diem B: \n";
    xuat_toa_do(b);
    cout << "diem C: \n";
    xuat_toa_do(c);
    cout << "AB="<<tinh_do_dai_canh(a,b);
    cout << "BC="<< tinh_do_dai_canh(b,c);
    cout << "AC="<< tinh_do_dai_canh(a,c);*/
    nhap_toa_do_tam_giac(tg);
    xuat_toa_do_tam_giac(tg);
    cout << "AB="<<tinh_do_dai_canh(tg.a,tg.b);
    cout << "BC="<< tinh_do_dai_canh(tg.b,tg.c);
    cout << "AC="<< tinh_do_dai_canh(tg.a,tg.c);
    system("pause");
    return 0;
}