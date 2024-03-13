#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int eu, cpu;
    srand(time(NULL));
    cpu = 1 + rand() % 3;
    printf("\n digite o que voce quer jogar: 1 para papel, 2 para pedra, 3 para teroura: ");
    scanf("%d", &eu);
    printf("a CPU escolheu %d", cpu);

    if (cpu == 1 && eu == 2)
    {
        printf("\n CPU vence escolhendo o numero %d(papel), voce perde escolhendo %d(pedra)", cpu, eu);
    }
    else if (cpu == 1 && eu == 1)
    {
        printf("\n CPU e voce empatam ambos escolhendo %d(papel)", cpu);
    }
    else if (cpu == 1 && eu == 3)
    {
        printf("\n CPU perde escolhendo o numero %d(papel), voce ganha escolhendo %d(tesoura)", cpu, eu);
    }
    else if (cpu == 2 && eu == 2)
    {
        printf("\n CPU e voce empatam ambos escolhendo %d(pedra)", cpu);
    }
    else if (cpu == 2 && eu == 1)
    {
        printf("\n CPU perde escolhendo o numero %d(pedra), voce ganha escolhendo %d(papel)", cpu, eu);
    }
    else if (cpu == 2 && eu == 3)
    {
        printf("\n CPU ganha escolhendo o numero %d(pedra), voce perde escolhendo %d(tesoura)", cpu, eu);
    }
    else if (cpu == 3 && eu == 2)
    {
        printf("\n CPU perde escolhendo o numero %d(tesoura), voce ganha escolhendo %d(pedra)", cpu, eu);
    }
    else if (cpu == 3 && eu == 1)
    {
        printf("\n CPU ganha escolhendo o numero %d(tesoura), voce perde escolhendo %d(papel)", cpu, eu);
    }
    else if (cpu == 3 && eu == 3)
    {
        printf("\n CPU e voce empatam ambos escolhendo %d(tesoura)", cpu);
    }
    return 0;
}