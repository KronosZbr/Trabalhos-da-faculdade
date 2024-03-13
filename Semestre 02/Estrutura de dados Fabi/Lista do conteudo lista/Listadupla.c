#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de nó que será usada na lista duplamente encadeada
struct Node
{
    int num;
    struct Node *prox; // Ponteiro para o próximo nó
    struct Node *ant;  // Ponteiro para o nó anterior
};

typedef struct Node node; // Definindo um tipo "node" para simplificar
typedef node *lista;      // Definindo um tipo "lista" como um ponteiro para um "node"

// Função para criar uma lista vazia
lista *criarlista()
{
    lista *inicio = (lista *)malloc(sizeof(lista)); // Alocando memória para a lista
    if (inicio != NULL)
    {
        *inicio = NULL; // Inicializando a lista como vazia
    }
    else
    {
        printf("Erro na alocação\n");
    }
    return inicio; // Retorna um ponteiro para a lista criada
}

// Função para inserir um nó no início da lista
int inserenoinicio(lista *inicio)
{
    node *novo = (node *)malloc(sizeof(node)); // Alocando memória para o novo nó
    if (novo == NULL)
    {
        printf("Erro na alocação\n");
        return 0;
    }
    else
    {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);

        novo->ant = NULL;     // O nó anterior do novo nó é NULL
        novo->prox = *inicio; // O próximo nó do novo nó é o atual início da lista

        if (*inicio != NULL)
        {
            (*inicio)->ant = novo; // Se a lista não estava vazia, atualiza o nó anterior do nó que era o início
        }

        *inicio = novo; // Atualiza o início da lista para o novo nó
    }
    return 1; // Indica que a inserção foi bem-sucedida
}

// Função para inserir um nó no final da lista
int inserenofinal(lista *inicio)
{
    node *novo = (node *)malloc(sizeof(node)); // Alocando memória para o novo nó
    if (novo == NULL)
    {
        printf("Erro na alocação\n");
        return 0;
    }
    else
    {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);

        novo->prox = NULL; // O próximo nó do novo nó é NULL

        if (*inicio == NULL)
        {
            novo->ant = NULL; // Se a lista estava vazia, o nó anterior do novo nó também é NULL
            *inicio = novo;   // Atualiza o início da lista para o novo nó
        }
        else
        {
            node *temp = *inicio;
            while (temp->prox != NULL)
            {
                temp = temp->prox; // Percorre a lista até o último nó
            }
            temp->prox = novo; // Atualiza o próximo nó do último nó para o novo nó
            novo->ant = temp;  // Atualiza o nó anterior do novo nó para o último nó
        }
    }
    return 1; // Indica que a inserção foi bem-sucedida
}

// Função para remover o primeiro nó da lista
int removeInicio(lista *inicio)
{
    if ((*inicio) != NULL)
    {
        node *proxNode, *tmp;
        tmp = *inicio;
        *inicio = tmp->prox; // Atualiza o início da lista para o próximo nó
        if (*inicio != NULL)
        {
            (*inicio)->ant = NULL; // Atualiza o nó anterior do novo início para NULL
        }
        free(tmp); // Libera a memória do nó removido
        printf("Elemento removido com sucesso...\n");
    }
    else
    {
        printf("Lista já vazia...\n");
    }
    return 1; // Indica que a remoção foi bem-sucedida
}

// Função para remover o último nó da lista
int removeFinal(lista *inicio)
{
    node *antNode, *tmp;
    tmp = *inicio;
    if ((*inicio) != NULL && tmp->prox == NULL)
    {
        *inicio = NULL;
        free(tmp); // Libera a memória do nó removido
        printf("Elemento removido com sucesso... \n");
    }
    else if ((*inicio) != NULL)
    {
        while (tmp->prox != NULL)
        {
            antNode = tmp;
            tmp = tmp->prox; // Percorre a lista até o último nó
        }
        antNode->prox = NULL; // Atualiza o próximo nó do penúltimo nó para NULL
        free(tmp);            // Libera a memória do último nó removido
        printf("Elemento removido com sucesso...\n");
    }
    else
    {
        printf("Lista já está vazia... \n");
    }
    return 1; // Indica que a remoção foi bem-sucedida
}

// Função para exibir a lista
void exibelista(lista *inicio)
{
    if (*inicio == NULL)
    {
        printf("Lista vazia\n");
    }
    else
    {
        node *temp = *inicio;
        while (temp != NULL)
        {
            printf("%i\n", temp->num);
            temp = temp->prox; // Percorre a lista e imprime cada elemento
        }
    }
}

