#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
    int nfilme;
    char horario[25], filme[100];
    int sessao = 0;
    int nhor;
    printf("Escolha o fime que quer assisitir (DIGITE O NUMERO): \n 1. Spider-Man: No Way Home | Duracao: 02 horas e 28 minutos \n 2. Dune | Duracao: 02 horas e 35 minutos \n 3. Jonh Wick |  Duracao: 02 horas e 28 minutos  \n 4. The Batman | Duracao: 02 horas e 48 minutos \n 5. Top Gun: Maverick | Duracao: 02 horas e 18 minutos\n");
    fflush(stdin);
    scanf("%i", &nfilme);
    if (nfilme == 1)
    {
        printf("\nVoce escolheu o fime: Spider-Man: No Way Home ");
        strcpy(filme, "Spider-Man: No Way Home");
        sessao = 4;
    }
    else if (nfilme == 2)
    {
        printf("\nVoce escolheu o fime: Dune ");
        strcpy(filme, "Dune");
        sessao = 1;
    }
    else if (nfilme == 3)
    {
        printf("\nVoce escolheu o fime: Jonh Wick ");
        strcpy(filme, "Jonh Wick");
        sessao = 2;
    }
    else if (nfilme == 4)
    {
        printf("\nVoce escolheu o fime: The Batman ");
        strcpy(filme, "The Batman");
        sessao = 3;
    }
    else if (nfilme == 5)
    {
        printf("\nVoce escolheu o fime: Top Gun: Maverick ");
        strcpy(filme, "Top Gun: Maverick");
        sessao = 5;
    }
    else
    {
        printf("\nERRO, ESCOLHA UM NUMERO VALIDO");
    }
    printf("\nQual o horario desejado para assistir o filme?(DIGITE O NUMERO)\n 1. horario de inicio: 15:00\n 2. horario de inicio:19:00 \n");
    scanf("%i", &nhor);
    if (nhor == 1)
    {

        strcpy(horario, "Inicio: 15:00");
    }
    if (nhor == 2)
    {
        strcpy(horario, "Inicio: 19:00");
    }
     else
    {
        printf("\n ESCOLHA UM NUMERO VALIDO");
    }

    {
        printf("\nO filme escolhido foi: %s.\nsessao(sala) - %i\nhorario: %s", filme, sessao, horario);
    }
}