#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float area,aresta;
printf("Digite a aresta do tetraedro: ");
scanf("%f", &aresta);
area = (sqrt(3))*pow(aresta,2);
printf("a area do tetraedro vai ser igual a: %0.2f",area);
    
}