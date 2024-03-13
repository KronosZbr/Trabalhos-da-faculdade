#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char iniciar[5][20], res[10], res1[10], res2[10], res3[10], res4[10], res5[10], letra, resp[5][30], letm[1], var;

int r, termino = 0, e, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, esc, i, j, el, x = 1;

void matriz()
{
    printf("%s\n", iniciar[0]);
    printf("%s\n", iniciar[1]);
    printf("%s\n", iniciar[2]);
    printf("%s\n", iniciar[3]);
    printf("%s\n", iniciar[4]);
}

int main()
{

    strcpy(iniciar[0], "1| | | | | |*|*|*|\0");
    strcpy(iniciar[1], "2| | | | |*|*|*|*|\0");
    strcpy(iniciar[2], "3| | | | | | | |*|\0");
    strcpy(iniciar[3], "4| | | | | | | |*|\0");
    strcpy(iniciar[4], "5| | | | | | | |*|\0");

    strcpy(resp[0], "1|m|e|s|s|i|*|*|*|\0");
    strcpy(resp[1], "2|n|i|k|e|*|*|*|*|\0");
    strcpy(resp[2], "3|e|m|o|t|i|v|a|*|\0");
    strcpy(resp[3], "4|c|i|t|r|o|e|n|*|\0");
    strcpy(resp[4], "5|s|i|s|t|e|m|a|*|\0");

    matriz();

    printf("1 - Qual o artilheiro da copa de 2022?\n");
    printf("2 - qual a marca de roupa que lembra uma curva?\n");
    printf("3 - Uma pessoa que expoe os sentimentos é?\n");
    printf("4 - Uma marca de carro?\n");
    printf("5 - Pode ser um tipo de software?\n");

    strcpy(res1, "messi");
    strcpy(res2, "nike");
    strcpy(res3, "emotiva");
    strcpy(res4, "citroen");
    strcpy(res5, "sistema");

    printf("\nvoce poder errar ate 2 palavras e ate 3 letras\n");
    printf("\nCOlocar todas as letras em minusculas\n");

    e = 0;
    termino = 0;

    while (termino != 5 && e != 2 && el != 3 && x != 106)
    {
        printf("\n");
        printf("1 - Qual o artilheiro da copa de 2022?\n");
        printf("2 - qual a marca de roupa que lembra uma curva?\n");
        printf("3 - Uma pessoa que expoe os sentimentos é?\n");
        printf("4 - Uma marca de carro?\n");
        printf("5 - Pode ser um tipo de software?\n");
        printf("\n");
        printf("tentar por palavra(1) ou por letra(2)\n");
        fflush(stdin);
        scanf("%i", &esc);
        if (esc == 1)
        {
            printf("Qual voce ira responder?\n");
            fflush(stdin);
            scanf("%i", &r);

            if (a1 == r || a2 == r || a3 == r || a4 == r || a5 == r)
            {
                r = r + 10;
            }
            switch (r)
            {
            case 1:
                printf("escreva sua resposta\n");
                fflush(stdin);
                scanf("%s", &res);
                if (strcmp(res1, res) == 0)
                {
                    printf("voce acertou\n");
                    strcpy(iniciar[0], "1|m|e|s|s|i|*|*|*|\0");
                    termino = termino + 1;
                    matriz();
                    a1 = 1;
                }
                else
                {
                    printf("voce errou\n");
                    e = e + 1;
                }
                break;
            case 2:
                printf("escreva sua resposta\n");
                fflush(stdin);
                scanf("%s", &res);
                if (strcmp(res2, res) == 0)
                {
                    printf("voce acertou\n");
                    strcpy(iniciar[1], "2|n|i|k|e|*|*|*|*|\0");
                    termino = termino + 1;
                    matriz();
                    a2 = 2;
                }
                else
                {
                    printf("voce errou\n");
                    e = e + 1;
                }
                break;
            case 3:
                printf("escreva sua resposta\n");
                fflush(stdin);
                scanf("%s", &res);
                if (strcmp(res3, res) == 0)
                {
                    printf("voce acertou\n");
                    strcpy(iniciar[2], "3|e|m|o|t|i|v|a|*|\0");
                    termino = termino + 1;
                    matriz();
                    a3 = 3;
                }
                else
                {
                    printf("voce errou\n");
                    e = e + 1;
                }
                break;
            case 4:
                printf("escreva sua resposta\n");
                fflush(stdin);
                scanf("%s", &res);
                if (strcmp(res4, res) == 0)
                {
                    printf("voce acertou\n");
                    strcpy(iniciar[3], "4|c|i|t|r|o|e|n|*|\0");
                    termino = termino + 1;
                    matriz();
                    a4 = 4;
                }
                else
                {
                    printf("voce errou\n");
                    e = e + 1;
                }
                break;
            case 5:
                printf("escreva sua resposta\n");
                fflush(stdin);
                scanf("%s", &res);
                if (strcmp(res5, res) == 0)
                {
                    printf("voce acertou\n");
                    strcpy(iniciar[4], "5|s|i|s|t|e|m|a|*|\0");
                    termino = termino + 1;
                    matriz();
                    a5 = 5;
                }
                else
                {
                    printf("voce errou\n");
                    e = e + 1;
                }
                break;
            default:
                printf("alternativa invalida\n");
                break;
            }
        }
        else if (esc == 2)
        {
            printf("escreva uma letra\n");
            fflush(stdin);
            scanf("%s", &letra);

            switch (letra)
            {
            case 'm':
            case 'e':
            case 's':
            case 'i':
            case 'n':
            case 'k':
            case 'o':
            case 't':
            case 'v':
            case 'a':
            case 'c':
            case 'r':
// m,e,s,i,n,k,o,t,v,a,c,r
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 30; j++)
                    {
                        if (letra == resp[i][j])
                        {
                            iniciar[i][j] = letra;
                        }
                    }
                }
                break;
            default:
                el = el + 1;
                 printf("\n");
                printf("NAO TEM ESSA LETRA\n");
                 printf("\n");
            }
            matriz();
        }
        else
        {
            printf("escolha invalida\n");
        }
        x = 0;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 30; j++)
            {
                if (iniciar[i][j] == resp[i][j])
                {
                    x = x + 1;
                }
            }
        }
    }

    if (e == 2 || el == 3)
    {
        printf("\nque pena, reinicie o programa e tente de novo\n");
    }
    else
    {
        printf("\nPARABENS, VOCE ACERTOU TODAS\n");
    }
}