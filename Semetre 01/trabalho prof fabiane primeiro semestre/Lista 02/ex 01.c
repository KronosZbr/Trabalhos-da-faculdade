#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float n1, r;
    printf("Digite o numero: ");
    scanf("%f", &n1);
    if (n1 > 0)
    {
        r = n1 * 3;
        printf("\n o triplo do numero postivo vai ser igual a: %0.2f", r);
    }
    else if (n1 < 0)
    {
        r = pow(n1, 2);
        printf("\n o dobro do numero negativo vai ser igual a: %0.2f", r);
    }
    else if ((n1 == 0))
    {
        printf("\n o numero zero e neutro");
    }
}