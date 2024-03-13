#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float vcarro,dist,imposto,tsimp;
float pdist, pimp;
printf("Digite o valor do carro com imposto: ");
scanf("%f",&vcarro);
printf("\n Digite a porcentagem que a distribuidora ganha: ");
scanf("%f",&dist);
printf("\n Digite a porcentagem de impostos: ");
scanf("%f",&imposto);
pdist = (vcarro*dist)/100;
pimp = (vcarro*imposto)/100;
tsimp = vcarro - (pdist + pimp);
printf("\n o valor do carro de %0.2f sem impostos vai ser igual a: %0.2f",vcarro,tsimp);
}