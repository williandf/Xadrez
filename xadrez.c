#include <stdio.h>

// ------------------ Funções Recursivas ------------------

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento diagonal (bispo) + chamada de loops aninhados
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ------------------ Função principal ------------------

int main() {
    // ------------------ Movimento da Torre ------------------
    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    moverTorre(casasTorre);

    // ------------------ Movimento do Bispo ------------------
    printf("\nMovimento do Bispo (Recursividade):\n");
    int casasBispo = 5;
    moverBispoRecursivo(casasBispo);

    // Repetição adicional com loops aninhados
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    for (int i = 0; i < casasBispo; i++) { // vertical (Cima)
        for (int j = 0; j < 1; j++) {      // horizontal (Direita)
            printf("Cima Direita\n");
        }
    }

    // ------------------ Movimento da Rainha ------------------
    printf("\nMovimento da Rainha:\n");
    int casasRainha = 8;
    moverRainha(casasRainha);

    // ------------------ Movimento do Cavalo ------------------
    printf("\nMovimento do Cavalo:\n");
    // Cavalo: 2 casas para cima, 1 casa para a direita (em "L")

    int movimentosCima = 2;
    int movimentosDireita = 1;
    int limite = 3;

    for (int i = 1; i <= movimentosCima + 1; i++) { // mais uma iteração para simular quebra com "break"
        if (i > movimentosCima) break; // interrompe se passou do número de passos verticais

        printf("Cima\n");

        for (int j = 1; j <= movimentosDireita; j++) {
            if (i < movimentosCima) continue; // só executa quando os dois passos para cima foram feitos
            printf("Direita\n");
        }
    }

    return 0;
}
