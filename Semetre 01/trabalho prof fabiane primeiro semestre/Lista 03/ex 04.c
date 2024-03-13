#include <stdio.h>

int main()
{
    int n;
    int cont = 0;
    int nmaior = 0;

    while (cont < 2)
    {
        cont++;
        printf("Digite um numero:\n ");
        scanf("%i", &n);
        if (n > nmaior)
        {
           nmaior=n;
        }
    }
    printf("O maior numero vai ser: %i \n", nmaior);
}