#include <stdio.h>

int main()
{
    int n;
    n = 1;
    int soma = 0;

    while (n <= 500)
    {
        if (n % 2 == 1 && n % 3 == 0)
        {
            soma = soma + n;
        }
        n = n + 1;
    }
    printf("a soma dos impares multiplos de 03 eh: %d",soma);
}