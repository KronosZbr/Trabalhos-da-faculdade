#include <stdio.h>

int main()
{
    int a;
    int b;
    fflush(stdin);
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    int *ponteiroa = &a;
    int *ponteirob = &b;

    if (&a > &b)
    {
        printf("O conteudomaior  eh: %x \n", &a);
    }
    else
    {

        printf("O conteudo maior eh: %x \n", &b);
    }
    printf("O conteudo de A  eh: %x \n", &a);
    printf("O conteudo de B  eh: %x \n", &b);
}