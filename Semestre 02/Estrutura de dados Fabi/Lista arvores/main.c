#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
struct No {
    int num;
    struct No *esq;
    struct No *dir;
};

typedef struct No no;
typedef no *ArvBin;

ArvBin* criarArvBin() {
    ArvBin *raiz = (ArvBin*) malloc(sizeof(ArvBin));
    if (raiz != NULL) {
        *raiz = NULL;
    } else {
        printf("Erro na alocacao...\n");
        exit(0);
    }
    return raiz;
}

int insere_ArvBin(ArvBin *raiz) {
    no *novo = (no*) malloc(sizeof(no));
    if (novo == NULL) {
        printf("Sem memoria disponivel!\n");
        exit(0);
    }

    printf("Novo elemento: ");
    scanf("%i", &novo->num);
    novo->dir = NULL;
    novo->esq = NULL;
    if (*raiz == NULL) {
        *raiz = novo;
    } else {
        no *atual = *raiz;
        no *ant = NULL;
        while (atual != NULL) {
            ant = atual;
            if (novo->num == atual->num) {
                printf("Elemento ja existe...\n");
                free(novo);
                return 0;
            }
            if (novo->num > atual->num) {
                atual = atual->dir;
            } else {
                atual = atual->esq;
            }
        }
        if (novo->num > ant->num) {
            ant->dir = novo;
        } else {
            ant->esq = novo;
        }
    }
    return 1;
}

void libera_NO(no *no_liberar) {
    if (no_liberar == NULL) {
        return;
    } else {
        libera_NO(no_liberar->esq);
        libera_NO(no_liberar->dir);
        free(no_liberar);
    }
}

int libera_ArvBin(ArvBin* raiz) {
    if (raiz == NULL) {
        return 0;
    } else {
        libera_NO(*raiz);
    }
    free(raiz);
    return 1;
}

void preOrdem(no *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->num);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

void emOrdem(no *raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esq);
        printf("%d ", raiz->num);
        emOrdem(raiz->dir);
    }
}

void posOrdem(no *raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("%d ", raiz->num);
    }
}

int main() {
    ArvBin *minhaArvore = criarArvBin();
    int opcao;

    do {
        printf("\n");
        printf("============== Menu =============\n");
        printf("1. Inserir elemento na arvore\n");
        printf("2. Imprimir em pre-ordem\n");
        printf("3. Imprimir em ordem\n");
        printf("4. Imprimir em pos-ordem\n");
        printf("5. Liberar arvore\n");
        printf("6. Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls"); // Use "cls" no Windows.
                insere_ArvBin(minhaArvore);
                break;

            case 2:
                system("cls"); // Use "cls" no Windows.
                printf("Impressao em pré-ordem: ");
                preOrdem(*minhaArvore);
                printf("\n");
                break;

            case 3:
                system("cls"); // Use "cls" no Windows.
                printf("Impressao em ordem: ");
                emOrdem(*minhaArvore);
                printf("\n");
                break;

            case 4:
                system("cls"); // Use "cls" no Windows.
                printf("Impressao em pós-ordem: ");
                posOrdem(*minhaArvore);
                printf("\n");
                break;

            case 5:
                system("cls"); // Use "cls" no Windows.
                libera_ArvBin(minhaArvore);
                minhaArvore = criarArvBin();
                printf("Arvore liberada e recriada.\n");
                break;

            case 6:
                system("cls"); // Use "cls" no Windows.
                printf("Saindo do programa...\n");
                libera_ArvBin(minhaArvore);
                break;

            default:
                system("cls"); // Use "cls" no Windows.
                printf("Opção invalida. Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}
