#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // --- CADASTRO DA CARTA 1 ---
    printf("\n*** DIGITE OS DADOS DA CARTA 1 ***\n");
    printf("Escolha o estado da carta 1 (A ate H): ");
    scanf(" %c", &estado1);
    
    printf("Escolha o codigo (Ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Escolha a cidade: ");
    scanf("%s", cidade1);
    
    printf("Qual a populacao? ");
    scanf("%d", &populacao1);
    
    printf("Area em metros quadrados? ");
    scanf("%f", &area1);
    
    printf("PIB da cidade: ");
    scanf("%f", &pib1);
    
    printf("Quantos pontos turisticos existem? ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1;

    // Calculando o Super Poder da Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + (1 / densidade1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n*** DIGITE OS DADOS DA CARTA 2 ***\n");
    printf("Escolha o estado da carta 2 (A ate H): ");
    scanf(" %c", &estado2);

    printf("Escolha o codigo (Ex: A01): ");
    scanf("%s", &codigo2);

    printf("Escolha a cidade: ");
    scanf("%s", cidade2);

    printf("Qual a populacao? ");
    scanf("%d", &populacao2);

    printf("Area em metros quadrados? ");
    scanf("%f", &area2);
    
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Quantos pontos turisticos existem? ");
    scanf("%d", &pontos2);

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;

    // Calculando o Super Poder da Carta 1
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1 / densidade2);

    // --- EXIBIÇÃO DAS CARTAS ---
  
  printf("\n===================================\n");
  printf("          CARTA 1 - %s\n", cidade1);
  printf("===================================\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Populacao: %d habitantes\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: R$ %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
  printf("SUPER PODER: %.2f\n", superPoder1);

  printf("\n===================================\n");
  printf("          CARTA 2 - %s\n", cidade2);
  printf("===================================\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Populacao: %d habitantes\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
  printf("SUPER PODER: %.2f\n", superPoder2);
  printf("===================================\n\n");

    // --- COMPARAÇÃO DAS CARTAS ---
    
  printf("\n========= COMPARACOES =========\n");
  printf("\n==========================================================\n");
  printf("\n========= POPULAÇÃO =========\n");

  if (populacao1 > populacao2) {
    printf("Vencedor: %s\n", cidade1);
    }

    else {
      printf("Vencedor: %s\n", cidade2);
    }

  printf("\n==========================================================\n");
  printf("\n========= AREA =========\n");

  if (area1 > area2) {
    printf("Vencedor: %s\n", cidade1);
    }

    else {
      printf("Vencedor: %s\n", cidade2); 
    }

  printf("\n==========================================================\n");
  printf("\n========= PIB =========\n");

  if (pib1 > pib2) {
    printf("Vencedor: %s\n", cidade1);
    }

    else {
     printf("Vencedor: %s\n", cidade2); 
    }

  printf("\n==========================================================\n");
  printf("\n========= PONTOS TURÍSTICOS =========\n");

  if (pontos1 > pontos2) {
    printf("Vencedor: %s\n", cidade1);
    }

    else {
      printf("Vencedor: %s\n", cidade2); 
    }
  
  printf("\n==========================================================\n");
  printf("\n========= DENSIDADE POPULACIONAL =========\n");

  if (densidade1 < densidade2) {
    printf("Vencedor: %s\n", cidade1);
    }

    else {
      printf("Vencedor: %s\n", cidade2); 
    }

  printf("\n==========================================================\n");
  printf("\n========= PONTOS TURÍSTICOS =========\n");

  if (pibPerCapita1 > pibPerCapita2) {
    printf("Vencedor: %s\n", cidade1);
    }

    else {
      printf("Vencedor: %s\n", cidade2); 
    }

  printf("\n==========================================================\n");
  printf("\n========= SUPER TRUNFO =========\n");

  if (superPoder1 > superPoder2) {
    printf("Vencedor: %s\n", cidade1);
    }

    else {
      printf("Vencedor: %s\n", cidade2); 
    }

  return 0;
}