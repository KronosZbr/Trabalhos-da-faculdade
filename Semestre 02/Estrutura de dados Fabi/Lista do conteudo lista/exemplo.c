#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num;
    struct Node *prox;
    struct Node *ant; // Adicionar ponteiro para o nó anterior
};

typedef struct Node node;
typedef node *lista;

lista *criarlista() {
    lista *inicio = (lista *)malloc(sizeof(lista));
    if (inicio != NULL) {
        *inicio = NULL;
    } else {
        printf("Erro na alocação\n");
    }
    return inicio;
}

int inserenoinicio(lista *inicio) {
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na alocação\n");
        return 0;
    } else {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
        novo->prox = (*inicio);
        novo->ant = NULL; // O nó anterior é nulo no início
        if (*inicio != NULL) {
            (*inicio)->ant = novo; // O nó seguinte terá este como anterior
        }
        *inicio = novo;
        return 1;
    }
}

int inserenofinal(lista *inicio) {
    node *novo = (node *)malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na alocação\n");
        return 0;
    } else {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
        novo->prox = NULL;
        if (*inicio == NULL) {
            novo->ant = NULL;
            *inicio = novo;
        } else {
            node *temp = *inicio;
            while (temp->prox != NULL) {
                temp = temp->prox;
            }
            temp->prox = novo;
            novo->ant = temp;
        }
        return 1;
    }
}

int removeInicio(lista *inicio) {
    if ((*inicio) != NULL) {
        node *proxNode = (*inicio)->prox;
        free(*inicio);
        if (proxNode != NULL) {
            proxNode->ant = NULL;
        }
        *inicio = proxNode;
        printf("Elemento removido com sucesso...\n");
    } else {
        printf("Lista já vazia...\n");
    }
    return 1;
}

int removeFinal(lista *inicio) {
    if ((*inicio) == NULL) {
        printf("Lista já vazia...\n");
        return 0;
    } else if ((*inicio)->prox == NULL) {
        free(*inicio);
        *inicio = NULL;
    } else {
        node *temp = *inicio;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->ant->prox = NULL;
        free(temp);
    }
    printf("Elemento removido com sucesso...\n");
    return 1;
}

void exibelista(lista *inicio) {
    if (*inicio == NULL) {
        printf("Lista vazia\n");
    } else {
        node *temp = *inicio;
        while (temp != NULL) {
            printf("%i\n", temp->num);
            temp = temp->prox;
        }
    }
}

void liberar(lista *inicio) {
    if ((*inicio) != NULL) {
        node *temp;
        while ((*inicio) != NULL) {
            temp = *inicio;
            *inicio = (*inicio)->prox;
            free(temp);
        }
    }
}

void ordena(lista *inicio) {
    if ((*inicio) == NULL) {
        printf("Lista vazia\n");
        return;
    }

    int troca;
    node *atual;
    node *proximo = NULL;

    do {
        troca = 0;
        atual = *inicio;

        while (atual->prox != proximo) {
            if (atual->num > atual->prox->num) {
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

int main() {
    lista *inicio;
    inicio = criarlista();
    int op;
    do {
        printf("---------------------------- \n");
        printf("\n");
        printf("O que deseja? \n");
        printf("1 - inserir INICIO \n");
        printf("2 - inserir FINAL \n");
        printf("3 - exibe lista \n");
        printf("4 - libera lista \n");
        printf("5 - ordena lista \n");
        printf("6 - remove INICIO \n");
        printf("7 - remove FINAL \n");
        printf("0 - SAIR \n");
        printf("---------------------------- \n");
        printf("\n");
        scanf("%d", &op);
        switch (op) {
            case 1:
                printf("---------------------------- \n");
                printf("\n");
                inserenoinicio(inicio);
                break;
            case 2:
                printf("---------------------------- \n");
                printf("\n");
                inserenofinal(inicio);
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
        }
    } while (op != 0);
    liberar(inicio);
    free(inicio);
}
