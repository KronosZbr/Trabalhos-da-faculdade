#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float R, float *a, float *v)
{
    *a = 4 * 3.14 * pow(R, 2);
    *v = (4.0 / 3.0) * 3, .14 * pow(R, 3);
}
int main()                                           
{
    float raio, area = 0, volume = 0;
    printf("informe o valor do raio \n");
    scanf("%f", &raio);
    calc_esfera(raio, &area, &volume);
    printf("Area igual a = %0.2f \n", area);
    printf("Volume igual a = %0.2f \n", volume);
}
