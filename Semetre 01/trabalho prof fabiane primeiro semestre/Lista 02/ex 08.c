#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float prd, menor, mr, totmenor, totmaior;
    printf("Escreva o valor do feno: ");
    scanf("%f", &prd);
    menor = ((prd * 45) / 100);
    totmenor = (prd + menor);
    mr= ((prd * 30) / 100);
    totmaior = (prd + mr);
    if (prd < 20)
    {
        printf("com o preco de %0.2f o valor total vai ser igual a: %0.2f", prd, totmenor);
    }
    else
    {
        printf("com o preco de %0.2f o valor total vai ser igual a: %0.2f", prd, totmaior);
    }
}