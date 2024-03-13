#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float celsius, fah;
printf("digite a temperatura em celsius ");
scanf("%f", &celsius);
fah = ((9*celsius)+160)/5;
printf("a temperatura de %0.2f grau(s) celsius em fahrenheit vai ser igual a %0.2f",celsius,fah);

}