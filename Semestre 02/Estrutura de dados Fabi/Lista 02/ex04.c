#include <stdio.h>

// Função para calcular a soma de A e B e armazenar o resultado em A
void calcularSoma(int *A, int B) {
    *A = *A + B;
}

int main() {
    int A = 10;
    int B = 5;

    printf("Valores iniciais:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);

    // Chama a função calcularSoma passando os endereços de A e B
    calcularSoma(&A, B);

    printf("\nValores atualizados:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);

    return 0;   
}