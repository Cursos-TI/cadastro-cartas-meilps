#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[2], estado2[2]; 
  char codigo1[3], codigo2[3];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  int turismo1, turismo2;
  float area1, area2;
  float pib1, pib2;
  
  // Área para entrada de dados
  printf("Digite o estado da primeira carta: ");
    scanf("%s", estado1);
  printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);
  printf("Digite a cidade da primeira carta: ");
    scanf("%s", cidade1);
  printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);
  printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);
  printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &turismo1);
    
  printf("Digite o estado da segunda carta: ");
    scanf("%s", estado2);
  printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);
  printf("Digite a cidade da segunda carta: ");
    scanf("%s", cidade2);
  printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);
  printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);
  printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &turismo2);

  // Área para exibição dos dados da cidade
  printf("\n\n --- Carta 1: --- \n\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s%s\n", estado1, codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2fkm²\n", area1);
  printf("PIB: %.2f R$\n", pib1);
  printf("Pontos Turísticos: %d\n\n", turismo1);

  printf("--- Carta 2: --- \n\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s%s\n", estado2, codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f R$\n", pib2);
  printf("Pontos Turísticos: %d\n\n", turismo2);

return 0;
} 

