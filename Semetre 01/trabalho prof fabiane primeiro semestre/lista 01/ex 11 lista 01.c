#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float n1,n2,n3, mediap;
float p1,p2,p3,pd;
printf("Digite o valor da nota 01 com peso 01: ");
scanf("%f", &n1);
printf("\n Digite o valor da nota 02 com peso 02: ");
scanf("%f", &n2);
printf("\n Digite o valor da nota 03 com peso 03: ");
scanf("%f", &n3);
p1 = 2;
p2 = 3;
p3 = 5;
pd = p1+p2+p3;
mediap = ((n1*p1) + (n2*p2) + (n3*p3))/pd;
printf("o valor da media final ponderada vai ser de: %0.2f",mediap);
    
}