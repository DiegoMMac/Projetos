    // Seleção da linha (1–10)
    while (1){                                           // Loop infinito até o usuário fornecer uma linha válida
        printf("Linha: ");                               // Pede ao usuário o número da linha (espera 1..10)
        scanf("%d", &linha_ataque);                      // Lê o número digitado e armazena em linha_ataque
        printf("\n");                                    // Imprime uma linha em branco para formatação
        linha_ataque -= 1;                               // Converte de 1..10 para índice 0-based (0..9)
        if (linha_ataque < 0 || linha_ataque > 9){       // Verifica se o índice ficou fora do intervalo válido (0..9)
            printf("Linha inválida!\n\n");               // Informa erro e repete o loop para nova entrada
        }else{
            break;                                       // Entrada válida: sai do loop
        }
    }

    // Tamanho da matriz de ataque (sempre 3x5)
    int linhas_matriz_ataque = 3, colunas_matriz_ataque = 5; // Define variáveis com dimensões do padrão de ataque

    // Centro do ataque (posição base para sobrepor no tabuleiro)
    int centro_linha = 1;                                // Linha central do padrão (índice relativo dentro da matriz de ataque)
    int centro_coluna = 2;                               // Coluna central do padrão (índice relativo dentro da matriz de ataque)

    // Aplica o ataque escolhido no tabuleiro
    switch (opcao_ataque){                                // Seleciona qual padrão de ataque será usado com base na escolha do usuário

        case 1: // Ataque cruz
            for (int i = 0; i < linhas_matriz_ataque; i++) {         // Percorre as linhas (i) da matriz de ataque (0..2)
                for (int j = 0; j < colunas_matriz_ataque; j++) {    // Percorre as colunas (j) da matriz de ataque (0..4)
                    if (ataque_cruz[i][j] == 1) {                    // Se a célula (i,j) do padrão é 1 => é uma célula a ser atingida
                        int linha_destino = linha_ataque - centro_linha + i;    // Calcula a linha destino no tabuleiro alinhando o centro do padrão à linha escolhida
                        int coluna_destino = coluna_ataque - centro_coluna + j; // Calcula a coluna destino no tabuleiro alinhando o centro do padrão à coluna escolhida

                        // Só marca se a posição estiver dentro do tabuleiro
                        if (linha_destino >= 0 && linha_destino <= tab_principal &&   // Verifica limite inferior (>=0) e superior (<= tab_principal)
                            coluna_destino >= 0 && coluna_destino < tab_principal) {  // Verifica coluna dentro do intervalo válido (>=0 e < tab_principal)
                            tabuleiro[linha_destino][coluna_destino] = 5;            // Marca a célula de destino como atingida (valor 5)
                        }
                    }
                }
            }
        break;
        
        case 2: // Ataque cone
            for (int i = 0; i < linhas_matriz_ataque; i++) {         // Mesma lógica do case 1, mas usando o padrão ataque_cone
                for (int j = 0; j < colunas_matriz_ataque; j++) {
                    if (ataque_cone[i][j] == 1) {                   // Se a célula do padrão cone for 1, é célula a atingir
                        int linha_destino = linha_ataque - centro_linha + i;   // Calcula linha destino alinhando centros
                        int coluna_destino = coluna_ataque - centro_coluna + j; // Calcula coluna destino alinhando centros

                        if (linha_destino >= 0 && linha_destino <= tab_principal &&   // Verifica limites antes de escrever na matriz
                            coluna_destino >= 0 && coluna_destino < tab_principal) {
                            tabuleiro[linha_destino][coluna_destino] = 5;            // Marca como atingida
                        }
                    }
                }
            }
        break;

        case 3: // Ataque octaedro
            for (int i = 0; i < linhas_matriz_ataque; i++) {         // Mesma lógica do case 1 e 2, agora com ataque_octaedro
                for (int j = 0; j < colunas_matriz_ataque; j++) {
                    if (ataque_octaedro[i][j] == 1) {                // Se a célula do padrão octaedro for 1, é célula a atingir
                        int linha_destino = linha_ataque - centro_linha + i;   // Calcula linha destino
                        int coluna_destino = coluna_ataque - centro_coluna + j; // Calcula coluna destino

                        if (linha_destino >= 0 && linha_destino <= tab_principal &&   // Verifica limites antes de acessar tabuleiro
                            coluna_destino >= 0 && coluna_destino < tab_principal) {
                            tabuleiro[linha_destino][coluna_destino] = 5;            // Marca como atingida
                        }
                    }
                }
            }
        break;

        default: // Caso escolha inválida
            printf("Opção inválida!\n\n");                  // Mensagem caso opcao_ataque não seja 1, 2 ou 3
        break;
    }

    // Exibe o tabuleiro após o ataque
    Exibir_Tabuleiro_Batalha_Naval(tabuleiro);            // Chama a função que imprime o tabuleiro atualizado

    return 0;                                             // Encerra a função main (retorno para o sistema operacional)
}
