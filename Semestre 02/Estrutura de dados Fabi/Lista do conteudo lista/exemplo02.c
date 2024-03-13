#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int num;
    struct Node *prox;
};
typedef struct Node node;
typedef node *lista;

lista *criarlistta()
{
    lista *inicio = (lista *)malloc(sizeof(lista));
    if (inicio != NULL)
    {
        *inicio = NULL;
    }
    else
    {
        printf("Erro na alocaçãooo");
    }
    return inicio;
}

int inserenoinicio(lista *inicio)
{
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL)
    {
        printf("Erro na alocação");
        return 0;
    }
    else
    {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
        novo->prox = (*inicio);
        *inicio = novo;
    }
}

int inserenofinal(lista *inicio)
{
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL)
    {
        printf("Erro na alocacao");
        return 0;
    }
    else
    {
        node *temp;
        temp = (*inicio);
        while (temp->prox != NULL)
        {
            temp = temp->prox;
        }
        temp->prox = novo;
        novo->prox = NULL;
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
    }
}

int removeInicio(lista *inicio)
{
    if ((*inicio) != NULL)
    {
        node *proxNode, *tmp;
        tmp = *inicio;
        *inicio = tmp->prox;
        free(tmp);
        printf("Elemento removido com sucesso...\n");
    }
    else
    {
        printf("Lista ja vazia...\n");
    }
}

int removeFinal(lista *inicio)
{
    node *antNode, *tmp;
    tmp = *inicio;
    if ((*inicio) != NULL & tmp->prox == NULL)
    {
        *inicio = NULL;
        free(tmp);
        printf("Elemento removide com sucesso... \n");
    }
    else if ((*inicio) != NULL)
    {

        while (tmp->prox != NULL)
        {
            antNode = tmp;
            tmp = tmp->prox;
        }
        antNode->prox = NULL;
        free(tmp);
        printf("Elemento removido com sucesso...\n");
    }
    else
    {

        printf("Lista ja esta vazia... \n");
    }
}
void exibelista(lista *inicio)
{

    if (inicio == NULL)
    {
        printf("Lista vazia");
    }
    else
    {
        node *temp;
        temp = (*inicio);

        while (temp->prox != NULL)
        {
            printf("%i\n", temp->num);
            temp = temp->prox;
        }
        printf("%i\n", temp->num);
    }
}

int inserirOrdenado(lista *inicio)
{
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL)
    {
        printf("Erro na alocação");
        return 0;
    }
    else
    {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);

        // Caso a lista esteja vazia ou o novo elemento seja menor que o primeiro elemento
        if (*inicio == NULL || novo->num < (*inicio)->num)
        {
            novo->prox = *inicio;
            *inicio = novo;
            return 1;
        }

        node *atual = *inicio;
        node *anterior = NULL;

        // Encontra o local correto para inserir o novo elemento
        while (atual != NULL && novo->num > atual->num)
        {
            anterior = atual;
            atual = atual->prox;
        }

        // Insere o novo elemento na posição correta
        anterior->prox = novo;
        novo->prox = atual;

        return 1;
    }
}

void removeElemento(lista *inicio, int valor)
{
    if (*inicio == NULL)
    {
        printf("Lista vazia...\n");
        return 0;
    }

    node *atual = *inicio;
    node *anterior = NULL;

    // Procura o elemento a ser removido
    while (atual != NULL && atual->num != valor)
    {
        anterior = atual;
        atual = atual->prox;
    }

    // Se o elemento não foi encontrado
    if (atual == NULL)
    {
        printf("Elemento não encontrado na lista...\n");
        return 0;
    }

    // Remove o elemento da lista
    if (anterior == NULL)
    {
        // Se o elemento a ser removido é o primeiro da lista
        *inicio = atual->prox;
    }
    else
    {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Elemento removido com sucesso...\n");
}

void liberar(lista *inicio)
{
    if ((*inicio) == NULL)
    {
        printf("Lista vazia");
    }
    else
    {
        node *temp;
        while ((*inicio) == NULL)
        {
            temp = *inicio;
            *inicio = (*inicio)->prox;
            free(temp);
        }
    }
}
void ordena(lista *inicio)
{
    if ((*inicio) == NULL)
    {
        printf("Lista vazia\n");
        return;
    }

    int troca;
    node *atual;
    node *proximo = NULL;

    do
    {
        troca = 0;
        atual = *inicio;

        while (atual->prox != proximo)
        {
            if (atual->num > atual->prox->num)
            {
                int temp = atual->num;
                atual->num = atual->prox->num;
                atual->prox->num = temp;
                troca = 1;
            }
            atual = atual->prox;
        }
        proximo = atual;
    } while (troca);

    printf("Lista ordenada com sucesso\n");
}

int main()
{
    lista *inicio;
    inicio = criarlistta();
    int op;
    do
    {
        printf("---------------------------- \n");
        printf("\n");
        printf("O que deseja? \n");
        printf("2 - Inserir orderando \n");
        printf("3 - exibe lista \n");
        printf("4 - libera lista \n");
        printf("5 - ordena lista \n");
        printf("6 - remove INICIO \n");
        printf("7 - remove FINAL \n");
        printf("9 - Remover qualquer elemento \n");
        printf("0 - SAIR \n");
        printf("---------------------------- \n");
        printf("\n");
        scanf("%d", &op);
        switch (op)
        {
        case 2:
            printf("---------------------------- \n");
            printf("\n");
            inserirOrdenado(inicio);
            break;
        case 3:
            printf("---------------------------- \n");
            printf("\n");
            exibelista(inicio);
            break;
        case 4:
            printf("---------------------------- \n");
            printf("\n");
            liberar(inicio);
            break;
        case 5:
            printf("---------------------------- \n");
            printf("\n");
            ordena(inicio);
            break;
        case 6:
            printf("---------------------------- \n");
            printf("\n");
            removeInicio(inicio);
            break;
        case 7:
            printf("---------------------------- \n");
            printf("\n");
            removeFinal(inicio);
            break;

        case 9:
            printf("---------------------------- \n");
            printf("\n");
            int valor;
            printf("Digite o valor a ser removido: ");
            scanf("%i", &valor);
            removeElemento(inicio, valor);
            break;
        }
    } while (op != 0);
    liberar(inicio);
    free(inicio);
}