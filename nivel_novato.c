#include <stdio.h>

// Constantes de movimento
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // Movimentação do Bispo - Diagonal superior direita (cima + direita)
    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Torre - Direita
    printf("Movimentação da Torre (Direita):\n");
    int j = 0;
    while (j < MOV_TORRE) {
        printf("Direita\n");
        j++;
    }
    printf("\n");

    // Movimentação da Rainha - Esquerda
    printf("Movimentação da Rainha (Esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);
    printf("\n");

    return 0;
}
