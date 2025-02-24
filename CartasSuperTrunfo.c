#include <stdio.h>

// Função para limpar o buffer de entrada
void limparBuffer() {
    while (getchar() != '\n'); 
}

int main() {
    // Variáveis para as cartas
char codigo1[10], codigo2[10];
char estado1[30], estado2[30];
char cidade1[80], cidade2[80];
float populacao1, populacao2;
float pib1, pib2;
float area1, area2;
int pontos_turisticos1, pontos_turisticos2;
float densidade1, densidade2;
float pib_per_capita1, pib_per_capita2;

    // Informações para a primeira carta
printf("Cadastro da Carta 1\n");
printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
printf("Estado: ");
scanf("%s", estado1); 
limparBuffer();

printf("O código contém o estado mais o número da cidade\n");
printf("Exemplos: A01, B01, C02, D02, assim por diante. \n");
printf("Código: ");
scanf("%s", codigo1); 
limparBuffer();

printf("Escreva o nome da cidade sem espaços\n"); //não consegui deixar cidade com espaços usei isso para resolver
printf("Nome da cidade: ");
scanf(" %s[^\n]", cidade1); 
limparBuffer();

printf("População: ");
scanf("%f", &populacao1);
limparBuffer();

printf("Área (em km²): ");
scanf("%f", &area1);
limparBuffer();

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);
limparBuffer();

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos_turisticos1); 
limparBuffer();


    // Informações para a segunda carta
printf("Cadastro da Carta 2\n");
printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
printf("Estado: ");
scanf("%s", estado2); 
limparBuffer();

printf("O código contém o estado mais o número da cidade\n");
printf("Exemplos: A01, B01, C02, D02, assim por diante. \n");
printf("Código: ");
scanf("%s", codigo2); 
limparBuffer();

printf("Escreva o nome da cidade sem espaços\n"); //não consegui deixar cidade com espaços usei isso para resolver
printf("Nome da cidade: ");
scanf(" %s[^\n]", cidade2); 
limparBuffer();

printf("População: ");
scanf("%f", &populacao2);
limparBuffer();

printf("Área (em km²): ");
scanf("%f", &area2);
limparBuffer();

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);
limparBuffer();

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos_turisticos2); 
limparBuffer();




    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1); 
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1); 
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao1/area1);
    printf("PIB per capita: %.2f reais/habitante\n", pib1/populacao1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2); 
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2); 
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao2/area2);
    printf("PIB per capita: %.2f reais/habitante\n", pib2/populacao2);

    return 0;
}
