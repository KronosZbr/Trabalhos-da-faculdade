#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float n1, n2, media;
    printf("Digite a nota 01(de 0 a 10): ");
    scanf("%f", &n1);
    printf("\n Digite a nota 02(de 0 a 10): ");
    scanf("%f", &n2);
    media = (n1 + n2)/2;
    printf("%0.2f", media);
    if (media <= 5)
    {
        printf("\n REPROVADO");
    }
    else if (media >= 5.1 && media < 7.0)
    {
        printf("\n EXAME");
    }
    else if (media >= 7.0)
    {
        printf("\n APROVADO");
    }
}