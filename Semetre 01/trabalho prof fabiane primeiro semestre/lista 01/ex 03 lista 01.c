#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float dist, comb, constumoT;
printf("digite a distancia percorrida: ");
scanf("%f", &dist);
printf("\n Digite o total de combustivel gasto: ");
scanf("%f", &comb);
constumoT = dist/comb;
printf("\n a distancia percorrida foi de : %0.2f KM", dist);
printf("\n o combustivel gasto foi de %0.2f L", comb);
printf("\n o consumo medio do veiculo foi de: %0.2f L", constumoT);

}