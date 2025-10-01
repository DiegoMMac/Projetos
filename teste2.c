#include <stdio.h>

int main(){

    int ataque_cruz[3][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };

    int tabuleiro[10][10] = {0}; // já inicializa tudo em 0

    int linhas_skill = 3, colunas_skill = 5;
    int linhas_tabuleiro = 10, colunas_tabuleiro = 10;

    // calcula início para centralizar
    int inicio_linha = (linhas_tabuleiro - linhas_skill) / 2; 
    int inicio_coluna = (colunas_tabuleiro - colunas_skill) / 2;

    // sobrepõe a matriz de ataque no centro do tabuleiro
    for (int i = 0; i < linhas_skill; i++) {
        for (int j = 0; j < colunas_skill; j++) {
            if (ataque_cruz[i][j] == 1) {
                tabuleiro[inicio_linha + i][inicio_coluna + j] = 5; 
                // usei 5 pra marcar área afetada
            }
        }
    }

    // imprime tabuleiro final
    for (int i = 0; i < linhas_tabuleiro; i++) {
        for (int j = 0; j < colunas_tabuleiro; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
