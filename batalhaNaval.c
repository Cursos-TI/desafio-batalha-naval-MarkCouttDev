#include <stdio.h>

// Tamanho do tabuleiro
#define TAMANHO 10

// Valor que representa parte de navio
#define NAVIO 3

int main() {
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TAMANHO][TAMANHO];
    int i, j;
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Função auxiliar para verificar sobreposição
    int sobrepoe(int x[], int y[]) {
        for (int k = 0; k < 3; k++) {
            if (tabuleiro[x[k]][y[k]] == NAVIO) {
                return 1;
            }
        }
        return 0;
    }

    // Posiciona navio horizontal
    int linhaH = 2, colunaH = 4;
    if (colunaH + 3 <= TAMANHO) {
        int x[3] = {linhaH, linhaH, linhaH};
        int y[3] = {colunaH, colunaH + 1, colunaH + 2};
        if (!sobrepoe(x, y)) {
            for (i = 0; i < 3; i++) tabuleiro[x[i]][y[i]] = NAVIO;
        }
    }

    // Posiciona navio vertical
    int linhaV = 5, colunaV = 1;
    if (linhaV + 3 <= TAMANHO) {
        int x[3] = {linhaV, linhaV + 1, linhaV + 2};
        int y[3] = {colunaV, colunaV, colunaV};
        if (!sobrepoe(x, y)) {
            for (i = 0; i < 3; i++) tabuleiro[x[i]][y[i]] = NAVIO;
        }
    }

    // Posiciona navio diagonal principal (↘)
    int linhaD1 = 0, colunaD1 = 0;
    if (linhaD1 + 3 <= TAMANHO && colunaD1 + 3 <= TAMANHO) {
        int x[3] = {linhaD1, linhaD1 + 1, linhaD1 + 2};
        int y[3] = {colunaD1, colunaD1 + 1, colunaD1 + 2};
        if (!sobrepoe(x, y)) {
            for (i = 0; i < 3; i++) tabuleiro[x[i]][y[i]] = NAVIO;
        }
    }

    // Posiciona navio diagonal secundária (↙)
    int linhaD2 = 0, colunaD2 = TAMANHO - 1;
    if (linhaD2 + 3 <= TAMANHO && colunaD2 - 2 >= 0) {
        int x[3] = {linhaD2, linhaD2 + 1, linhaD2 + 2};
        int y[3] = {colunaD2, colunaD2 - 1, colunaD2 - 2};
        if (!sobrepoe(x, y)) {
            for (i = 0; i < 3; i++) tabuleiro[x[i]][y[i]] = NAVIO;
        }
    }

    // Exibe o tabuleiro
    printf("Tabuleiro:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
