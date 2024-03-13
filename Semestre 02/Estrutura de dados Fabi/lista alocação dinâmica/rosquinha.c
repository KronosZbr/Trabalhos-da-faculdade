#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void clearScreen() {
    printf("\033[H\033[J");  // Código para limpar a tela no terminal
}

int main() {
    int i;
    clearScreen();

    for (i = 0; i < 20; i++) {  // Simulando 20 frames de rotação
        clearScreen();
        
        printf("   ooOoo   \n");
        printf(" o       o \n");
        printf("o         o\n");
        printf("o         o\n");
        printf("o         o\n");
        printf(" o       o \n");
        printf("   ooOoo   \n");
        
        usleep(500000);  // Aguardar por 500ms (microseconds) antes do próximo frame
    }

    return 0;
}