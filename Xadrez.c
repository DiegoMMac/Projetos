#include <stdio.h> // Biblioteca padrão de entrada e saída

// ==========================
// Função: movimento_torre()
// ==========================
// Mostra o movimento da Torre de acordo com a direção e número de casas.
// Usa recursão para repetir a direção até zerar o número de movimentos.
void movimento_torre(int direcao, int movimentos){

    if (movimentos > 0){ // Condição base da recursão
        switch (direcao) // Verifica a direção escolhida
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
        // Chama novamente a função com o número de movimentos decrementado
        movimento_torre(direcao, movimentos - 1);
    }
}

// ==========================
// Função: movimento_bispo()
// ==========================
// Mostra o movimento do Bispo nas diagonais.
// Utiliza loops aninhados para representar movimentos verticais e horizontais.
void movimento_bispo(int direcao, int movimentos){

    if (movimentos > 0){

        switch (direcao)
        {
            // Diagonal para cima e esquerda
            case 1:
                for(int vertical = 1; vertical <= movimentos; vertical++){ 
                    int horizontal = 1;
                    while (horizontal < 2){ 
                        printf("Cima\n");
                        horizontal++; // Executa apenas uma vez
                    }
                    printf("Esquerda\n");
                }
            break;
            
            // Diagonal para cima e direita
            case 2:
                for(int vertical = 1; vertical <= movimentos; vertical++){
                    int horizontal = 1;
                    while (horizontal < 2){
                        printf("Cima\n");
                        horizontal++;
                    }
                    printf("Direita\n");
                }
            break;

            // Diagonal para baixo e esquerda
            case 3:
                for(int vertical = 1; vertical <= movimentos; vertical++){
                    int horizontal = 1;
                    while (horizontal < 2){
                        printf("Baixo\n");
                        horizontal++;
                    }
                    printf("Esquerda\n");
                }
            break;

            // Diagonal para baixo e direita
            case 4:
                for(int vertical = 1; vertical <= movimentos; vertical++){
                    int horizontal = 1;
                    while (horizontal < 2){
                        printf("Baixo\n");
                        horizontal++;
                    }
                    printf("Direita\n");
                }
            break;
        }
    }
}

// ===========================
// Função: movimento_rainha()
// ===========================
// Combina os movimentos da Torre e do Bispo.
// Usa recursão, como na Torre.
void movimento_rainha(int direcao, int movimentos){

    if (movimentos > 0){

        switch (direcao)
        {
            case 1: printf("Cima\n"); break;
            case 2: printf("Baixo\n"); break;
            case 3: printf("Esquerda\n"); break;
            case 4: printf("Direita\n"); break;
            case 5: printf("Cima, esquerda\n"); break;
            case 6: printf("Cima, direita\n"); break;
            case 7: printf("Baixo, esquerda\n"); break;
            case 8: printf("Baixo, direita\n"); break;
        }

        // Chama novamente até movimentos chegar a zero
        movimento_rainha(direcao, movimentos - 1);
    }
}

