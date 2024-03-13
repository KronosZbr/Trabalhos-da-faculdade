/*2- Crie um programa que simule um sistema de fila onde o primeiro que entra
é o primeiro que sai. A inserção sempre ocorrerá no inicio da lista. O
programa deve ter as duas opções 1 – inclui na fila e 2 – exclui da fila. A
cada inserção ou remoção a fila deve ser apresentada na tela.
*/
#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da fila
struct Node {
    int num;
    struct Node* prox;
};
typedef struct Node node;
typedef node* fila;

// Função para criar uma fila vazia
fila* criarfila() {
    fila* inicio = (fila*)malloc(sizeof(fila));
    if (inicio != NULL) {
        *inicio = NULL;
    }
    else {
        printf("Erro na alocação.\n");
    }
    return inicio;
}

// Função para enfileirar um elemento
int enfileirar(fila* inicio, int valor) {
    node* novo = (node*)malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na alocação.\n");
        return 0;
    }
    else {
        novo->num = valor;
        novo->prox = NULL;

        if (*inicio == NULL) {
            *inicio = novo;
        }
        else {
            node* temp = *inicio;
            while (temp->prox != NULL) {
                temp = temp->prox;
            }
            temp->prox = novo;
        }
        return 1;
    }
}

// Função para desenfileirar um elemento
int desenfileirar(fila* inicio) {
    if (*inicio == NULL) {
        printf("A fila está vazia.\n");
        return -1; // Valor inválido para indicar fila vazia.
    }

    int valor = (*inicio)->num;
    node* temp = *inicio;
    *inicio = (*inicio)->prox;
    free(temp);
    return valor;
}

// Função para exibir a fila
void exibefila(fila* inicio) {
    if (*inicio == NULL) {
        printf("A fila está vazia.\n");
    }
    else {
        node* temp = *inicio;
        while (temp != NULL) {
            printf("%i ", temp->num);
            temp = temp->prox;
        }
        printf("\n");
    }
}

int main() {
    fila* inicio = criarfila();
    int esc;
    int very = 0;

    do {
        printf("Escolha sua ação:\n1 - Enfileirar elemento\n2 - Desenfileirar elemento\n3 - Exibir fila\n4 - Sair\n-> ");
        scanf("%i", &esc);

        switch (esc) {
        case 1:
            printf("Digite o valor a ser enfileirado: ");
            int valor;
            scanf("%i", &valor);
            enfileirar(inicio, valor);
            break;
        case 2:
            desenfileirar(inicio);
            break;
        case 3:
            exibefila(inicio);
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
