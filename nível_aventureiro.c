#include <stdio.h>

#define MOV_TORRE 4
#define MOV_BISPO 4

// Função para movimentação como Torre (horizontal direita)
void moverComoTorre() {
    printf("Movimentação da Dama como Torre (horizontal - direita):\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// Função para movimentação como Bispo (diagonal superior direita)
void moverComoBispo() {
    printf("Movimentação da Dama como Bispo (diagonal - superior direita):\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");
}

int main() {
    // Simulação da movimentação da Dama
    printf("=== Movimento Completo da Dama ===\n\n");

    // Movimento como Torre
    moverComoTorre();

    // Movimento como Bispo
    moverComoBispo();

    printf("Movimento da Dama concluído.\n");
    return 0;
}
