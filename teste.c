#include <stdio.h>

int main(){

    char linha1[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
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
    
    printf("============== Batalha Naval ===============\n\n");
        
    printf("___|");
    for(int linha = 0; linha <= 9; linha++){
        
        printf("_%c_|", linha1[linha]);       
    }
    printf("\n");

    int coluna1 = 1;

    for(int contador = 0; contador < 10; contador++){
        if (coluna1 == 10){
            printf("_%d|", coluna1);
        }else{
            printf("_%d_|", coluna1);
        }
        
        for (int matriz = 0; matriz <= 9 ; matriz++)
        {
            printf(" %d |", tabuleiro[contador][matriz]);
            
        }
        coluna1++;
        printf("\n");
    }
    printf("\n");

    tabuleiro[0][0] = 3;
    tabuleiro[0][1] = 3;

    printf("___|");
    for(int linha = 0; linha <= 9; linha++){
        
        printf("_%c_|", linha1[linha]);       
    }
    printf("\n");

    for(int contador = 0; contador < 10; contador++){
        if (coluna1 == 10){
            printf("_%d|", coluna1);
        }else{
            printf("_%d_|", coluna1);
        }
        
        for (int matriz = 0; matriz <= 9 ; matriz++)
        {
            printf(" %d |", tabuleiro[contador][matriz]);
            
        }
        coluna1++;
        printf("\n");
    }
    printf("\n");

}