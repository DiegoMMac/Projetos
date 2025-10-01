#include <stdio.h>

int main(){

    int ataque_cruz[3][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}};

    int tabuleiro [10][10] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    int linha_origem = 3, coluna_origem = 5;
    int linha_destino = 10, coluna_destino = 10;


    for (int linha = 0; linha < linha_destino; linha++){
        for (int coluna = 0; coluna < coluna_destino; coluna++){
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n\n");

    for (int linha = 0; linha < linha_origem; linha++){
        for (int coluna = 0; coluna < coluna_origem; coluna++){
            printf("%d ", ataque_cruz[linha][coluna]);
        }
    printf("\n");
    }
    printf("\n\n");

    for (int linha = 0; linha < linha_destino; linha++){
        for (int coluna = 0; coluna < coluna_destino; coluna++){
            
            
            if (linha < linha_origem && coluna < coluna_origem)
            {
                tabuleiro[linha][coluna] = ataque_cruz[linha][coluna];
                
            }else{
                tabuleiro[linha][coluna] = 0;
            }
            
            
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    return 0;

}