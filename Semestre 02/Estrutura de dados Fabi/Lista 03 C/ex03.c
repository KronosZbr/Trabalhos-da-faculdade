/*3 - Crie um programa que simule um sistema de pila onde o primeiro que
entra e o último que saí. A inserção sempre ocorrerá no fim da lista. O
programa deverá ter as duas opções 1 – inclui na pilha e 2 – exclui da
pilha. A cada inserção ou remoção a pilha deve ser apresentada na tela.
*/
#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da pilha
struct Node {
    int num;
    struct Node* prox;
};
typedef struct Node node;
typedef node* pilha;

// Função para criar uma pilha vazia
pilha* criarpilha() {
    pilha* inicio = (pilha*)malloc(sizeof(pilha));
    if (inicio != NULL) {
        *inicio = NULL;
    }
    else {
        printf("Erro na alocação.\n");
    }
    return inicio;
}

// Função para empilhar um elemento
int empilhar(pilha* inicio, int valor) {
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

// Função para desempilhar um elemento
int desempilhar(pilha* inicio) {
    if (*inicio == NULL) {
        printf("A pilha está vazia.\n");
        return -1; // Valor inválido para indicar pilha vazia.
    }

    int valor = (*inicio)->num;
    node* temp = *inicio;
    *inicio = (*inicio)->prox;
    free(temp);
    return valor;
}

// Função para exibir a pilha
void exibepilha(pilha* inicio) {
    if (*inicio == NULL) {
        printf("A pilha está vazia.\n");
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
    pilha* inicio = criarpilha();
    int esc;
    int very = 0;

    do {
        printf("Escolha sua ação:\n1 - Empilhar elemento\n2 - Desempilhar elemento\n3 - Exibir pilha\n4 - Sair\n-> ");
        scanf("%i", &esc);

        switch (esc) {
        case 1:
            printf("Digite o valor a ser empilhado: ");
            int valor;
            scanf("%i", &valor);
            empilhar(inicio, valor);
            break;
        case 2:
            desempilhar(inicio);
            break;
        case 3:
            exibepilha(inicio);
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
