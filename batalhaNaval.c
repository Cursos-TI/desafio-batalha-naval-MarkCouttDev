#include <stdio.h>

int main() {
    // Criando o tabuleiro 10x10 e preenchendo com água (0)
    int tabuleiro[10][10];
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Criando os navios com tamanho 3
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // Definindo as posições iniciais dos navios
    int linhaH = 2;
    int colunaH = 4;

    int linhaV = 5;
    int colunaV = 1;

    // Verificando se o navio horizontal cabe no tabuleiro
    if (colunaH + 3 <= 10) {
        for (i = 0; i < 3; i++) {
            tabuleiro[linhaH][colunaH + i] = navio_horizontal[i];
        }
    } else {
        printf("Navio horizontal fora do tabuleiro.\n");
        return 1;
    }

    // Verificando se o navio vertical cabe no tabuleiro
    if (linhaV + 3 <= 10) {
        int sobreposicao = 0;
        for (i = 0; i < 3; i++) {
            if (tabuleiro[linhaV + i][colunaV] == 3) {
                sobreposicao = 1;
            }
        }

        if (sobreposicao == 0) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaV + i][colunaV] = navio_vertical[i];
            }
        } else {
            printf("Navio vertical está em cima do outro navio.\n");
            return 1;
        }
    } else {
        printf("Navio vertical fora do tabuleiro.\n");
        return 1;
    }

    // Mostrando o tabuleiro
    printf("Tabuleiro:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
