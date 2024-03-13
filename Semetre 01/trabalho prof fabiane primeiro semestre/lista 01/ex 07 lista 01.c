#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float real, dolar, total;
printf("digite o valor em reais ");
scanf("%f", &real);
printf("digite a cotacao atual do dolar ");
scanf("%f", &dolar);
total = real/dolar;
printf("o valor de %0.2f em dolar vai ser igual a %0.2f",real,total);
}