#include <stdio.h>   // Biblioteca padrão para entrada e saída (printf, scanf)
#include <ctype.h>   // Biblioteca para manipulação de caracteres (ex: toupper)

int main(){
    // Variáveis para o menu e controle do jogo
    int opcao_menu;              // Guarda a opção de atributo que o jogador quer comparar
    char desisao_jogador;        // Guarda a decisão do jogador se deseja comparar as cartas ou não


    // ================= CARTA 1 ==================
    // Declaração das variáveis que guardam as informações da primeira carta
    int numeros_pontos_turisticos = 0;
    char estado[20], cod_carta[4], nome_cidade[15];
    double area = 0, pib = 0, densidade_populacional = 0, pib_per_capita = 0, super_poder = 0;
    unsigned long int populacao = 0;


    // ================= CARTA 2 ==================
    // Declaração das variáveis que guardam as informações da segunda carta
    char estado1[20], cod_carta1[4], nome_cidade1[15];
    int numeros_pontos_turisticos1 = 0;
    double area1 = 0, pib1 = 0, densidade_populacional1 = 0, pib_per_capita1 = 0, super_poder1 = 0;
    unsigned long int populacao1 = 0;

    
    // ================= ENTRADA DE DADOS (CARTA 1) ==================
    printf("======== Carta 1 ========\n");
    printf("Escolha um estado: ");
    scanf("%19s", estado);  // Lê o nome do estado

    printf("!Código da carta!\nPara o código você deve escolher um número de 01 a 04 e colocar a letra (Exemplo: A01)\nEscolha: ");
    scanf("%s", cod_carta); // Lê o código da carta (ex: A01)

    printf("Escolha o nome da cidade: ");
    scanf("%s", nome_cidade); // Nome da cidade

    printf("Número de habitantes da cidade: ");
    scanf("%u", &populacao); // População

    printf("A área da cidade: ");
    scanf("%lf", &area); // Área da cidade

    printf("O PIB (Produto Interno Bruto) da cidade: ");
    scanf("%lf", &pib); // PIB total

    printf("Quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numeros_pontos_turisticos); // Pontos turísticos
    printf("\n\n");

    // ================= ENTRADA DE DADOS (CARTA 2) ==================
    printf("======== Carta 2 ========\n");
    printf("Escolha um estado: ");
    scanf("%19s", estado1);

    printf("!Código da carta!\nPara o código você deve escolher um número de 01 a 04 e colocar a letra (Exemplo: A01)\nEscolha: ");
    scanf("%s", cod_carta1);

    printf("Escolha o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Número de habitantes da cidade: ");
    scanf("%u", &populacao1);

    printf("A área da cidade: ");
    scanf("%lf", &area1);

    printf("O PIB (Produto Interno Bruto) da cidade: ");
    scanf("%lf", &pib1);

    printf("Quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numeros_pontos_turisticos1);
    printf("\n\n");

    // ================= CÁLCULOS DOS ATRIBUTOS ==================
    densidade_populacional = (double) populacao / area;     // Calcula densidade populacional
    densidade_populacional1 = (double) populacao1 / area1;

    pib_per_capita = pib / (double) populacao;              // PIB per capita
    pib_per_capita1 = pib1 / (double) populacao1;

    // "Super poder" é uma soma de vários atributos — critério definido pelo autor
    super_poder = ((double) populacao + area + pib + (double) numeros_pontos_turisticos + pib_per_capita + densidade_populacional);
    super_poder1 = ((double) populacao1 + area1 + pib1 + (double) numeros_pontos_turisticos1 + pib_per_capita1 + densidade_populacional1);

    // ================= EXIBIÇÃO DAS CARTAS ==================
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %u\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeros_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Super poder: %.2f\n\n", super_poder);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeros_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super poder: %.2f\n\n", super_poder1);
    
    // ================= MENU DE COMPARAÇÃO ==================
    printf("Deseja comparar as cartas? S/N\n");
    scanf(" %c", &desisao_jogador);  // Lê a decisão (com espaço antes para ignorar '\n')
    desisao_jogador = toupper(desisao_jogador); // Transforma em maiúsculo
    printf("\n");

    // ================= DECISÃO DO JOGADOR ==================
    switch (desisao_jogador){
        case 'S':  // Se o jogador deseja comparar
            {
            char comparar_novamete;
            int opcao_menu1;

            printf("************************************************************\n");
            printf("********************Comparação de cartas********************\n");
            printf("************************************************************\n\n");

            printf("Qual atributo deseja comparar?\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");
            printf("Escolha a opção: ");
            scanf("%d", &opcao_menu);
            printf("\n");

            // Pergunta se o jogador quer comparar outro atributo
            printf("Deseja comparar mais algum atributo? S/N\n");
            scanf(" %c", &comparar_novamete);
            comparar_novamete = toupper(comparar_novamete);

            if (comparar_novamete == 'S'){
                // Novo menu, se o jogador quiser comparar outro atributo
                printf("************************************************************\n");
                printf("********************Comparação de cartas********************\n");
                printf("************************************************************\n\n");

                printf("Qual atributo deseja comparar?\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Número de pontos turísticos\n");
                printf("5. Densidade demográfica\n");
                printf("Escolha a opção: ");
                scanf("%d", &opcao_menu1);
                printf("\n");
            }else{
                printf("Comparando atributo %d ...\n\n", opcao_menu);
            }

            // ================= COMPARAÇÕES ==================
            switch (opcao_menu){

                case 1: // População
                    printf("************************************************************\n");
                    printf("###### %s VS %s ######\n", estado, estado1);
                    printf("Atributo: População\n");
                    printf("Carta 1 - %s: %u\n", nome_cidade, populacao);
                    printf("Carta 2 - %s: %u\n", nome_cidade1, populacao1);
                    printf("Resultado: ");
                    if (populacao > populacao1)
                        printf("Carta 1 (%s) venceu!\n", estado);
                    else if (populacao == populacao1)
                        printf("Empate!\n");
                    else
                        printf("Carta 2 (%s) venceu!\n", estado1);
                    printf("************************************************************\n");
                break;
                
                case 2: // Área
                    printf("************************************************************\n");
                    printf("###### %s VS %s ######\n", estado, estado1);
                    printf("Atributo: Área\n");
                    printf("Carta 1 - %s: %.2f Km²\n", nome_cidade, area);
                    printf("Carta 2 - %s: %.2f Km²\n", nome_cidade1, area1);
                    printf("Resultado: ");
                    if (area > area1)
                        printf("Carta 1 (%s) venceu!\n", estado);
                    else if (area == area1)
                        printf("Empate!\n");
                    else
                        printf("Carta 2 (%s) venceu!\n", estado1);
                    printf("************************************************************\n");
                break;

                case 3: // PIB
                    printf("************************************************************\n");
                    printf("###### %s VS %s ######\n", estado, estado1);
                    printf("Atributo: PIB\n");
                    printf("Carta 1 - %s: %.2f bilhões de reais\n", nome_cidade, pib);
                    printf("Carta 2 - %s: %.2f bilhões de reais\n", nome_cidade1, pib1);
                    printf("Resultado: ");
                    if (pib > pib1)
                        printf("Carta 1 (%s) venceu!\n", estado);
                    else if (pib == pib1)
                        printf("Empate!\n");
                    else
                        printf("Carta 2 (%s) venceu!\n", estado1);
                    printf("************************************************************\n");
                break;

                case 4: // Pontos turísticos
                    printf("************************************************************\n");
                    printf("###### %s VS %s ######\n", estado, estado1);
                    printf("Atributo: Pontos Turísticos\n");
                    printf("Carta 1 - %s: %d\n", nome_cidade, numeros_pontos_turisticos);
                    printf("Carta 2 - %s: %d\n", nome_cidade1, numeros_pontos_turisticos1);
                    printf("Resultado: ");
                    if (numeros_pontos_turisticos > numeros_pontos_turisticos1)
                        printf("Carta 1 (%s) venceu!\n", estado);
                    else if (numeros_pontos_turisticos == numeros_pontos_turisticos1)
                        printf("Empate!\n");
                    else
                        printf("Carta 2 (%s) venceu!\n", estado1);
                    printf("************************************************************\n");
                break;

                case 5: // Densidade populacional (menor vence)
                    printf("************************************************************\n");
                    printf("###### %s VS %s ######\n", estado, estado1);
                    printf("Atributo: Densidade Populacional\n");
                    printf("Carta 1 - %s: %.2f hab/Km²\n", nome_cidade, densidade_populacional);
                    printf("Carta 2 - %s: %.2f hab/Km²\n", nome_cidade1, densidade_populacional1);
                    printf("Resultado: ");
                    if (densidade_populacional < densidade_populacional1)
                        printf("Carta 1 (%s) venceu!\n", estado);
                    else if (densidade_populacional == densidade_populacional1)
                        printf("Empate!\n");
                    else
                        printf("Carta 2 (%s) venceu!\n", estado1);
                    printf("************************************************************\n");
                break;
                
                default:
                    printf("!!!Opção inválida!!!\n");
                break;
            }
        }
        break;

        // Se o jogador não quiser comparar
        case 'N':
            printf("Fim!!!");
        break;

        default:
            printf("Opção inválida");
        break;
    }

    return 0;
}
