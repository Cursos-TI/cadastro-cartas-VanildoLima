#include <stdio.h>

int main() {

    //Desafio Super Trunfo c (Aventureiro);

    // Dados das variáveis para a Carta 1
    char estado1[4];
    char codigo1[30];
    char cidade1[30];
    int populacao1;
    float area1;
    double pib1; // Usando double para o PIB (em bilhões de reais)
    int pontos_turisticos1;

    // Variáveis para os cálculos
    float densidade_populacional1;
    float pib_per_capita1;

    // Dados das variáveis para a Carta 2
    char estado2[4];
    char codigo2[30];
    char cidade2[30];
    long long populacao2;
    double area2;
    double pib2;
    int pontos_turisticos2;

    // Variáveis para os cálculos
    float densidade_populacional2;
    float pib_per_capita2;

    // Apresentação do programa Desafio Super Trunfo c (Aventureiro);
    printf("--- Desafio Super Trunfo c (Aventureiro) ---\n");

    // --- Leitura dos Dados para a Carta 1 ---
    printf("--- Leitura dos Dados da Carta 1 ---\n");

    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade (ex: Sao Paulo): ");
    scanf(" %30[^\n]", cidade1); // Lê a linha até a quebra de linha

    printf("Digite a População (apenas números inteiros): ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%1f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // --- Leitura dos Dados para a Carta 2 ---
    printf("--- Leitura dos Dados da Carta 2 ---\n");

    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade (ex: Rio de Janeiro): ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a População (apenas números inteiros): ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // --- Cálculos ---

    // Carta 1
    // Densidade Populacional = População / Área
    densidade_populacional1 = (float)populacao1 / area1;

    // PIB per Capita = (PIB em bilhões * 1.000.000.000) / População
    // O cálculo é feito com 'float' para o resultado e o PIB em bilhões é convertido para o valor total
    pib_per_capita1 = (float)(pib1 * 1000000000.0) / populacao1;


    // Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)(pib2 * 1000000000.0) / populacao2;


    // --- Exibição dos Resultados ---

    printf("==========================================\n");
    printf("           Resultados das Cartas\n");
    printf("==========================================\n");

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2lf km²\n", area1); // Exibindo área com 2 casas decimais
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n------------------------------------------\n");

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    printf("==========================================\n");

    return 0;
}

