#include <stdio.h>

// Função recursiva para calcular o número de bolas em um nível da base triangular
int calcularBolas(int nivel) {
    if (nivel == 1) {
        return 1;  // Caso base: nível 1 tem 1 bola
    } else {
        return nivel + calcularBolas(nivel - 1);  // Soma o número de bolas do nível atual com o nível anterior
    }
}

// Função recursiva para calcular o total de bolas em uma pirâmide com base triangular
int calcularTotalBolasPiramide(int niveis) {
    if (niveis == 1) {
        return 1;  // Caso base: pirâmide com 1 nível tem 1 bola
    } else {
        // Chama a função calcularBolas para obter o número de bolas no nível atual e soma recursivamente
        // com o número de bolas nas pirâmides dos níveis anteriores
        return calcularBolas(niveis) + calcularTotalBolasPiramide(niveis - 1);
    }
}

int main() {
    int niveis;
    
    printf("Digite o numero de niveis da piramide: ");
    scanf("%d", &niveis);
    
    // Calcula o total de bolas na pirâmide usando a função calcularTotalBolasPiramide
    int totalBolasPiramide = calcularTotalBolasPiramide(niveis);
    
    // Imprime o resultado
    printf("O total de bolas na pirâmide com %d niveis eh: %d\n", niveis, totalBolasPiramide);
    
    return 0;
}