#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No
{
    int mes;
    int dia;
    char descricao[100];
    struct No *esquerda;
    struct No *direita;
};
typedef struct No no;

typedef struct No *Evento;

#include "inserir.h"

Evento *criaArvore()
{
    Evento *raiz = (Evento *)malloc(sizeof(Evento));
    if (raiz != NULL)
    {
        *raiz = NULL;
    }
    else
    {
        printf("Erro na alocacao");
        return 0;
    };
    return raiz;
}

void imprime_no_InOrd(no *no_print)
{
    if (no_print == NULL)
    {
        return;
    }
    else
    {
        imprime_no_InOrd(no_print->esquerda);
        printf("dia: %i/ mes: %i  \n descricao: %s \n-------------\n", no_print->dia, no_print->mes, no_print->descricao);
        imprime_no_InOrd(no_print->direita);
    }
}

int main()  
{
    Evento *raiz = criaArvore();
    int esc, mes, dia;
    char descricao[100];

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Inserir evento\n");
        printf("2. Editar evento\n");
        printf("3. Excluir evento\n");
        printf("4. Listar eventos\n");
        printf("5. Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &esc);

        switch (esc)
        {
        case 1:
                do
                {
                    printf("Informe o dia (1-31): ");
                    scanf("%d", &dia);
                    fflush(stdin);
                    printf("Informe o mes (1-12): ");
                    scanf("%d", &mes);

                    
                    if (validar_data(dia, mes) == 1)
                    {
                        printf("Data invalida. Tente novamente.\n");
                    }
                    else
                    {
                        printf("Informe a descricao: ");
                        fflush(stdin);
                        gets(descricao);
                    }
                } while (validar_data(dia, mes) == 1);
            insere_raiz(raiz, dia, mes, descricao);
            break;

        case 2:
            printf("Informe o dia (1-31) do evento a ser editado: ");
            scanf("%d", &dia);
            printf("Informe o mês (1-12) do evento a ser editado: ");
            scanf("%d", &mes);
            printf("Informe a nova descriçao: ");
            scanf(" %[^\n]", descricao);
            break;
        case 3:
            printf("Informe o dia (1-31) do evento a ser excluido: ");
            scanf("%d", &dia);
            printf("Informe o mês (1-12) do evento a ser excluido: ");
            scanf("%d", &mes);
            break;
        case 4:
            printf("\nEventos em ordem:\n");
            if (raiz == NULL)
            {
                return 0;
            }
            else
            {
                imprime_no_InOrd(*raiz);
            }

            break;
        case 5:
            exit(1);
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}