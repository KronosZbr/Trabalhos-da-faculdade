/*6 - Considerando a implementação de uma lista encadeada para armazenar
números reais dada pelo tipo abaixo:
struct lista{
 float info;
 struct lista * prox;
};
typedef struct lista Lista;
Implemente uma função que, dados um lista encadeada e um número
inteiro não negativo n, remova da lista seus n primeiros nós e retorne a
lista resultante. Caso n seja maior ou igual ao que o cumprimento da lista,
todos os seus elementos devem ser removidos e o resultado da função
deve ser uma lista vazia*/
#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da lista
struct Node {
    float info;
    struct Node* prox;
};
typedef struct Node Lista;
typedef Lista* lista;

// Função para criar uma lista vazia
lista criarListaVazia() {
    return NULL;
}

// Função para inserir um elemento no início da lista
lista inserirInicio(lista inicio, float valor) {
    lista novo = (lista)malloc(sizeof(Lista));
    if (novo == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }
    novo->info = valor;
    novo->prox = inicio;
    return novo;
}

// Função para remover os n primeiros nós da lista
lista removerNPrimeiros(lista inicio, int n) {
    lista atual = inicio;
    int contador = 0;

    while (atual != NULL && contador < n) {
        lista temp = atual;
        atual = atual->prox;
        free(temp);
        contador++;
    }

    return atual;
}

// Função para exibir a lista
void exibirLista(lista inicio) {
    lista atual = inicio;

    while (atual != NULL) {
        printf("%.2f ", atual->info);
        atual = atual->prox;
    }

    printf("\n");
}

int main() {
    lista inicio = criarListaVazia();
    int esc;
    int very = 0;

    do {
        printf("Escolha sua ação:\n1 - Inserir elemento\n2 - Remover os n primeiros nós\n3 - Exibir lista\n4 - Sair\n-> ");
        scanf("%d", &esc);

        switch (esc) {
        case 1:
            printf("Digite o valor a ser inserido: ");
            float valor;
            scanf("%f", &valor);
            inicio = inserirInicio(inicio, valor);
            break;
        case 2:
            printf("Digite o valor de n: ");
            int n;
            scanf("%d", &n);
            inicio = removerNPrimeiros(inicio, n);
            break;
        case 3:
            exibirLista(inicio);
            break;
        case 4:
            very = 1;
            break;
        default:
            printf("Opção inválida.\n");
        }
    } while (very != 1);

    lista atual = inicio;
    while (atual != NULL) {
        lista temp = atual;
        atual = atual->prox;
        free(temp);
    }

    return 0;
}
