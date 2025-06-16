#include <stdio.h>

int main() {
    // ------------------ Movimento da Torre ------------------
    // Simula a Torre se movendo 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ------------------ Movimento do Bispo ------------------
    // Simula o Bispo se movendo 5 casas na diagonal (Cima Direita)
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ------------------ Movimento da Rainha ------------------
    // Simula a Rainha se movendo 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}