// ===================
// Função principal
// ===================
int main(){

    int decisao, casas, direcao;

    printf("====== XADREZ =====\n\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n\n");

    printf("Escolha qual peça deseja mexer: \n");
    scanf("%d", &decisao);
    printf("\n");

    // O switch abaixo chama o movimento conforme a peça escolhida
    switch (decisao)
    {
        // ===== TORRE =====
        case 1:
           printf("==== TORRE ====\n") ;
           printf("1 - Cima\n2 - Baixo\n3 - Lado Esquerdo\n4 - Lado Direito\n");
           printf("Escolha: ");
           scanf("%d", &direcao);
           printf("\n");
           
           if (direcao > 0 && direcao < 5){
                printf("Quantas casas deseja andar? \n");
                scanf("%d", &casas);
                printf("===============\n");
                movimento_torre(direcao, casas);
                printf("===============\n"); 
           }else{
                printf("Direção inválida!\n");
           } 
        break;
        
        // ===== BISPO =====
        case 2:
           printf("==== BISPO ====\n");
           printf("1 - Diagonal pra cima, esquerda\n");
           printf("2 - Diagonal pra cima, direita\n");
           printf("3 - Diagonal pra baixo, esquerda\n");
           printf("4 - Diagonal pra baixo, direita\n");
           printf("Escolha: ");
           scanf("%d", &direcao);
           printf("\n");
                      
           if (direcao > 0 && direcao < 5){
                printf("Quantas casas deseja andar? \n");
                scanf("%d", &casas);
                printf("===============\n");
                movimento_bispo(direcao, casas);
                printf("===============\n");  
           }else{
                printf("Direção inválida!\n");
           } 
        break;
        
        // ===== RAINHA =====
        case 3:
           printf("==== RAINHA ====\n");
           printf("1 - Cima\n2 - Baixo\n3 - Lado Esquerdo\n4 - Lado Direito\n");
           printf("5 - Diagonal pra cima, esquerda\n6 - Diagonal pra cima, direita\n");
           printf("7 - Diagonal pra baixo, esquerda\n8 - Diagonal pra baixo, direita\n");
           printf("Escolha: ");
           scanf("%d", &direcao);
           printf("\n");
                      
           if (direcao > 0 && direcao < 9){
                printf("Quantas casas deseja andar? \n");
                scanf("%d", &casas);
                printf("===============\n");
                movimento_rainha(direcao, casas);
                printf("===============\n");  
           }else{
                printf("Direção inválida!\n");
           } 
        break;

        // ===== CAVALO =====
        case 4:
           printf("==== CAVALO ====\n") ;
           printf("1 - Cima, Esquerda\n2 - Cima, Direita\n3 - Baixo, Esquerda\n4 - Baixo, Direita\n");
           printf("5 - Esquerda, Cima\n6 - Esquerda, Baixo\n7 - Direita, Cima\n8 - Direita, Baixo\n");
           printf("Escolha: ");
           scanf("%d", &direcao);
           printf("\n");
                      
           if (direcao > 0 && direcao < 9){
                switch (direcao)
                {
                    int direcao1, direcao2;

                    // Cada caso simula o movimento em “L” do cavalo
                    case 1:
                        for(direcao1 = 1; direcao1 <= 1; direcao1++){
                            for(direcao2 = 1; direcao2 <= 2; direcao2++)
                                printf("Cima\n");
                            printf("Esquerda\n");
                        }
                    break;

                    case 2:
                        for(direcao1 = 1; direcao1 <= 1; direcao1++){
                            for(direcao2 = 1; direcao2 <= 2; direcao2++)
                                printf("Cima\n");
                            printf("Direita\n");
                        }
                    break;

                    case 3:
                        direcao1 = 1; direcao2 = 1;
                        while (direcao1 <= 1){
                            while (direcao2 <=2){
                                printf("Baixo\n");
                                direcao2++;
                            }
                            printf("Esquerda\n");
                            direcao1++;
                        }
                    break;

                    case 4:
                        direcao1 = 1; direcao2 = 1;
                        while (direcao1 <=1){
                            while (direcao2 <=2){
                                printf("Baixo\n");
                                direcao2++;
                            }
                            printf("Direita\n");
                            direcao1++;
                        }
                    break;

                    case 5:
                        direcao1 = 1; direcao2 = 1;
                        do{
                            do{
                                printf("Esquerda\n");
                                direcao2++;
                            }while (direcao2 <=2);
                            printf("Cima\n");
                            direcao1++;
                        }while (direcao1 <=1);
                    break;

                    case 6:
                        direcao1 = 1; direcao2 = 1;
                        do{
                            do{
                                printf("Esquerda\n");
                                direcao2++;
                            }while (direcao2 <=2);
                            printf("Baixo\n");
                            direcao1++;
                        }while (direcao1 <=1);
                    break;

                    case 7:
                        direcao1 = 1; direcao2 = 1;
                        for(direcao1 = 1; direcao1 == 1; direcao1++){
                            while (direcao2 <= 2){
                                printf("Direita\n");
                                direcao2++;
                            }
                            printf("Cima\n");
                        }
                    break;

                    case 8:
                        direcao1 = 1; direcao2 = 1;
                        for(direcao1 = 1; direcao1 == 1; direcao1++){
                            do{
                                printf("Direita\n");
                                direcao2++;
                            }while (direcao2 <= 2);
                            printf("Baixo\n");
                        }
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
