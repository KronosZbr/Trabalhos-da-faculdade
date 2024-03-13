#include <stdio.h>
#include <stdlib.h>

struct No
{
    int num;
    struct No *esq;
    struct No *dir;
};

typedef struct No no;
typedef no *ArvBin;

ArvBin *criarArvBin()
{
    ArvBin *raiz = (ArvBin *)malloc(sizeof(ArvBin));
    if (raiz != NULL)
    {
        *raiz = NULL;
    }
    else
    {
        printf("Erro na alocacao...\n");
        exit(0);
    }
    return raiz;
}

int insere_ArvBin(ArvBin *raiz)
{
    no *novo = (no *)malloc(sizeof(no));
    if (novo == NULL)
    {
        printf("Sem memoria disponivel!\n");
        exit(0);
    }

    printf("Novo elemento: ");
    scanf("%i", &novo->num);
    novo->dir = NULL;
    novo->esq = NULL;
    if (*raiz == NULL)
    {
        *raiz = novo;
    }
    else
    {
        no *atual = *raiz;
        no *ant = NULL;
        while (atual != NULL)
        {
            ant = atual;
            if (novo->num == atual->num)
            {
                printf("Elemento ja existe...\n");
                free(novo);
                return 0;
            }
            if (novo->num > atual->num)
            {
                atual = atual->dir;
            }
            else
            {
                atual = atual->esq;
            }
        }
        if (novo->num > ant->num)
        {
            ant->dir = novo;
        }
        else
        {
            ant->esq = novo;
        }
    }
    return 1;
}

void libera_NO(no *no_liberar)
{
    if (no_liberar == NULL)
    {
        return;
    }
    else
    {
        libera_NO(no_liberar->esq);
        libera_NO(no_liberar->dir);
        free(no_liberar);
    }
}

int libera_ArvBin(ArvBin *raiz)
{
    if (raiz == NULL)
    {
        return 0;
    }
    else
    {
        libera_NO(*raiz);
    }
    free(raiz);
    return 1;
}

int calcularAltura(no *raiz)
{
    if (raiz == NULL)
    {
        return -1; 
    }
    else
    {
        int alturaEsq = calcularAltura(raiz->esq);
        int alturaDir = calcularAltura(raiz->dir);
        return 1 + (alturaEsq > alturaDir ? alturaEsq : alturaDir);
    }
}

int contarNos(no *raiz)
{
    if (raiz == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + contarNos(raiz->esq) + contarNos(raiz->dir);
    }
}

no *buscaMenor(no *atual)
{
    no *no1 = atual;
    no *no2 = atual->esq;
    while (no2 != NULL)
    {
        no1 = no2;
        no2 = no2->esq;
    }
    return no1;
}

int remover_ArvBin(ArvBin *raiz, int num)
{
    if (*raiz == NULL)
    {
        printf("Elemento nao encontrado...\n");
        return 0;
    }
    if (num < (*raiz)->num)
    {
        return remover_ArvBin(&(*raiz)->esq, num);
    }
    if (num > (*raiz)->num)
    {
        return remover_ArvBin(&(*raiz)->dir, num);
    }
    if (num == (*raiz)->num)
    {
        no *no1 = *raiz;
        if ((*raiz)->esq == NULL)
        {
            *raiz = (*raiz)->dir;
            free(no1);
        }
        else if ((*raiz)->dir == NULL)
        {
            *raiz = (*raiz)->esq;
            free(no1);
        }
        else
        {
            no1 = buscaMenor((*raiz)->dir);
            (*raiz)->num = no1->num;
            remover_ArvBin(&(*raiz)->dir, (*raiz)->num);
        }
        return 1;
    }
}

void preOrdem(no *raiz)
{
    if (raiz != NULL)
    {
        printf("%d ", raiz->num);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

void emOrdem(no *raiz)
{
    if (raiz != NULL)
    {
        emOrdem(raiz->esq);
        printf("%d ", raiz->num);
        emOrdem(raiz->dir);
    }
}

void posOrdem(no *raiz)
{
    if (raiz != NULL)
    {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("%d ", raiz->num);
    }
}

int main()
{
    ArvBin *minhaArvore = criarArvBin();
    int opcao;

    do
    {
        printf("\n");
        printf("============== Menu =============\n");
        printf("1. Inserir elemento na arvore\n");
        printf("2. Imprimir em pre-ordem\n");
        printf("3. Imprimir em ordem\n");
        printf("4. Imprimir em pos-ordem\n");
        printf("5. Contar elementos na arvore\n");
        printf("6. Calcular altura da arvore\n");
        printf("7. Contar nos da arvore\n");
        printf("8. Remover no folha\n");
        printf("9. Remover no sem filho a esquerda\n");
        printf("10. Remover no com dois filhos\n");
        printf("11. Liberar arvore\n");
        printf("12. Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            system("cls");
            insere_ArvBin(minhaArvore);
            break;

        case 2:
            system("cls");
            printf("Impressao em pre-ordem: ");
            preOrdem(*minhaArvore);
            printf("\n");
            break;

        case 3:
            system("cls");
            printf("Impressao em ordem: ");
            emOrdem(*minhaArvore);
            printf("\n");
            break;

        case 4:
            system("cls");
            printf("Impressao em pos-ordem: ");
            posOrdem(*minhaArvore);
            printf("\n");
            break;

        case 5:
            system("cls");
            printf("Altura da arvore: %d\n", calcularAltura(*minhaArvore));
            break;

        case 6:
            system("cls");
            printf("Numero de nos da arvore: %d\n", contarNos(*minhaArvore));
            break;

        case 7:
            system("cls");
            int num1;
            printf("Digite o elemento a ser removido (no folha): ");
            scanf("%d", &num1);
            if (remover_ArvBin(minhaArvore, num1))
            {
                printf("Elemento removido com sucesso!\n");
            }
            else
            {
                printf("Elemento nao encontrado na arvore...\n");
            }
            break;

        case 8:
            system("cls");
            int num2;
            printf("Digite o elemento a ser removido (no sem filho a esquerda): ");
            scanf("%d", &num2);
            if (remover_ArvBin(minhaArvore, num2))
            {
                printf("Elemento removido com sucesso!\n");
            }
            else
            {
                printf("Elemento nao encontrado na arvore...\n");
            }
            break;

        case 9:
            system("cls");
            int num3;
            printf("Digite o elemento a ser removido (no com dois filhos): ");
            scanf("%d", &num3);
            if (remover_ArvBin(minhaArvore, num3))
            {
                printf("Elemento removido com sucesso!\n");
            }
            else
            {
                printf("Elemento nao encontrado na arvore...\n");
            }
            break;

        case 10:
            system("cls");
            libera_ArvBin(minhaArvore);
            minhaArvore = criarArvBin();
            printf("Arvore liberada e recriada.\n");
            break;

        case 11:
            system("cls");
            printf("Saindo do programa...\n");
            libera_ArvBin(minhaArvore);
            break;

        default:
            system("cls");
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 12);

    return 0;
}
