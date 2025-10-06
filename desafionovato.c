#include <stdio.h>

int main()
{

    printf("Desafio Super Trunfo - Países\n");
    printf("Novo commit\n");

    // atributos da primeira carta:
    char pais1[20];
    char estado1[20];
    char codigo_da_carta1[5];
    char nome_da_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float densidade_demografica1;
    float pib_per_capita1;

    // Entrada de dados da primeira carta
    printf("Qual o seu País?\n");
    scanf("%s", pais1);

    printf("Qual o seu Estado:\n");
    scanf(" %s", estado1);

    printf("Qual o codigo da carta:\n");
    scanf("%s", codigo_da_carta1);

    printf("Qual o nome da cidade:\n");
    scanf("%s", nome_da_cidade1);

    printf("Qual a populacao da sua cidade:\n");
    scanf(" %d", &populacao1);

    printf("qual o tamanho da area da sua cidade:\n");
    scanf(" %f", &area1);

    printf("qual o pib da sua cidade:\n");
    scanf(" %f", &pib1);

    printf("qual a quantidade de pontos turisticos da sua cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos1);

    // atributos da segunda carta:
    char pais2[15];
    char estado2[20];
    char codigo_da_carta2[5];
    char nome_da_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade_demografica2;
    float pib_per_capita2;

    // entrada de dados da segunda carta:
    printf("Qual o seu País?\n");
    scanf("%s", pais2);

    printf("Qual o seu Estado:\n");
    scanf(" %s", estado2);

    printf("Qual o codigo da carta:\n");
    scanf(" %s", codigo_da_carta2);

    printf("Qual o nome da cidade:\n");
    scanf(" %19[^\n]", nome_da_cidade2);

    printf("Qual a populacao da sua cidade:\n");
    scanf(" %d", &populacao2);

    printf("qual o tamanho da area da sua cidade:\n");
    scanf(" %f", &area2);

    printf("qual o pib da sua cidade:\n");
    scanf(" %f", &pib2);

    printf("qual a quantidade pontos turisticos da sua cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos2);

    // Saída de dados da primeira carta:
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("o codigo é: %s\n", codigo_da_carta1);
    printf("Cidade:%s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos1);

    // calculo carta 1
    densidade_demografica1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // resultado carta 1
    printf("Densidade populacional: %.2f hab/km²\n", densidade_demografica1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    // Saída de dados da segunda carta:
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("O codigo é: %s\n", codigo_da_carta2);
    printf("Cidade:%s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos2);

    // calculo carta 2
    densidade_demografica2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // resultado carta 2
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade_demografica2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    // resultados
    printf("\n===== Resultado Final =====\n");

    // calculo super poder carta 1
    float super_poder1 = (float)populacao1 + area1 + pib1 + (float)numero_de_pontos_turisticos1 + pib_per_capita1 + (1 / densidade_demografica1);

    // Resultado super poder carta 1
    printf("Super poder Carta 1: %.2f\n", super_poder1);

    // Calculo do Super Poder da carta 2
    float super_poder2 = (float)populacao2 + area2 + pib2 + (float)numero_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_demografica2);

    // Resultado super poder carta 2
    printf("Super Poder Carta 2: %.2f\n", super_poder2);

    // Comparação das Cartas 1 e 2
    if (populacao1 > populacao2)
    {
        printf("A Carta 1 tem a maior população!\n");
    }
    else
    {
        printf("A carta 2 tem a maior polução!\n");
    }
    if (area1 > area2)
    {
        printf("A Área da Carta 1 é maior!\n");
    }
    else
    {
        printf("A Área da Carta 2 é maior!\n");
    }
    if (pib1 > pib2)
    {
        printf("O PIB da Carta 1 é maior!\n");
    }
    else
    {
        printf("O PIB da Carta 2 é maior\n");
    }

    if (densidade_demografica1 < densidade_demografica2)
    {
        printf("A densidade Demográfica da Carta 1 é menor!\n");
    }
    else
    {
        printf("A densidade Demográficademografica da carta 2 é menor!\n");
    }

    if (super_poder1 > super_poder2)
    {
        printf("A carta vencedora é: Carta 1 - %s (%c)\n", pais1, estado1);
    }
    else if (super_poder2 > super_poder1)
    {
        printf("A carta vencedora é: Carta 2 - %s (%c)\n", pais2, estado2);
    }
    else
    {
        printf("Resultado: Empate entre %s e %s!\n", pais1, pais2);
    }


    // MENU INTERATIVO //
    int opcao;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    scanf("%d", &opcao);
    
    //LÓGICA COMPARAÇÃO//

    switch (opcao) {
    case 1:
    printf("\n=== Resultado da Comparação ===\n");
    printf("Atributo: População\n");
    printf("%s: %d habitantes\n", pais1, populacao1);
    printf("%s: %d habitantes\n", pais2, populacao2);
    if (populacao1 > populacao2)
    printf("Vencedor: %s\n", pais1);
    else if (populacao2 > populacao1)
    printf("Vencedor: %s\n", pais2);
    else
    printf("Empate!\n");
    break;

    case 2:
    printf("\n=== Resultado da Comparação ===\n");
    printf("Atributo: Área\n");
    printf("%s: %.2f km²\n", pais1, area1);
    printf("%s: %.2f km²\n", pais2, area2);
    if (area1 > area2)
    printf("Vencedor: %s\n", pais1);
    else if (area2 > area1)
        printf("Vencedor: %s\n", pais2);
    else
    printf("Empate!\n");
    break;

    case 3:
    printf("\n=== Resultado da Comparação ===\n");
    printf("Atributo: PIB\n");
    printf("%s: %.2f bilhões\n", pais1, pib1);
    printf("%s: %.2f bilhões\n", pais2, pib2);
    if (pib1 > pib2)
    printf("Vencedor: %s\n", pais1);
    else if (pib2 > pib1)
    printf("Vencedor: %s\n", pais2);
    else
    printf("Empate!\n");
    break;

    case 4:
    printf("\n=== Resultado da Comparação ===\n");
    printf("Atributo: Pontos Turísticos\n");
    printf("%s: %d pontos\n", pais1, numero_de_pontos_turisticos1);
    printf("%s: %d pontos\n", pais2, numero_de_pontos_turisticos2);
    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
    printf("Vencedor: %s\n", pais1);
    else if (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1)
    printf("Vencedor: %s\n", pais2);
    else
    printf("Empate!\n");
    break;

    case 5:
    printf("\n=== Resultado da Comparação ===\n");
    printf("Atributo: Densidade Demográfica\n");
    printf("%s: %.2f hab/km²\n", pais1, densidade_demografica1);
    printf("%s: %.2f hab/km²\n", pais2, densidade_demografica2);
    if (densidade_demografica1 < densidade_demografica2)
    printf("Vencedor: %s\n", pais1);
    else if (densidade_demografica2 < densidade_demografica1)
    printf("Vencedor: %s\n", pais2);
    else
    printf("Empate!\n");
    break;
    default:
    printf("Opção inválida!\n");
     }



return 0; }
