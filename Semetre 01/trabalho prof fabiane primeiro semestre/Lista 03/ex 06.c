#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n = 1;
    int sex;
    float alf, alm, sf, sm;
    int cont = 0;
    int soma = 0;
    float contf = 0, contm = 0;

    while (cont < 2)
    {
        cont++;
        printf("Digite o seu sexo (0 para feminino 1 para masculino: \n ");
        scanf("%d", &sex);
        if (sex == 0)
        {
            printf("\n F Digite sua altura: ");
            scanf("%f", &alf);
            sf = alf;
            sf = (sf + alf) / contf;
            contf ++;
        }
        else
        {
            printf("\n M Digite sua altura: ");
            scanf("%f", &alm);
            sm = alm;
            sm = (sm + alm) / contf;
            contm++;
        }
    }
    printf("media altura feminina %0.2f", contf);
    printf("media altura masculina %0.2f", contm);
}