#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Operadores relacionais e modificadores de dados

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Variáveis para armazenar os dados da primeira carta
    unsigned long int populacao_carta1;
    int pontos_turisticos_carta1 ;
    char estado_carta1 [3];
    char codigo_carta1 [10];
    char nome_carta1 [20];
    float area_carta1;
    float pib_carta1;

    // Variáveis para armazenar os dados da segunda carta
    unsigned long int populacao_carta2;
    int pontos_turisticos_carta2;
    char estado_carta2 [3];
    char codigo_carta2 [10];
    char nome_carta2 [20];
    float area_carta2;
    float pib_carta2;

    // Área para entrada de dados da carta 1
    printf("Bem-vindo(a) ao jogo super trunfo, com o tema paises!\n");
    printf("Para começar, você devera realizar o cadastro de 2 cartas, cada uma respresentando uma cidade.\n");

    printf("\nDigite a sigla do estado em que essa cidade esta localizada: ");
    scanf(" %s", estado_carta1);
    printf("\nDigite o codigo dessa cidade colocando as 2 primeiras letras do estado seguidas da numeração desse cidade dentro desse estado. (Ex MG01): ");
    scanf(" %s", codigo_carta1);
    printf("\nDigite o nome da cidade: ");
    scanf(" %s", nome_carta1);
    printf("\nDigite a populacao da cidade: ");
    scanf(" %lu", &populacao_carta1);
    printf("\nDigite a area dessa cidade em quilometros quadrados: ");
    scanf(" %f", &area_carta1);
    printf("\nDigite o pib da cidade: ");
    scanf(" %f", &pib_carta1);
    printf("\nDigite o numero de pontos turisticos dessa cidade: ");
    scanf(" %d", &pontos_turisticos_carta1);
    float densidade_populacional_carta1 = populacao_carta1 / area_carta1;
    float pib_per_capita_carta1 = pib_carta1 / populacao_carta1;
    float super_poder_carta1 = (float) populacao_carta1 + (float) pontos_turisticos_carta1 + area_carta1 + pib_carta1 + pib_per_capita_carta1 + 1 / densidade_populacional_carta1;

    // Área para exibição dos dados da cidade 1
    printf("Cidade cadastrada com sucesso!\n");
    printf(" Estado: %s\n Codigo: %s\n Nome: %s\n Populacao: %lu\n Area: %.2f km²\n PIB: %.2f\n Pontos Turisticos: %d\n Densidade populacional: %.2f\n Pib per capita: %.2f\n Super poder: %.2f\n", estado_carta1, codigo_carta1, nome_carta1, populacao_carta1, area_carta1, pib_carta1, pontos_turisticos_carta1, densidade_populacional_carta1, pib_per_capita_carta1, super_poder_carta1);
    
    // Área para entrada de dados da carta 2

    printf("\nDigite a sigla do estado em que essa cidade esta localizada: ");
    scanf(" %s", estado_carta2);
    printf("\nDigite o codigo dessa cidade colocando as 2 primeiras letras do estado seguidas da numeracao desse cidade dentro desse estado. (Ex MG01): ");
    scanf(" %s", codigo_carta2);
    printf("\nDigite o nome da cidade: ");
    scanf(" %s", nome_carta2);
    printf("\nDigite a populacao da cidade: ");
    scanf(" %lu", &populacao_carta2);
    printf("\nDigite a area dessa cidade em quilometros quadrados: ");
    scanf(" %f", &area_carta2);
    printf("\nDigite o pib da cidade: ");
    scanf(" %f", &pib_carta2);
    printf("\nDigite o numero de pontos turisticos dessa cidade: ");
    scanf(" %d", &pontos_turisticos_carta2);
    float densidade_populacional_carta2 = populacao_carta2 / area_carta2;
    float pib_per_capita_carta2 = pib_carta2 / populacao_carta2;
    float super_poder_carta2 = (float) populacao_carta2 + (float) pontos_turisticos_carta2 + area_carta2 + pib_carta2 + pib_per_capita_carta2 + 1 / densidade_populacional_carta2;

    // Área para exibição dos dados da cidade 2
    printf("Cidade cadastrada com sucesso!\n");
    printf(" Estado: %s\n Codigo: %s\n Nome: %s\n Populacao: %lu\n Area: %.2f km²\n PIB: %.2f\n Pontos Turisticos: %d\n Densidade populacional: %.2f\n Pib per capita: %.2f\n Super poder: %.2f\n", estado_carta2, codigo_carta2, nome_carta2, populacao_carta2, area_carta2, pib_carta2, pontos_turisticos_carta2, densidade_populacional_carta2, pib_per_capita_carta2, super_poder_carta2);

    // Comparando atributos das cartas utilizando operadores relacionais

    int resultado_populacao = populacao_carta1 > populacao_carta2;
    int resultado_area = area_carta1 > area_carta2;
    int resultado_pib = pib_carta1 > pib_carta2;
    int resultado_pontos_turisticos = pontos_turisticos_carta1 > pontos_turisticos_carta2;
    int resultado_densidade_populacional = densidade_populacional_carta1 < densidade_populacional_carta2; // Menor densidade populacional é melhor
    int resultado_pib_per_capita = pib_per_capita_carta1 > pib_per_capita_carta2;
    int resultado_super_poder = super_poder_carta1 > super_poder_carta2;

    printf("\nComparando os super poderes das cartas, sendo 0 = Falso e 1 = Verdadeiro\n");
    printf("\nPopulação: Carta 1 venceu (%d)\n Área: Carta 1 venceu (%d)\n PIB: Carta 1 venceu (%d)\n Pontos Turísticos: Carta 1 venceu (%d)\n Densidade populacional: Carta 1 venceu (%d)\n PIB per capita: Carta 1 venceu (%d)\n Super poder: Carta 1 venceu (%d)", resultado_populacao, resultado_area, resultado_pib, resultado_pontos_turisticos, resultado_densidade_populacional, resultado_pib_per_capita, resultado_super_poder);



    return 0;

}  