#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Dados das variáveis para a Carta 1
    char estado1[4];
    char codigo1[30];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    double pib1; // Usando double para o PIB (em bilhões de reais)
    int pontos_turisticos1;

    // Variáveis para os cálculos
    float densidade_populacional1, pib_per_capita1, super_poder1;

    // Dados das variáveis para a Carta 2
    char estado2[4];
    char codigo2[30];
    char cidade2[30];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int pontos_turisticos2;

    // Variáveis para os cálculos
    float densidade_populacional2, pib_per_capita2, super_poder2;

    // --- Leitura Desafio Super trunfo C (Mestre) --
    printf("--- Desafio Super trunfo c (Mestre) ---\n");

    // Leitura dos dados da Carta 1
    printf("--- Leitura dos Dados da Carta 1 ---\n");
    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade (ex: São Paulo): ");
    scanf(" %30[^\n]", cidade1); // Lê a linha até a quebra de linha

    printf("Digite a População (apenas números inteiros): ");
    scanf("%lu", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // --- Leitura dos Dados para a Carta 2 ---
    printf("--- Leitura dos Dados da Carta 2 ---\n");

    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade (ex: Rio de Janeiro): ");
    scanf(" %30[^\n]", cidade2);

    printf("Digite a População (apenas números inteiros): ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Cálculos - Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)(pib1 * 1000000000.0) / populacao1;
    super_poder1 = (float)populacao1 + area1 + (float)(pib1 * 1000000000.0) +
                   pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);

    // Cálculos - Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)(pib2 * 1000000000.0) / populacao2;
    super_poder2 = (float)populacao2 + area2 + (float)(pib2 * 1000000000.0) +
                   pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

                    // --- Exibição dos Resultados ---
                   // Exibição dos Dados das Cartas
    printf("==========================================\n");
    printf("           Resultados das Cartas\n");
    printf("==========================================\n");

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1); // Exibindo área com 2 casas decimais
    printf("PIB: %.2lf bilhões de reais\n", pib1); 
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("Super Poder: %.2f\n", super_poder1);
    printf("\n------------------------------------------\n");

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n==========================================\n");
    printf("         Comparação de Cartas\n");
    printf("==========================================\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);
    printf("==========================================\n");


    // ==============================
    // NOVA PARTE: ESCOLHA DE ATRIBUTOS E COMPARAÇÃO
    // ==============================

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;

    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &atributo1);

    switch(atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos_turisticos1; valor1_c2 = pontos_turisticos2; break;
        case 5: valor1_c1 = densidade_populacional1; valor1_c2 = densidade_populacional2; break;
        case 6: valor1_c1 = pib_per_capita1; valor1_c2 = pib_per_capita2; break;
        default: printf("Opção inválida! Encerrando.\n"); return 0;
    }

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == atributo1) continue;
        switch(i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
        }
    }
    printf("Digite a opção: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6) {
        printf("Opção inválida ou repetida! Encerrando.\n");
        return 0;
    }

    switch(atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos_turisticos1; valor2_c2 = pontos_turisticos2; break;
        case 5: valor2_c1 = densidade_populacional1; valor2_c2 = densidade_populacional2; break;
        case 6: valor2_c1 = pib_per_capita1; valor2_c2 = pib_per_capita2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Cálculo da soma total
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\n==========================================\n");
    printf("         RESULTADO FINAL DA RODADA\n");
    printf("==========================================\n");
    printf("Carta 1 (%s) x Carta 2 (%s)\n", cidade1, cidade2);

    printf("\nAtributo 1 escolhido: %d\n", atributo1);
    printf("Carta 1: %.2f | Carta 2: %.2f\n", valor1_c1, valor1_c2);

    printf("\nAtributo 2 escolhido: %d\n", atributo2);
    printf("Carta 1: %.2f | Carta 2: %.2f\n", valor2_c1, valor2_c2);

    printf("\nSoma dos Atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);

    // Comparações com exceção da densidade demográfica
    float vitoria1 = 0, vitoria2 = 0;

    vitoria1 += (atributo1 == 5) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    vitoria2 += (atributo1 == 5) ? (valor1_c2 < valor1_c1) : (valor1_c2 > valor1_c1);

    vitoria1 += (atributo2 == 5) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    vitoria2 += (atributo2 == 5) ? (valor2_c2 < valor2_c1) : (valor2_c2 > valor2_c1);

    printf("\nParciais: Carta 1 venceu %0.f atributos, Carta 2 venceu %0.f atributos.\n", vitoria1, vitoria2);

    // Resultado final com operador ternário
    (soma1 == soma2) ? printf("\nEmpate!\n") :
    (soma1 > soma2) ? printf("\nCarta 1 (%s) venceu a rodada!\n", cidade1) :
                      printf("\nCarta 2 (%s) venceu a rodada!\n", cidade2);

    printf("==========================================\n");

    return 0;
}
