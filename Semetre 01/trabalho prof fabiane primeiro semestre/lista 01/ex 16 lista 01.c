#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float a,b,h;
printf("Digite a base do triangulo: ");
scanf("%f", &b);
printf("Digite a altura do triangulo: ");
scanf("%f", &h);
a = (b*h)/2;
printf("a base do retangulo vai ser igual a: %0.2f",a);        
}