#include <stdio.h>

int calcularBolas(int nivel)
{
    if (nivel == 1)
    {
        return 1;
    }
    else
    {
        return nivel + calcularBolas(nivel - 1);
    }
}

int calcularTotalBolasPiramide(int niveis)
{
    if (niveis == 1)
    {
        return 1;
    }
    else
    {

        return calcularBolas(niveis) + calcularTotalBolasPiramide(niveis - 1);
    }
}

int main()
{
    int niveis;

    printf("Digite o numero de niveis da piramide: ");
    scanf("%d", &niveis);

    int totalBolasPiramide = calcularTotalBolasPiramide(niveis);

    printf("O total de bolas na pirâmide com %d niveis eh: %d\n", niveis, totalBolasPiramide);

    return 0;
}