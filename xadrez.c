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

    // ------------------ Movimento do Cavalo ------------------
    // Simula o movimento do Cavalo em "L": duas casas para baixo e uma para a esquerda
    // Utiliza loops aninhados (for + while)

    printf("\nMovimento do Cavalo:\n");

    int passosBaixo = 2;     // Número de casas para baixo
    int passosEsquerda = 1;  // Número de casas para esquerda

    // Loop externo: FOR para movimento para baixo
    for (int i = 1; i <= passosBaixo; i++) {
        printf("Baixo\n");
        
        // Loop interno: WHILE para movimento para a esquerda (só executa no último passo)
        if (i == passosBaixo) {
            int j = 1;
            while (j <= passosEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
