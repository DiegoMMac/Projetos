#include <stdio.h>

int main(){

    int decisao,casas ,direcao;

    printf("====== XADREZ =====\n\n");
    
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n\n");

    printf("Escolha qual peça deseja mexer: \n");
    scanf("%d", &decisao);
    printf("\n");

    switch (decisao)
    {
        case 1: //Movimento torre:
           printf("==== TORRE ====\n") ;
           printf("1 - Cima\n");
           printf("2 - Baixo\n");
           printf("3 - Lado Esquerdo\n");
           printf("4 - Lado Direito\n");
           printf("Escolha: ");
           scanf("%d", &direcao);
           printf("\n");
           
           if (direcao > 0 && direcao < 5) // Caso o usuário não escolha uma opção válida não será exceutado o código
           {
                printf("Quantas casas deseja andar? \n");
                scanf("%d", &casas);
                printf("===============\n");

                for(int x = 1; x <= casas; x++)// x serve como um contador
                {
                    switch (direcao)
                    {
                    case 1:
                        printf("Cima\n");
                        break;
                    case 2:
                        printf("Baixo\n");
                        break;
                    case 3:
                        printf("Esquerda\n");
                        break;
                    case 4:
                        printf("Direita\n");
                        break;
                    }           
                }
                printf("===============\n");  
           }else{
                printf("Direção inválida!\n");
           } 
        break;
        
        case 2: //Movimento Bispo:
           printf("==== Bispo ====\n") ;
           printf("1 - Diagonal pra cima, esquerda\n");
           printf("2 - Diagonal pra cima, direita\n");
           printf("3 - Diagonal pra baixo, esquerda\n");
           printf("4 - Diagonal pra baixo, direita\n");
           printf("Escolha: ");
           scanf("%d", &direcao);
           printf("\n");
                      
           if (direcao > 0 && direcao < 5)// Caso o usuário não escolha uma opção válida não será exceutado o código
           {
                printf("Quantas casas deseja andar? \n");
                scanf("%d", &casas);
                printf("===============\n");

                int contador = 0; // contar quantas vezes o código foi executado

                while (contador < casas)
                {
                    switch (direcao)
                    {
                        case 1:
                            printf("Cima, esquerda\n");
                            break;
                        case 2:
                            printf("Cima, direita\n");
                            break;
                        case 3:
                            printf("Baixo, esquerda\n");
                            break;
                        case 4:
                            printf("Baixo, direita\n");
                            break;
                    }
                    contador++;
                }
                printf("===============\n");  
                    
           }else{
                printf("Direção inválida!\n");
           } 
                   
        break;
        
        case 3: //Movimento Rainha:
           printf("==== Rainha ====\n") ;
           printf("1 - Cima\n");
           printf("2 - Baixo\n");
           printf("3 - Lado Esquerdo\n");
           printf("4 - Lado Direito\n");
           printf("5 - Diagonal pra cima, esquerda\n");
           printf("6 - Diagonal pra cima, direita\n");
           printf("7 - Diagonal pra baixo, esquerda\n");
           printf("8 - Diagonal pra baixo, direita\n");
           printf("Escolha: ");
           scanf("%d", &direcao);
           printf("\n");
                      
           if (direcao > 0 && direcao < 9)// Caso o usuário não escolha uma opção válida não será exceutado o código
           {
                printf("Quantas casas deseja andar? \n");
                scanf("%d", &casas);
                printf("===============\n");

                int contador = 0; // contar quantas vezes o código foi executado

                do{
                    switch (direcao)
                    {
                        case 1:
                            printf("Cima\n");
                            break;
                        case 2:
                            printf("Baixo\n");
                            break;
                        case 3:
                            printf("Esquerda\n");
                            break;
                        case 4:
                            printf("Direita\n");
                            break;
                        case 5:
                            printf("Cima, esquerda\n");
                            break;
                        case 6:
                            printf("Cima, direita\n");
                            break;
                        case 7:
                            printf("Baixo, esquerda\n");
                            break;
                        case 8:
                            printf("Baixo, direita\n");
                            break;
                    }
                    contador++;

                }while (contador < casas);

                printf("===============\n");  
                    
           }else{
                printf("Direção inválida!\n");
           } 

        break;
        default:
            printf("Escolha de peça inválida!");
        break;
    }
    
    return 0;
}
