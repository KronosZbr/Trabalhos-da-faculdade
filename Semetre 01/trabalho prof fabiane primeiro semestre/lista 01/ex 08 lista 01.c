#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float imc, peso,altura;
    printf("\n digite o seu peso em kilos: ");
    scanf("%f", &peso);
     printf("\n digite o sua altura em centimetros: ");
    scanf("%f", &altura);
    imc = peso / (pow (altura,2));
    printf("\n o seu IMC vai ser igual a: %0.2f", imc);
}