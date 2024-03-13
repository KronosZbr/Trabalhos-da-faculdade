#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float j,p,i,n;
printf("Digite o capital inicial a ser financiado: ");
scanf("%f",&p);
printf("Digite a taxa de juros: ");
scanf("%f", &i);
printf("Digite a quantidade de meses: ");
scanf("%f", &n);
j = p*i*n;
printf("O valor dos juros vai ser igual a: %0.2f",j);

}