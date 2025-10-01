#include <stdio.h>
#include <ctype.h>  


#define tab_principal 10 //tamanho tabuleiro
#define tab_ataque_linha 3 //tamanho linha tabuleiro ataque
#define tab_ataque_coluna 5 //tamanho coluna tabuleiro ataque

//Função para exibir o tabuleiro
void Exibir_Tabuleiro_Batalha_Naval(int tabuleiro[tab_principal][tab_principal]){

    char linha1[tab_principal] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    printf("============== Batalha Naval ===============\n\n");
        
    printf("___|");
    for(int linha = 0; linha < 10; linha++){
        
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
        
        for (int matriz = 0; matriz < 10 ; matriz++)
        {
            printf(" %d |", tabuleiro[contador][matriz]);
            
        }
        coluna1++;
        printf("\n");
    }
    printf("\n");
}

void Exibir_Tabuleiros_de_Ataque(int ataque_cruz[tab_ataque_linha][tab_ataque_coluna], int ataque_cone[tab_ataque_linha][tab_ataque_coluna], int ataque_octaedro[tab_ataque_linha][tab_ataque_coluna]){

    printf("=========== Ataques especiais ============\n\n");

    printf("======== Cruz =======\n");

    for(int linha_matriz_ataque = 0; linha_matriz_ataque < 3; linha_matriz_ataque++ ){
        for(int coluna_matriz_ataque = 0; coluna_matriz_ataque < 5; coluna_matriz_ataque++ ){
            if (coluna_matriz_ataque == 0){
                printf("| %d |", ataque_cruz[linha_matriz_ataque][coluna_matriz_ataque]);
            }else{
                printf(" %d |", ataque_cruz[linha_matriz_ataque][coluna_matriz_ataque]);
            }

        }
        printf("\n");
    }
    printf("\n");

    printf("======== Cone =======\n");

    for(int linha_matriz_ataque = 0; linha_matriz_ataque < 3; linha_matriz_ataque++ ){
        for(int coluna_matriz_ataque = 0; coluna_matriz_ataque < 5; coluna_matriz_ataque++ ){
            if (coluna_matriz_ataque == 0){
                printf("| %d |", ataque_cone[linha_matriz_ataque][coluna_matriz_ataque]);
            }else{
                printf(" %d |", ataque_cone[linha_matriz_ataque][coluna_matriz_ataque]);
            }

        }
        printf("\n");
    }
    printf("\n");

    printf("====== Octaedro =====\n");

    for(int linha_matriz_ataque = 0; linha_matriz_ataque < 3; linha_matriz_ataque++ ){
        for(int coluna_matriz_ataque = 0; coluna_matriz_ataque < 5; coluna_matriz_ataque++ ){
            if (coluna_matriz_ataque == 0){
                printf("| %d |", ataque_octaedro[linha_matriz_ataque][coluna_matriz_ataque]);
            }else{
                printf(" %d |", ataque_octaedro[linha_matriz_ataque][coluna_matriz_ataque]);
            }

        }
        printf("\n");
    }
    printf("\n\n");


    printf("# Use o meio do ataque como base para lançar no tabuleiro\n\n");

}

