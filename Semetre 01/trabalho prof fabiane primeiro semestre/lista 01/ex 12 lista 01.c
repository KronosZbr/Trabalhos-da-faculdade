#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float n1, n2,n3,media;
printf("Digite o valor da nota 01: ");
scanf("%f", &n1);
printf("\n Digite o valor da nota 02: ");
scanf("%f", &n2);
printf("\n Digite o valor da nota 03: ");
scanf("%f", &n3);
media = (n1+n2+n3)/3;
printf("A media das 03 notas vai ser igual a: %0.2f",media);
    
}