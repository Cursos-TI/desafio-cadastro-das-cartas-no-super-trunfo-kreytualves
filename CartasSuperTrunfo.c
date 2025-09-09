#include <stdio.h>

int main() {
    char estado1[30];
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    
    char estado2[30];
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Digite o estado: ");
    scanf("%29s", estado1);

    printf("Digite o codigo: ");
    scanf(" %3s", codigo1);

    printf("Digite a cidade: ");
    scanf("%29s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o pib em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &pontosturisticos1);
    
    printf("Digite o estado: ");
    scanf("%29s", estado2);
    
    printf("Digite o codigo: ");
    scanf(" %3s", codigo2);
    
    printf("Digite a cidade: ");
    scanf("%29s", cidade2);
    
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o pib em bilhoes de reais: ");
    scanf("%f", &pib2);
    
    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
   
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}
