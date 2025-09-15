#include <stdio.h>

void movimento_torre(int direcao, int movimentos){

    if (movimentos > 0){
        switch (direcao) // vai receber a entrada do usário 
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
        movimento_torre(direcao, movimentos - 1); // vai chamar a própria função para fazer um loop, porém com o valor movimento decrementado em - 1 para não entrar em loop infinito      
    }
}

void movimento_bispo(int direcao, int movimentos){

    if (movimentos > 0){

        switch (direcao)
        {
            case 1:
                 // loop aninhado para mostrar o movimento horizontal e vertical da peça
                for(int vertical = 1; vertical <= movimentos; vertical++)// variável vertical foi receber o valor de 1; vai repetir o loop até a variável ser menor ou igual ao movimento; 
                                                                         //variável vertical recebe um incremento de +1 no final do loop
                {
                    
                    int horizontal = 1;
                    while (horizontal < 2) // vai fazer o loop enquanto a variável for menor que 2. Ou seja, vai repetir apenas uma vez
                    {
                        printf("Cima\n");
                        horizontal++; // incremento para o loop acontecer apenas uma vez
                    }
                    
                    printf("Esquerda\n");

                }

            break;
            
            case 2:
                
                for(int vertical = 1; vertical <= movimentos; vertical++)
                {
                    
                    int horizontal = 1;
                    while (horizontal < 2)
                    {
                        printf("Cima\n");
                        horizontal++;
                    }
                    
                    printf("Direita\n");

                }

            break;

            case 3:
                
                for(int vertical = 1; vertical <= movimentos; vertical++)
                {
                    
                    int horizontal = 1;
                    while (horizontal < 2)
                    {
                        printf("Baixo\n");
                        horizontal++;
                    }
                    
                    printf("Esquerda\n");

                }

            break;

            case 4:
                
                for(int vertical = 1; vertical <= movimentos; vertical++)
                {
                    
                    int horizontal = 1;
                    while (horizontal < 2)
                    {
                        printf("Baixo\n");
                        horizontal++;
                    }
                    
                    printf("Direita\n");

                }

            break;
        }

        
    }

    

}

void movimento_rainha(int direcao, int movimentos){

    if (movimentos > 0)
    {

        switch (direcao) // vai receber a entrada do usário 
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

        movimento_rainha(direcao, movimentos - 1); // vai chamar a própria função para fazer um loop, porém com o valor movimento decrementado em - 1 para não entrar em loop infinito

    }
}


int main(){

    int decisao,casas ,direcao;

    printf("====== XADREZ =====\n\n");
    
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n\n");

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
                movimento_torre(direcao, casas); // chama função para mostrar a jogada
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
                movimento_bispo(direcao, casas); // chama função para mostrar a jogada
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
                movimento_rainha(direcao, casas); // chama função para mostrar a jogada
                printf("===============\n");  
                    
           }else{
                printf("Direção inválida!\n");
           } 

        break;

        case 4: //Movimento Cavalo:
           printf("==== Cavalo ====\n") ;
           printf("1 - Cima, Esquerda\n");
           printf("2 - Cima, Direita\n");
           printf("3 - Baixo, Esquerda\n");
           printf("4 - Baixo, Direita\n");
           printf("5 - Esquerda, Cima\n");
           printf("6 - Esquerda, Baixo\n");
           printf("7 - Direita, Cima\n");
           printf("8 - Direita, Baixo\n");
           printf("Escolha: ");
           scanf("%d", &direcao);
           printf("\n");
                      
           if (direcao > 0 && direcao < 9)// Caso o usuário não escolha uma opção válida não será exceutado o código
           {
                switch (direcao)
                {
                    int direcao1, direcao2;

                    case 1: 

                        direcao1 = 1;
                        direcao2 = 1;
                        // loop aninhado para mostrar o movimento horizontal e vertical da peça
                        for(direcao1 = 1; direcao1 <= 1; direcao1++)// variável direcao1 vai receber o valor de 1; vai repetir o loop até a variável ser menor ou igual ao 1; 
                        {                                           //variável direcao1 recebe um incremento de +1 no final do loop
                            for(direcao2 = 1; direcao2 <= 2; direcao2++) // vai fazer o loop enquanto a variável for menor ou igual a 2. Ou seja, vai repetir 2 vezes
                            {
                                printf("Cima\n");

                            }
                            printf("Esquerda\n");
                        }
                        printf("\n");
                    break;

                    case 2: 

                        direcao1 = 1;
                        direcao2 = 1;
                        
                        for(direcao1 = 1; direcao1 <= 1; direcao1++)
                        {
                            for(direcao2 = 1; direcao2 <= 2; direcao2++)
                            {
                                printf("Cima\n");

                            }
                            printf("Direita\n");
                        }
                        printf("\n");
                    break;

                    case 3: 
                        
                        direcao1 = 1;
                        direcao2 = 1;

                        while (direcao1 <= 1)
                        {
                            while (direcao2 <=2)
                            {
                                printf("Baixo\n");
                                direcao2++;
                            }
                            
                            printf("Esquerda\n");
                            direcao1++;
                        }
                        printf("\n");
                        
                    break;

                    case 4: 

                        direcao1 = 1;
                        direcao2 = 1;

                        while (direcao1 <=1)
                        {
                            while (direcao2 <=2)
                            {
                                printf("Baixo\n");
                                direcao2++;
                            }
                            
                            printf("Direita\n");
                            direcao1++;
                        }
                        printf("\n");
                        
                    break;

                    case 5: 

                        direcao1 = 1;
                        direcao2 = 1;

                        do
                        {   
                            do
                            {
                                printf("Esquerda\n");
                                direcao2++;

                            }while (direcao2 <=2);

                            printf("Cima\n");
                            direcao1++;

                        }while (direcao1 <=1);
                        
                        printf("\n");
                        
                    break;

                    case 6: 

                        direcao1 = 1;
                        direcao2 = 1;

                        do
                        {   
                            do
                            {
                                printf("Esquerda\n");
                                direcao2++;

                            }while (direcao2 <=2);

                            printf("Baixo\n");
                            direcao1++;

                        }while (direcao1 <=1);
                        
                        printf("\n");
                        
                    break;

                    case 7:

                        direcao1 = 1;
                        direcao2 = 1;
                        
                        for(direcao1 = 1; direcao1 == 1; direcao1++)
                        {
                            while (direcao2 <= 2)
                            {
                                printf("Direita\n");
                                direcao2++;
                            }
                            
                            printf("Cima\n");
                        }

                        printf("\n");

                    break;

                    case 8:

                        direcao1 = 1;
                        direcao2 = 1;
                        
                        for(direcao1 = 1; direcao1 == 1; direcao1++)
                        {
                            do
                            {
                                printf("Direita\n");
                                direcao2++;
                            }while (direcao2 <= 2);
                            
                            printf("Baixo\n");
                        }

                        printf("\n");

                    break;

                    default:

                        printf("Direção inválida!\n");

                    break;
                }
                    
           }else{
                printf("Direção inválida!\n");
           } 
                   
        break;

        default:

            printf("Escolha de peça inválida!\n");
        
        break;
    }
    
    return 0;
}