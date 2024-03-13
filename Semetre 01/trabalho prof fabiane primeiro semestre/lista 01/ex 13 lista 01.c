#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float n1,n2,n3;
float r,s,d;
printf("Digite o valor de A: ");
scanf("%f", &n1);
printf("\n Digite o valor de B: ");
scanf("%f", &n2);
printf("\n Digite o valor de C: ");
scanf("%f", &n3);
r = pow((n1+n2),2);
s = pow((n2+n3),2);
d = (r+s)/2;
printf("O valor de D vai ser igual a: %0.2f",d);

  
}