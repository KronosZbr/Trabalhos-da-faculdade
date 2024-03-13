#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float area, r,pi;
printf("digite o raio do circulo ");
scanf("%f", &r);
pi = 3.14;
area = pi* (pow(r,2));
printf("\n a area do circulo vai der %0.2f m2",area);

}