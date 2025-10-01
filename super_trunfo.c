#include <stdio.h>

int main (){
    //Variáveis da carta 1:
    char estado1;
    char cod_carta1[3];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int ponto_turisticos1;

    //Variáveis da carta 2:
    char estado2;
    char cod_carta2[3];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int ponto_turistico2;

    //pedindo informações da carta1:
    
    //carta
    printf("Carta 1: \n");

    //Estado
    printf("Digite o estado da carta 1 - de A a H: ");
    scanf("%c", &estado1);
    //cod carta
    printf("Digite o código da carta 1 - A letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", &cod_carta1);
    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1);
    //população
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao1);
    //área
    printf("Digite a àrea em km da cidade: ");
    scanf("%f", &area1);
    //PIB
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    //pontos turisticos
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &ponto_turisticos1);

    
    //pedindo informações da carta 2:

    //Carta
    printf("Carta 2: \n");

    //Estado
    printf("Digite o estado da carta 2 - de A a H: ");
    scanf("%s", &estado2);
    //cod carta
    printf("Digite o código da carta 2 - A letra do estado seguida de um número de 01 a 04:: ");
    scanf("%s", &cod_carta2);
    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);
    //população
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao2);
    //área
    printf("Digite a àrea  em km2 da cidade: ");
    scanf("%f", &area2);
    //PIB
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    //pontos turisticos
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &ponto_turistico2);

    // Linha em branco para separar
    printf("\n");

    //Mostrando a carta 1:

    //carta
    printf("Carta 1: \n");
    printf("Estado da carta 1: %c\n", estado1);
    printf("código da carta 1: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", ponto_turisticos1);

    // Linha em branco para separar
    printf("\n");

    //Mostrando a carta 2:

    //carta
    printf("Carta 2: \n");
    printf("Estado da carta 2: %c\n", estado1);
    printf("código da carta 2: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", ponto_turistico2);

    printf("Novo commint\n");


    //Fim do programa
    return 0;


}