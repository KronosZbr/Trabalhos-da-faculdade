#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float x,y,xx,yy;
float fx, fy, p;
printf("\n Digite x1: ");
scanf("%f", &x);
printf("\n Digite x2: ");
scanf("%f", &xx);
printf("\n Digite y1: ");
scanf("%f", &y);
printf("\n Digite y2: ");
scanf("%f", &yy);
fx = (pow(xx - x,2));
fy = (pow(yy - y,2));
p = sqrt(fx + fy);
printf("O resultado vai ser igual a : %0.2f ",p);
}