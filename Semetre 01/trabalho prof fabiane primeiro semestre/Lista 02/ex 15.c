#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int res1, res2, res3, res4, res5, total;
    printf("Telefonou para a vítima? (1 para SIM 0 para NAO) ");
    scanf("%d", &res1);
    printf("\n Esteve no local do crime? (1 para SIM 0 para NAO) ");
    scanf("%d", &res2);
    printf("\n Mora perto da vítima? (1 para SIM 0 para NAO) ");
    scanf("%d", &res3);
    printf("\n Devia para a vítima? (1 para SIM 0 para NAO) ");
    scanf("%d", &res4);
    printf("\n Ja trabalhou com a vítima? (1 para SIM 0 para NAO) ");
    scanf("%d", &res5);
    total = res1 + res2 + res3 + res4 + res5;
    printf("\n TESTE %d", total);
    if (total == 2)
    {
        printf("\n SUSPEITA");
    }
    else if ((total == 3) || (total == 4))
    {
        printf("\n CUMPLICE");
    }
    else if (total == 5)
    {
        printf("\n ASSASINO");
    }
    else if (total < 2)
    {
        printf("\n INOCENTE");
    }
}