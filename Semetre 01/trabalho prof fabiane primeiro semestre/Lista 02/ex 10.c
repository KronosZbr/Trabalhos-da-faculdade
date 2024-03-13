#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float t, imp1, imp2, imp3;
    printf("Coloque o salario do funcionario: ");
    scanf("%f", &t);
    if (t <= 600)
    {
        printf("\n seu salario de %02.f nao tem imposto", t);
    }
    else if (t > 600 && t <= 1200)
    {
        imp1 = ((t- (t * 20) / 100) );
        printf("\n seu salario de %02.f com imposto vai ser de %0.2f", t, imp1);
    }
    else if (t > 1200 && t <= 2000)
    {
        imp2 = ((t -(t * 25) / 100));
        printf("\n seu salario de %02.f com imposto vai ser de %0.2f", t, imp2);
    }
    else if (t > 2000)
    {
        imp3 = ((t-(t * 30) / 100));
        printf("\n seu salario de %02.f com imposto vai ser de %0.2f", t, imp3);
    }
}
