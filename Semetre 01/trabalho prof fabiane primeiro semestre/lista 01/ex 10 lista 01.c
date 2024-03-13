#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float area,bm,bmn,h;
printf("Digite a base maior do trapezio: ");
scanf("%f", &bm);
printf("Digite a base menor do trapezio: ");
scanf("%f", &bmn);
printf("Digite a altura do trapezio: ");
scanf("%f", &h);
area = ((bm+bmn)/2)*h;
printf("a area do trapezio vai ser igual a: %0.2f",area);


    
}