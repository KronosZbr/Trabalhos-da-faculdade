#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float salario, a1, a2, a3,a4;
    float p1, p2, p3, p4;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    if (salario < 280)
    {
        p1 = salario * 0.20;
        a1 = salario + p1;
        printf("\n o seu salario de %0.2f teve um aumento de 20 por cento e ficou igual a: %02.f", salario, a1);
    }
    else if (salario >= 280 && salario < 700)
    {
        p2 = salario * 0.15;
        a2 = salario + p2;
        printf("\n o seu salario de %0.2f teve um aumento de 15 por cento e ficou igual a: %02.f", salario, a2);
    }
    else if (salario >= 700 && salario < 1500)
    {
        p3 = salario * 0.10;
        a3 = salario + p3;
        printf("\n o seu salario de %0.2f teve um aumento de 10 por cento e ficou igual a: %02.f", salario, a3);
    }
    else if (salario >= 1500)
    {
        p4 = salario * 0.05;
        a4 = salario + p4;
        printf("\n o seu salario de %0.2f teve um aumento de 05 por cento e ficou igual a: %02.f", salario, a4);
    }
}