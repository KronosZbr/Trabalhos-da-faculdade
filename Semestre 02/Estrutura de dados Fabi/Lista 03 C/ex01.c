/*1 - Seja uma lista dinâmica e encadeada com elementos repetidos,
implemente uma rotina para eliminar todas as ocorrências de X da lista.*/

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da lista
struct Node {
    int num;
    struct Node* prox;
};
typedef struct Node node;
typedef node* lista;

// Função para criar uma lista vazia
lista* criarlista() {
    lista* inicio = (lista*)malloc(sizeof(lista));
    if (inicio != NULL) {
        *inicio = NULL;
    }
    else {
        printf("Erro na alocação.\n");
    }
    return inicio;
}

// Função para inserir um elemento no início da lista
int inserenoinicio(lista* inicio, int valor) {
    node* novo = (node*)malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na alocação.\n");
        return 0;
    }
    else {
        novo->num = valor;
        novo->prox = *inicio;
        *inicio = novo;
        return 1;
    }
}

// Função para eliminar todas as ocorrências de X da lista
void eliminarOcorrencias(lista* inicio, int X) {
    node* atual = *inicio;
    node* anterior = NULL;

    while (atual != NULL) {
        if (atual->num == X) {
            if (anterior == NULL) {
                *inicio = atual->prox;
            }
            else {
                anterior->prox = atual->prox;
            }
            free(atual);
            atual = anterior ? anterior->prox : *inicio;
        }
        else {
            anterior = atual;
            atual = atual->prox;
        }
    }
}

// Função para exibir a lista
void exibelista(lista* inicio) {
    if (*inicio == NULL) {
        printf("Lista vazia.\n");
    }
    else {
        node* temp = *inicio;
        while (temp != NULL) {
            printf("%i\n", temp->num);
            temp = temp->prox;
        }
    }
}

int main() {
    lista* inicio = criarlista();
    int esc;
    int very = 0;

    do {
        printf("Escolha sua acao:\n1 - Inserir elemento\n2 - Eliminar ocorrencias de X\n3 - Exibir lista\n4 - Sair\n-> ");
        scanf("%i", &esc);

        switch (esc) {
        case 1:
            printf("Digite o valor a ser inserido: ");
            int valor;
            scanf("%i", &valor);
            inserenoinicio(inicio, valor);
            break;
        case 2:
            printf("Digite o valor de X a ser removido: ");
            int X;
            scanf("%i", &X);
            eliminarOcorrencias(inicio, X);
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

    free(*inicio);
    free(inicio);
    return 0;
}
