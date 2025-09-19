#include <stdio.h>

// Desafio Super Trunfo - Países
// Comparações completas + Super Poder
// Tema 3 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo - Desafio Novato

int main() {

    // Declaração das variaveis da Carta 1
    char estado1 [20]; 
    char codigo1 [5];
    char cidade1 [20];
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidadePopulacional1; 
    float pibPerCapita1;
    
    // Declaração das variaveis da Carta 2
    char estado2 [20];
    char codigo2 [5];
    char cidade2 [20];
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // POPULAÇÃO COMO unsigned long int
    unsigned long int populacao1, populacao2; 

    // SUPER PODER
    float superPoder1, superPoder2;

    // ------ Entrada da Carta 1 ------
    printf("Digite os dados da Carta 1:\n");
    printf("Nome do Estado: ");
    scanf(" %[^\n]", estado1); 

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1); 

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); 

    printf("Populacao: ");
    scanf("%lu", &populacao1); 

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calcular Densidade Populacional e PIB per Capita - Carta 1
    densidadePopulacional1 = (float) populacao1 / area1; 
    pibPerCapita1 = (float) pib1 / populacao1 * 1000000000; 
    
    // ------ Entrada da Carta 2 ------
    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome do Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2); 

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calcular Densidade Populacional e PIB per Capita - Carta 2
    densidadePopulacional2 = (float) populacao2 / area2; 
    pibPerCapita2 = (float) pib2 / populacao2 * 1000000000; 

    // Calcular SUPER PODER
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // ----- Exibição dos Dados das Cartas -----
    printf("\nCarta 1:\n"); 
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu hab\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1); 
    printf("PIB per Capita: R$ %.2f por habitante\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n"); 
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu hab\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2); 
    printf("PIB per Capita: R$ %.2f por habitante\n", pibPerCapita2); 
    printf("Super Poder: %.2f\n", superPoder2);

    // Tema 3 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo
    // 1º Desafio - NÍVEL NOVATO 
    // Realizar: comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.
    // ------ Comparações das Cartas SUPER TRUNFO ------
    printf("\n---- Comparação de Cartas ----\n");

    // Apresentação Geral das Cartas
    printf("--- Apresentação Cartas (SUPER PODER) ---\n");
    printf("Carta 1 - %s (%s - %s) - SuperPoder: %.2f\n", cidade1, estado1, codigo1, superPoder1);
    printf("Carta 2 - %s (%s - %s) - SuperPoder: %.2f\n\n", cidade2, estado2, codigo2, superPoder2);

    // População
    if (populacao1 > populacao2){
        printf("Populacao: Carta 1 venceu!\n");
    } else {
        printf("Populacao: Carta 2 venceu!\n");
    }
    
    // Área
    if (area1 > area2){ 
        printf("Area: Carta 1 venceu!\n");
    } else { 
        printf("Area: Carta 2 venceu!\n");
    }    

    // PIB
    if (pib1 > pib2){ 
        printf("PIB: Carta 1 venceu!\n");
    } else { 
        printf("PIB: Carta 2 venceu!\n");
    }
    
    // Pontos turísticos
    if (pontos_turisticos1 > pontos_turisticos2){ 
        printf("Pontos Turisticos: Carta 1 venceu!\n");
    } else { 
        printf("Pontos Turisticos: Carta 2 venceu!\n");
    }
    
    // Densidade Populacional (vence o MENOR valor)
    if (densidadePopulacional1 < densidadePopulacional2){ 
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }
    
    // PIB per Capita
    if (pibPerCapita1 > pibPerCapita2){ 
        printf("PIB per Capita: Carta 1 venceu!\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu!\n");
    }
    
    // Super Poder
    if (superPoder1 > superPoder2){
        printf("SUPER PODER: Carta 1 venceu!\n\n");
    } else {
        printf("SUPER PODER: Carta 2 venceu!\n\n");
    }
    
    return 0;
}
