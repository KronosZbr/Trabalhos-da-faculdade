#include <stdio.h>

int main() {
    // Declaração das variáveis inteiro, real e caractere
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    // Declaração dos ponteiros para inteiro, real e caractere
    int *ponteiroInteiro = &inteiro;
    float *ponteiroReal = &real;
    char *ponteiroChar = &caractere;

    // Impressão dos valores iniciais das variáveis
    printf("Valores iniciais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    // Modificando os valores através dos ponteiros
    *ponteiroInteiro = 20;
    *ponteiroReal = 2.71;
    *ponteiroChar = 'B';

    // Impressão dos valores após a modificação
    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    return 0;
}