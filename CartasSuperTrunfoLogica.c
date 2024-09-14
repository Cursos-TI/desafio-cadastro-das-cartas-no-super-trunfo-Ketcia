#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Manipulação de Variáveis e Operadores Relacionais


int main() {
    
    //Declaração e Inicialização de Variáveis C1 (carta 1)
    char C1_estado;
    char C1_codigoCarta[4];
    char C1_nomeCidade[20];
    int C1_populacao = 0;
    int C1_nPontoTuristico = 0;
    float C1_area = 0.0;
    float C1_PIB = 0.0;
    float C1_pibPercapita = 0.0;
    float C1_densidadePopulacional = 0.0;
    float C1_superPoder = 0.0;

    //Declaração e Inicialização de Variáveis C2 (carta 2)
    char C2_estado;
    char C2_codigoCarta[4];
    char C2_nomeCidade[20];
    int C2_populacao = 0;
    int C2_nPontoTuristico = 0;
    float C2_area = 0.0;
    float C2_PIB = 0.0;
    float C2_pibPercapita = 0.0;
    float C2_densidadePopulacional = 0.0;
    float C2_superPoder = 0.0;
    

    // Cadastro da Carta 1:

    printf("== CADASTRE A PRIMEIRA CARTA == \n");

    printf("Digite o Estado: ");
    scanf("%c", &C1_estado);

    printf("Digite o Código da Carta: ");
    scanf(" %s", &C1_codigoCarta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", &C1_nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &C1_populacao);

    printf("Digite a Area em Km²: ");
    scanf("%f", &C1_area);

    printf("Digite o PIB: ");
    scanf("%f", &C1_PIB);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &C1_nPontoTuristico);

    printf("Carta cadastrada com sucesso!\n\n");

    // Cadastro da Carta 2:

    printf("== CADASTRE A SEGUNDA CARTA ==\n");

    printf("Digite o Estado: ");
    scanf(" %c", &C2_estado);

    printf("Digite o Código da Carta: ");
    scanf(" %s", &C2_codigoCarta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", &C2_nomeCidade);

    __fpurge(stdin);

    printf("Digite a População: ");
    scanf("%d", &C2_populacao);

    printf("Digite a Area em Km²: ");
    scanf("%f", &C2_area);

    printf("Digite o PIB: ");
    scanf("%f", &C2_PIB);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &C2_nPontoTuristico);

    printf("Carta cadastrada com sucesso! \n");

    // Calculos do Sistema (PIB per capita e densidade populacional):

    C1_pibPercapita = C1_PIB/C1_populacao;
    C1_densidadePopulacional = (float)C1_populacao/C1_area;
    C1_superPoder = (float)(C1_populacao + C1_nPontoTuristico) + C1_area + C1_PIB + C1_pibPercapita + C1_densidadePopulacional;

    C2_pibPercapita = C2_PIB/C2_populacao;
    C2_densidadePopulacional = (float)C2_populacao/C2_area;
    C2_superPoder = (float)(C2_populacao + C2_nPontoTuristico) + C2_area + C2_PIB + C2_pibPercapita + C2_densidadePopulacional;

    // Exibição dos Dados das Cartas:

    printf("\n== CARTAS CADASTRADAS ==\n");

    printf("Carta N°1:\n\n");

    printf("Estado: %c \n", C1_estado);
    printf("Código da carta: %s \n", C1_codigoCarta);
    printf("Nome da cidade: %s \n", C1_nomeCidade);
    printf("População : %d habitantes\n", C1_populacao);
    printf("Área em km²: %.2f KM²\n", C1_area);
    printf("Densidade Populacional: %.2f\n", C1_densidadePopulacional);
    printf("PIB: R$%.2f\n", C1_PIB);
    printf("PIB per capita: R$%.2f\n", C1_pibPercapita);
    printf("Número de pontos turísticos: %d\n", C1_nPontoTuristico);
    printf("Super Poder: %.2f\n\n", C1_superPoder);


    printf("Carta N°2:\n\n");

    printf("Estado: %c \n", C2_estado);
    printf("Código da carta: %s \n", C2_codigoCarta);
    printf("Nome da cidade: %s \n", C2_nomeCidade);
    printf("População: %d habitantes\n", C2_populacao);
    printf("Área em km²: %.2f KM² \n", C2_area);
    printf("Densidade Populacional: %.2f  \n", C2_densidadePopulacional);
    printf("PIB: R$%.2f \n", C2_PIB);
    printf("PIB per capita: R$%.2f \n", C2_pibPercapita);
    printf("Número de pontos turísticos: %d\n", C2_nPontoTuristico);
    printf("Super Poder: %.2f\n\n", C2_superPoder);

    //Comparações e Resultado

    printf("=== BATALHA DAS CARTAS ===\n");
    printf("1 = %s Vencedora\n", C1_codigoCarta);
    printf("0 = %s Vencedora\n", C2_codigoCarta);

    printf("População : %d\n", C1_populacao > C2_populacao);
    printf("Área em km²: %d\n", C1_area > C2_area);
    printf("Densidade Populacional: %d\n", C1_densidadePopulacional < C2_densidadePopulacional);
    printf("PIB: %d\n", C1_PIB > C2_PIB);
    printf("PIB per capita: %d\n", C1_pibPercapita > C2_pibPercapita);
    printf("Número de pontos turísticos: %d\n", C1_nPontoTuristico > C2_nPontoTuristico);
    printf("Super Poder: %d", C1_superPoder > C2_superPoder);
    printf("\n\n\n");

    return 0;
}
