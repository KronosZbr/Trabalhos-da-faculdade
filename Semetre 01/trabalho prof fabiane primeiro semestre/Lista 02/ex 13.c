#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float salario, prest, tt;
    printf("Digite o seu salario bruto: ");
    scanf("%f", &salario);
    printf("\n Digite a prestacao ");
    scanf("%f", &prest);
    tt = salario * 0.30;
    printf("\n Com seu salario de %0.2f e a prestacao de %0.2f seu emprestimo foi:",salario,prest);
    if (prest >= tt)
    {
        printf("\n TRANSACAO REPROVADA");
    }
    else
    {
        printf("\n TRANSACAO APROVADA");
    }
}