#include <stdio.h>
#include <ctype.h>  

void Exibir_Tabuleiro_Batalha_Naval(){

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
    int contador = 0;
    for(contador = 0; contador < 10; contador++){
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

int main(){

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

    Exibir_Tabuleiro_Batalha_Naval();

    int tamanho_navio;
    
    printf("Quantas casas o seu navio ocupará (min = 0, máx = 5)?\n");
    scanf("%d", &tamanho_navio);
    printf("\n");
    printf("Digite a casa (Ex: Coluna - A, Linha - 1)\n");

    char coluna_char;
    int linha, coluna = 0;
    for( int numero_casa = 1; numero_casa <= tamanho_navio; numero_casa++){
        
        printf("Qual a %dª casa? \n", numero_casa);
        printf("Coluna: ");
        scanf(" %c", &coluna_char);
        coluna_char = toupper(coluna_char);
        printf("Linha: ");
        scanf("%d", &linha);
        printf("\n");

        printf("%dª posição (%c%d) \n\n",numero_casa, coluna_char, linha);
        
        if (coluna_char == 'A'){
            coluna = 0;
        }else if (coluna_char == 'B')
        {
            coluna = 1;
        }else if (coluna_char == 'C')
        {
            coluna = 2;
        }else if (coluna_char == 'D')
        {
            coluna = 3;
        }else if (coluna_char == 'E')
        {
            coluna = 4;
        }else if (coluna_char == 'F')
        {
            coluna = 5;
        }else if (coluna_char == 'G')
        {
            coluna = 6;
        }else if (coluna_char == 'H')
        {
            coluna = 7;
        }else if (coluna_char == 'I')
        {
            coluna = 8;
        }else if (coluna_char == 'J')
        {
            coluna = 9;
        }else{
            printf("Coluna inválida\n");
        }
        
        tabuleiro[linha - 1][coluna] = 3;
        
        
    }

    
    char linha1[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    printf("============== Batalha Naval ===============\n\n");
        
    printf("___|");
    for(int linha = 0; linha <= 9; linha++){
        
        printf("_%c_|", linha1[linha]);       
    }
    printf("\n");

    for(int exibir_linha = 0; exibir_linha < 10; exibir_linha++){
        if(exibir_linha < 9){
            printf("_%d_|", exibir_linha + 1);
        }
        for(int exibir_coluna = 0; exibir_coluna < 10; exibir_coluna++){
            printf(" %d |", tabuleiro[exibir_linha][exibir_coluna]);
        }
        printf("\n");

    }
    
    return 0;

}