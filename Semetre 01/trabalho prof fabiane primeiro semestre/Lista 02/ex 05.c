#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    float t;
    printf("Digite o numero: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        t = sqrt(n);
        printf("o numero %d vai ser par e a raiz igual %0.2f", n, t);
    }
    else
    {
        t = (n / 2);
        printf("o numero %d vai ser impar e sua metade vai ser igual a %0.2f", n, t);
    }
}