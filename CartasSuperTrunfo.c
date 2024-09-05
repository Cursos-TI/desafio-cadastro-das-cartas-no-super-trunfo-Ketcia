#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    
    //Declaração e Inicialização de Variáveis

    char estado;
    char codigoCarta[4];
    char nomeCidade[20];
    int populacao = 0;
    int nPontoTuristico = 0;
    float area = 0.0;
    float PIB = 0.0;
    
    // Cadastro das Cartas:

    printf("== CADASTRE SUA CARTA == \n");

    printf("Digite o Estado: ");
    scanf("%c", &estado);

    printf("Digite o Código da Carta: ");
    scanf(" %s", &codigoCarta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", &nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Area em Km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &nPontoTuristico);

    printf("Carta cadastrada com sucesso! \n\n");

    // Exibição dos Dados das Cartas:

    printf("== CARTA CADASTRADA ==\n");

    printf("Estado: %c \n", estado);
    printf("Código da carta: %s \n", codigoCarta);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("População : %d \n habitantes", populacao);
    printf("Área em km²: %f KM² \n", area);
    printf("PIB: R$%f \n", PIB);
    printf("Número de pontos turísticos: %d", nPontoTuristico);

    return 0;
}
