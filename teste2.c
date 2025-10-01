#include <stdio.h>
#include <stdlib.h>

#define TAB 10   // tamanho do tabuleiro

// imprime o tabuleiro
void print_tabuleiro(int tabuleiro[TAB][TAB]) {
    for (int i = 0; i < TAB; i++) {
        for (int j = 0; j < TAB; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// sobrepõe uma matriz de habilidade no centro do tabuleiro
void aplica_habilidade(int tabuleiro[TAB][TAB], int linhas, int colunas, int habilidade[linhas][colunas]) {
    int inicio_linha = (TAB - linhas) / 2;
    int inicio_coluna = (TAB - colunas) / 2;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (habilidade[i][j] == 1) {
                tabuleiro[inicio_linha + i][inicio_coluna + j] = 5;
            }
        }
    }
}

int main() {
    // inicializa o tabuleiro com água (0)
    int tabuleiro[TAB][TAB] = {0};

    // habilidade CRUZ (3x5)
    int cruz[3][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };

    // habilidade CONE (5x5)
    int cone[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    // habilidade OCTAEDRO (5x5 losango)
    int octaedro[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };

    // aplica cada habilidade no tabuleiro
    aplica_habilidade(tabuleiro, 3, 5, cruz);
    aplica_habilidade(tabuleiro, 5, 5, cone);
    aplica_habilidade(tabuleiro, 5, 5, octaedro);

    // mostra resultado
    printf("Tabuleiro final com habilidades centralizadas:\n\n");
    print_tabuleiro(tabuleiro);

    return 0;
}
