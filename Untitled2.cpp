
#include <stdio.h>
int main(){
float  bk, PI, cv, dt;
PI = 3.14;
printf("nhap ban kinh la: ");
scanf("%f", &bk);
cv = 2 * PI * bk;
dt = bk * bk * PI;
printf("Chu vi: %f \n", cv);
printf("Dien tich: %f", dt);
}