int main(){
    // Tabuleiro que será alimentado pelo usuário
    int tabuleiro [tab_principal][tab_principal] = {0}; //toda a matriz recebe o valor 0 

    Exibir_Tabuleiro_Batalha_Naval(tabuleiro); // chama a função exibir tabuleiro

    char descisao = 'S';
    while (descisao == 'S')
    {
        int tamanho_navio, verificacao_navio = 1; // armazena quantas casas o navio irá ocupar no tabuleiro
    
        while (verificacao_navio)   //verifica o tamanho do navio, caso ultrapasse o limite de 5 ou o minimo de 1 dará erro
        {
            printf("Quantas casas o seu navio ocupará (min = 1, máx = 5)?\n");
            scanf("%d", &tamanho_navio);

            if (tamanho_navio < 1 || tamanho_navio > 5){

                printf("Tamanho do navio inválido!\n");
                printf("Tente novamente...\n\n");
            }else{
                break;
            }    
        }   

        printf("\n");
        printf("Digite a casa (Ex: Coluna - A, Linha - 1)\n");

        char letra_coluna;      // Letra que o usuário vai usar para identificar a coluna
        int linha, coluna = 0;  // linha e coluna que será usado para mudar valores na matriz tabuleiro

        for( int posicao_navio = 1; posicao_navio <= tamanho_navio; posicao_navio++){ // vai alimentar a matriz de acordo como o tamanho do navio
            
            printf("Qual a %dª casa? \n\n", posicao_navio);
        
            
            int verificacao_posicao = 1;        // Faz com que o while fique em loop até ser falso ou receber um break.
            while (verificacao_posicao)
            {
                int verificacao_coluna = 1;     // Faz com que o while fique em loop até ser falso ou receber um break.
                while (verificacao_coluna)
                {
                    printf("Coluna: ");
                    scanf(" %c", &letra_coluna);
                    letra_coluna = toupper(letra_coluna);

                    if (letra_coluna == 'A'){
                        coluna = 0;
                        break;
                    }else if (letra_coluna == 'B')
                    {
                        coluna = 1;
                        break;
                    }else if (letra_coluna == 'C')
                    {
                        coluna = 2;
                        break;
                    }else if (letra_coluna == 'D')
                    {
                        coluna = 3;
                        break;
                    }else if (letra_coluna == 'E')
                    {
                        coluna = 4;
                        break;
                    }else if (letra_coluna == 'F')
                    {
                        coluna = 5;
                        break;
                    }else if (letra_coluna == 'G')
                    {
                        coluna = 6;
                        break;
                    }else if (letra_coluna == 'H')
                    {
                        coluna = 7;
                        break;
                    }else if (letra_coluna == 'I')
                    {
                        coluna = 8;
                        break;
                    }else if (letra_coluna == 'J')
                    {
                        coluna = 9;
                        break;
                    }else{
                        printf("Coluna inválida\n\n");
                        
                    }
                }
                
                int verificacao_linha = 1;
                while (verificacao_linha)
                {

                    printf("Linha: ");
                    scanf("%d", &linha);
                    printf("\n");

                    if (linha < 1 || linha > 10){
                        printf("Linha inválida!\n\n");
                    }else
                    {
                        break;
                    }
                }

                if (tabuleiro[linha - 1][coluna] == 3){         // verifica se a posição escolhida pelo jogador já está preenchida no tabuleiro
                    printf("Posição [%c%d] já ocupada!\n\n", letra_coluna, linha); 
                }else{
                    break;
                }
            }         

            printf("%dª posição (%c%d) \n\n",posicao_navio, letra_coluna, linha);
            
          
            tabuleiro[linha - 1][coluna] = 3; // vai preencher a matriz com a posição escolhida pelo usuario

            
        }

        printf("Deseja colocar outro navio no tabulerio? (S/N) \n");
        scanf(" %c", &descisao);
        descisao = toupper(descisao);

    }
    

    Exibir_Tabuleiro_Batalha_Naval(tabuleiro);
    
    int ataque_cruz[3][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };
    int ataque_cone[3][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1}
    };
    int ataque_octaedro[3][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };


    Exibir_Tabuleiros_de_Ataque(ataque_cruz, ataque_cone, ataque_octaedro);

    int opcao_ataque, linha_ataque, coluna_ataque;
    char letra_coluna_ataque;

    printf("Qual ataque deseja usar? \n");
    printf("1 - Cruz\n");
    printf("2 - Cone\n");
    printf("3 - Octaedro\n");

    printf("Escolha: ");
    scanf("%d", &opcao_ataque);

    printf("\nÓtima escolha!!!\n\n");
    printf("Qual posição do tabuleiro deseja atacar? \n");

    int verificar_coluna = 1;
    while(verificar_coluna){

        printf("Coluna: ");
        scanf(" %c", &letra_coluna_ataque);
        letra_coluna_ataque = toupper(letra_coluna_ataque);

        if (letra_coluna_ataque == 'A'){            // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
            coluna_ataque = 0;
            break;
        }else if (letra_coluna_ataque == 'B')       // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
        {
            coluna_ataque = 1;
            break;
        }else if (letra_coluna_ataque == 'C')       // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
        {
            coluna_ataque = 2;
            break;
        }else if (letra_coluna_ataque == 'D')       // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
        {
            coluna_ataque = 3;
            break;
        }else if (letra_coluna_ataque == 'E')       // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
        {
            coluna_ataque = 4;
            break;
        }else if (letra_coluna_ataque == 'F')       // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
        {
            coluna_ataque = 5;
            break;
        }else if (letra_coluna_ataque == 'G')       // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
        {
            coluna_ataque = 6;
            break;
        }else if (letra_coluna_ataque == 'H')       // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
        {
            coluna_ataque = 7;
            break;
        }else if (letra_coluna_ataque == 'I')       // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
        {
            coluna_ataque = 8;
            break;
        }else if (letra_coluna_ataque == 'J')       // Vai transformar a letra da coluna em um valor inteiro para locarlizar o indice da matriz
        {
            coluna_ataque = 9;
            break;
        }else{
            printf("Coluna inválida\n\n");
            
        }

    }

    int verificacao_linha = 1;
    while (verificacao_linha)
    {

        printf("Linha: ");
        scanf("%d", &linha_ataque);
        printf("\n");

        if (linha_ataque < 0 || linha_ataque > 10){
            printf("Linha inválida!\n\n");
        }else
        {
            break;
        }
    }


    int linhas_matriz_ataque = 3, colunas_matriz_ataque = 5;

    int centro_linha = 1;  // linha central da matriz de ataque
    int centro_coluna = 2; // coluna central da matriz de ataque    

    switch (opcao_ataque){

        case 1:

            // sobrepõe a matriz de ataque no centro do tabuleiro
            for (int i = 0; i < linhas_matriz_ataque; i++) {
                for (int j = 0; j < colunas_matriz_ataque; j++) {
                    if (ataque_cruz[i][j] == 1) {
                        int linha_destino = linha_ataque - centro_linha + i;
                        int coluna_destino = coluna_ataque - centro_coluna + j;

                        // só atualiza se estiver dentro do tabuleiro
                        if (linha_destino >= 0 && linha_destino < tab_principal &&
                            coluna_destino >= 0 && coluna_destino < tab_principal) {
                            tabuleiro[linha_destino][coluna_destino] = 5;
                        }
                    }
                }
            }
        
        break;
        
        case 2:

            // sobrepõe a matriz de ataque no centro do tabuleiro
            for (int i = 0; i < linhas_matriz_ataque; i++) {
                for (int j = 0; j < colunas_matriz_ataque; j++) {
                    if (ataque_cone[i][j] == 1) {
                        int linha_destino = linha_ataque - centro_linha + i;
                        int coluna_destino = coluna_ataque - centro_coluna + j;

                        // só atualiza se estiver dentro do tabuleiro
                        if (linha_destino >= 0 && linha_destino < tab_principal &&
                            coluna_destino >= 0 && coluna_destino < tab_principal) {
                            tabuleiro[linha_destino][coluna_destino] = 5;
                        }
                    }
                }
            }

        break;

        case 3:

            // sobrepõe a matriz de ataque no centro do tabuleiro
            for (int i = 0; i < linhas_matriz_ataque; i++) {
                for (int j = 0; j < colunas_matriz_ataque; j++) {
                    if (ataque_octaedro[i][j] == 1) {
                        int linha_destino = linha_ataque - centro_linha + i;
                        int coluna_destino = coluna_ataque - centro_coluna + j;

                        // só atualiza se estiver dentro do tabuleiro
                        if (linha_destino >= 0 && linha_destino < tab_principal &&
                            coluna_destino >= 0 && coluna_destino < tab_principal) {
                            tabuleiro[linha_destino][coluna_destino] = 5;
                        }
                    }
                }
            }
        break;

        default:

            printf("Opção inválida!\n\n");

        break;
    }


    Exibir_Tabuleiro_Batalha_Naval(tabuleiro);


    return 0;

}