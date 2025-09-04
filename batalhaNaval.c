#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAMANHO 10
#define NAVIO 3
#define HABILIDADE 5

// Função para inicializar o tabuleiro com água
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++)
        for (int j = 0; j < TAMANHO; j++)
            tabuleiro[i][j] = 0;
}

// Função para verificar sobreposição de navios
int sobrepoe(int tabuleiro[TAMANHO][TAMANHO], int x[], int y[]) {
    for (int k = 0; k < 3; k++)
        if (tabuleiro[x[k]][y[k]] == NAVIO)
            return 1;
    return 0;
}

// Função para aplicar navios ao tabuleiro
void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int x[], int y[]) {
    for (int i = 0; i < 3; i++)
        tabuleiro[x[i]][y[i]] = NAVIO;
}

// Função para construir matriz Cone
void construirCone(int cone[HABILIDADE][HABILIDADE]) {
    for (int i = 0; i < HABILIDADE; i++)
        for (int j = 0; j < HABILIDADE; j++)
            cone[i][j] = (j >= 2 - i && j <= 2 + i) ? 1 : 0;
}

// Função para construir matriz Cruz
void construirCruz(int cruz[HABILIDADE][HABILIDADE]) {
    for (int i = 0; i < HABILIDADE; i++)
        for (int j = 0; j < HABILIDADE; j++)
            cruz[i][j] = (i == 2 || j == 2) ? 1 : 0;
}

// Função para construir matriz Octaedro
void construirOctaedro(int octaedro[HABILIDADE][HABILIDADE]) {
    for (int i = 0; i < HABILIDADE; i++)
        for (int j = 0; j < HABILIDADE; j++)
            octaedro[i][j] = (abs(i - 2) + abs(j - 2) <= 2) ? 1 : 0;
}

// Função para aplicar habilidade ao tabuleiro
void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int habilidade[HABILIDADE][HABILIDADE], int origemLinha, int origemColuna) {
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            int linhaTab = origemLinha - 2 + i;
            int colunaTab = origemColuna - 2 + j;
            if (linhaTab >= 0 && linhaTab < TAMANHO && colunaTab >= 0 && colunaTab < TAMANHO) {
                if (habilidade[i][j] == 1 && tabuleiro[linhaTab][colunaTab] != NAVIO)
                    tabuleiro[linhaTab][colunaTab] = 5; // Área afetada
            }
        }
    }
}

// Função para exibir o tabuleiro com legenda
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 0) printf("~ ");       // Água
            else if (tabuleiro[i][j] == NAVIO) printf("N "); // Navio
            else if (tabuleiro[i][j] == 5) printf("* ");   // Área afetada
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    inicializarTabuleiro(tabuleiro);

    // Posiciona navios
    int xH[3] = {2, 2, 2}, yH[3] = {4, 5, 6};
    if (!sobrepoe(tabuleiro, xH, yH)) posicionarNavio(tabuleiro, xH, yH);

    int xV[3] = {5, 6, 7}, yV[3] = {1, 1, 1};
    if (!sobrepoe(tabuleiro, xV, yV)) posicionarNavio(tabuleiro, xV, yV);

    int xD1[3] = {0, 1, 2}, yD1[3] = {0, 1, 2};
    if (!sobrepoe(tabuleiro, xD1, yD1)) posicionarNavio(tabuleiro, xD1, yD1);

    int xD2[3] = {0, 1, 2}, yD2[3] = {9, 8, 7};
    if (!sobrepoe(tabuleiro, xD2, yD2)) posicionarNavio(tabuleiro, xD2, yD2);

    // Construção das habilidades
    int cone[HABILIDADE][HABILIDADE], cruz[HABILIDADE][HABILIDADE], octaedro[HABILIDADE][HABILIDADE];
    construirCone(cone);
    construirCruz(cruz);
    construirOctaedro(octaedro);

    // Aplicação das habilidades
    aplicarHabilidade(tabuleiro, cone, 3, 3);
    aplicarHabilidade(tabuleiro, cruz, 6, 6);
    aplicarHabilidade(tabuleiro, octaedro, 1, 8);

    // Exibição final
    exibirTabuleiro(tabuleiro);

    return 0;
}
