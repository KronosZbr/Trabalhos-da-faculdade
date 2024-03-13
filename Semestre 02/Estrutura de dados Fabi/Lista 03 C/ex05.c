/*5 - Considere uma lista de inteiros. Faça uma função para retornar o número
de nós da lista que possuem um número primo armazenado.
*/
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

// Função para contar nós com números primos na lista
int contarPrimos(lista* inicio) {
    int count = 0;
    node* atual = *inicio;

    while (atual != NULL) {
        int num = atual->num;
        int isPrime = 1; // Supõe que o número é primo

        if (num <= 1) {
            isPrime = 0; // 0 e 1 não são primos
        }
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = 0; // Não é primo
                    break;
                }
            }
        }

        if (isPrime) {
            count++;
        }

        atual = atual->prox;
    }

    return count;
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
        printf("Escolha sua ação:\n1 - Inserir elemento\n2 - Contar nós com números primos\n3 - Exibir lista\n4 - Sair\n-> ");
        scanf("%i", &esc);

        switch (esc) {
        case 1:
            printf("Digite o valor a ser inserido: ");
            int valor;
            scanf("%i", &valor);
            inserenoinicio(inicio, valor);
            break;
        case 2:
            printf("Número de nós com números primos: %d\n", contarPrimos(inicio));
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

    node* temp = *inicio;
    while (temp != NULL) {
        node* proximo = temp->prox;
        free(temp);
        temp = proximo;
    }
    free(inicio);
    return 0;
}