// Função para inserir um nó na lista de forma ordenada
int inserirOrdenado(lista *inicio)
{
    node *novo = (node *)malloc(sizeof(node)); // Alocando memória para o novo nó
    if (novo == NULL)
    {
        printf("Erro na alocação\n");
        return 0;
    }
    else
    {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);

        if (*inicio == NULL || novo->num <= (*inicio)->num)
        {
            novo->prox = *inicio;
            novo->ant = NULL;
            if (*inicio != NULL)
            {
                (*inicio)->ant = novo;
            }
            *inicio = novo;
            return 1;
        }

        node *atual = *inicio;
        while (atual->prox != NULL && novo->num > atual->prox->num)
        {
            atual = atual->prox; // Percorre a lista até encontrar a posição correta para o novo nó
        }

        novo->ant = atual;
        novo->prox = atual->prox;

        if (atual->prox != NULL)
        {
            atual->prox->ant = novo;
        }

        atual->prox = novo;

        return 1;
    }
}

// Função para remover um elemento específico da lista
void removeElemento(lista *inicio, int valor)
{
    if (*inicio == NULL)
    {
        printf("Lista vazia...\n");
        return;
    }

    node *atual = *inicio;
    while (atual != NULL && atual->num != valor)
    {
        atual = atual->prox; // Percorre a lista até encontrar o elemento a ser removido
    }

    if (atual == NULL)
    {
        printf("Elemento não encontrado na lista...\n");
        return;
    }

    if (atual->ant != NULL)
    {
        atual->ant->prox = atual->prox; // Atualiza o próximo nó do nó anterior
    }
    else
    {
        *inicio = atual->prox; // Atualiza o início da lista se o elemento a ser removido é o primeiro
    }

    if (atual->prox != NULL)
    {
        atual->prox->ant = atual->ant; // Atualiza o nó anterior do próximo nó
    }

    free(atual); // Libera a memória do elemento removido
    printf("Elemento removido com sucesso...\n");
}

// Função para liberar a memória da lista
void liberar(lista *inicio)
{
    if (*inicio != NULL)
    {
        node *temp, *proxNode;
        temp = *inicio;
        while (temp != NULL)
        {
            proxNode = temp->prox;
            free(temp); // Libera a memória de cada nó da lista
            temp = proxNode;
        }
        *inicio = NULL;
        printf("Lista liberada com sucesso...\n");
    }
    else
    {
        printf("Lista já está vazia... \n");
    }
}

// Função para ordenar a lista em ordem crescente
void ordena(lista *inicio)
{
    if (*inicio == NULL)
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

// Função principal
int main()
{
    lista *inicio; // Ponteiro para o início da lista
    inicio = criarlista(); // Cria uma lista vazia
    int op;
    do
    {
        printf("---------------------------- \n");
        printf("\n");
        printf("O que deseja? \n");
        printf("2 - Inserir ordenando \n");
        printf("3 - Exibir lista \n");
        printf("4 - Liberar lista \n");
        printf("5 - Ordenar lista \n");
        printf("6 - Remover INICIO \n");
        printf("7 - Remover FINAL \n");
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
            inserirOrdenado(inicio); // Chama a função para inserir ordenadamente
            break;
        case 3:
            printf("---------------------------- \n");
            printf("\n");
            exibelista(inicio); // Chama a função para exibir a lista
            break;
        case 4:
            printf("---------------------------- \n");
            printf("\n");
            liberar(inicio); // Chama a função para liberar a memória da lista
            break;
        case 5:
            printf("---------------------------- \n");
            printf("\n");
            ordena(inicio); // Chama a função para ordenar a lista
            break;
        case 6:
            printf("---------------------------- \n");
            printf("\n");
            removeInicio(inicio); // Chama a função para remover o primeiro elemento
            break;
        case 7:
            printf("---------------------------- \n");
            printf("\n");
            removeFinal(inicio); // Chama a função para remover o último elemento
            break;

        case 9:
            printf("---------------------------- \n");
            printf("\n");
            int valor;
            printf("Digite o valor a ser removido: ");
            scanf("%i", &valor);
            removeElemento(inicio, valor); // Chama a função para remover um elemento específico
            break;
        }
    } while (op != 0);
    liberar(inicio); // Libera a memória da lista antes de encerrar o programa
    free(inicio); // Libera o ponteiro para a lista
    return 0;
}
