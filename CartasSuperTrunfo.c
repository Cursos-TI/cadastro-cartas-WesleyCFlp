#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis para armazenar os dados da primeira carta
  int populacao_carta1 = 0;
  int pontos_turisticos_carta1 = 0;
  char estado_carta1 [2];
  char codigo_carta1 [10];
  char nome_carta1 [50];
  float area_carta1 = 0.0;
  float pib_carta1 = 0.0;
  // Variáveis para armazenar os dados da segunda carta
  int populacao_carta2 = 0;
  int pontos_turisticos_carta2 = 0;
  char estado_carta2 [50];
  char codigo_carta2 [10];
  char nome_carta2 [50];
  float area_carta2 = 0.0;
  float pib_carta2 = 0.0;

  // Área para entrada de dados da carta 1
  printf("Bem-vindo(a) ao jogo super trunfo, com o tema países!\n");
  printf("Para começar, você deverá realizar o cadastro de 2 cartas, cada uma respresentando uma cidade.\n");

  printf("Digite a sigla do estado em que essa cidade está localizada:\n");
  scanf(" %s", estado_carta1);
  printf("Digite o código dessa cidade colocando as 2 primeiras letras do estado seguidas da numeração desse cidade dentro desse estado. (Ex MG01):\n");
  scanf(" %s", codigo_carta1);
  printf("Digite o nome da cidade:\n");
  scanf(" %s", nome_carta1);
  printf("Digite a população da cidade:\n");
  scanf(" %d", &populacao_carta1);
  printf("Digite a área dessa cidade em quilômetros quadrados:\n");
  scanf(" %f", &area_carta1);
  printf("Digite o pib da cidade:\n");
  scanf(" %f", &pib_carta1);
  printf("Digite o número de pontos turísticos dessa cidade:\n");
  scanf(" %d", &pontos_turisticos_carta1);

  // Área para exibição dos dados da cidade 1
  printf("Cidade cadastrada com sucesso!\n");
  printf(" Estado: %s\n Código: %s\n Nome: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f\n Pontos Turísticos: %d\n", estado_carta1, codigo_carta1, nome_carta1, populacao_carta1, area_carta1, pib_carta1, pontos_turisticos_carta1);
 
  // Área para entrada de dados da carta 2

  printf("Digite a sigla do estado em que essa cidade está localizada:\n");
  scanf(" %s", estado_carta2);
  printf("Digite o código dessa cidade colocando as 2 primeiras letras do estado seguidas da numeração desse cidade dentro desse estado. (Ex MG01):\n");
  scanf(" %s", codigo_carta2);
  printf("Digite o nome da cidade:\n");
  scanf(" %s", nome_carta2);
  printf("Digite a população da cidade:\n");
  scanf("%d", &populacao_carta2);
  printf("Digite a área dessa cidade em quilômetros quadrados:\n");
  scanf(" %f", area_carta2);
  printf("Digite o pib da cidade:\n");
  scanf(" %f", pib_carta2);
  printf("Digite o número de pontos turísticos dessa cidade:\n");
  scanf(" %d", &pontos_turisticos_carta2);

  // Área para exibição dos dados da cidade
  printf("Cidade cadastrada com sucesso!\n");
  printf(" Estado: %s\n Código: %s\n Nome: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f\n Pontos Turísticos: %d\n", estado_carta2, codigo_carta2, nome_carta2, populacao_carta2, area_carta2, pib_carta2, pontos_turisticos_carta2);


return 0;
} 
