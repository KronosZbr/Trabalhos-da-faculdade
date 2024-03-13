/*4 - Escreva uma função que remove o k-ésimo nó da lista encadeada.*/
#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da lista
struct Node
{
    int num;
    struct Node *prox;
};
typedef struct Node node;
typedef node *lista;

// Função para criar uma lista vazia
lista *criarlista()
{
    lista *inicio = (lista *)malloc(sizeof(lista));
    if (inicio != NULL)
    {
        *inicio = NULL;
    }
    else
    {
        printf("Erro na alocação.\n");
    }
    return inicio;
}

// Função para inserir um elemento no início da lista
int inserenoinicio(lista *inicio, int valor)
{
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL)
    {
        printf("Erro na alocação.\n");
        return 0;
    }
    else
    {
        novo->num = valor;
        novo->prox = *inicio;
        *inicio = novo;
        return 1;
    }
}

// Função para remover o k-ésimo nó da lista
void removerKesimo(lista *inicio, int k)
{
    if (*inicio == NULL || k <= 0)
    {
        printf("Lista vazia ou k inválido.\n");
        return;
    }

    if (k == 1)
    {
        node *temp = *inicio;
        *inicio = (*inicio)->prox;
        free(temp);
    }
    else
    {
        int i;
        node *atual = *inicio;
        node *anterior = NULL;

        for (i = 1; i < k && atual != NULL; i++)
        {
            anterior = atual;
            atual = atual->prox;
        }

        if (atual != NULL)
        {
            anterior->prox = atual->prox;
            free(atual);
        }
        else
        {
            printf("k maior do que o tamanho da lista.\n");
        }
    }
}

// Função para exibir a lista
void exibelista(lista *inicio)
{
    if (*inicio == NULL)
    {
        printf("Lista vazia.\n");
    }
    else
    {
        node *temp = *inicio;
        while (temp != NULL)
        {
            printf("%i\n", temp->num);
            temp = temp->prox;
        }
    }
}

int main()
{
    lista *inicio = criarlista();
    int esc;
    int very = 0;

    do
    {

        printf("Escolha sua acaoo:\n1 - Inserir elemento\n2 - Remover k-esimo no\n3 - Exibir lista\n4 - Sair\n-> ");
        scanf("%i", &esc);

        switch (esc)
        {
        case 1:
            printf("Digite o valor a ser inserido: ");
            int valor;
            scanf("%i", &valor);
            system("cls");
            inserenoinicio(inicio, valor);
            break;
        case 2:
            printf("Digite o valor de k: ");
            int k;
            scanf("%i", &k);
            system("cls");
            removerKesimo(inicio, k);
            break;
        case 3:
            exibelista(inicio);
            break;
        case 4:
            very = 1;
            break;
        default:
            printf("Opção inválida.\n");
        }

    } while (very != 1);

    node *temp = *inicio;
    while (temp != NULL)
    {
        node *proximo = temp->prox;
        free(temp);
        temp = proximo;
    }
    free(inicio);
    return 0;
}
