#include <stdio.h>
#include <string.h>

// Função para simular o movimento da Rainha
void moverRainha(const char direcao[], int passos) {
    printf("Movimento da Rainha para %s (%d casas):\n", direcao, passos);
    
    for (int i = 0; i < passos; i++) {
        if (strcmp(direcao, "cima") == 0) {
            printf("Cima\n");
        } else if (strcmp(direcao, "baixo") == 0) {
            printf("Baixo\n");
        } else if (strcmp(direcao, "direita") == 0) {
            printf("Direita\n");
        } else if (strcmp(direcao, "esquerda") == 0) {
            printf("Esquerda\n");
        } else if (strcmp(direcao, "diagonal superior direita") == 0) {
            printf("Cima\n");
            printf("Direita\n");
        } else if (strcmp(direcao, "diagonal superior esquerda") == 0) {
            printf("Cima\n");
            printf("Esquerda\n");
        } else if (strcmp(direcao, "diagonal inferior direita") == 0) {
            printf("Baixo\n");
            printf("Direita\n");
        } else if (strcmp(direcao, "diagonal inferior esquerda") == 0) {
            printf("Baixo\n");
            printf("Esquerda\n");
        } else {
            printf("Direção inválida!\n");
            break;
        }
    }

    printf("\n");
}

int main() {
    printf("=== Movimento Total da Rainha ===\n\n");

    // Movimento 1: Diagonal superior direita
    moverRainha("diagonal superior direita", 3);

    // Movimento 2: Horizontal direita
    moverRainha("direita", 2);

    // Movimento 3: Vertical para cima
    moverRainha("cima", 2);

    // Movimento 4: Diagonal inferior esquerda
    moverRainha("diagonal inferior esquerda", 2);

    // Movimento 5: Direção inválida (teste de segurança)
    moverRainha("voando", 1);

    printf("Movimentos da Rainha concluídos.\n");
    return 0;
}
