#include <stdio.h>
int main() {

    char estado[50]; // Nome do Estado
    char codigo[50]; //Código da Carta
    char nome[50]; //Nome da cidade
    int pontos; //Pontos Turisticos
    int populacao; //Numero de Habitantes
    float pib; //PIB da cidade
    float area; //Área em km²

    printf("Digite o Estado: \n");
    scanf(" %s", estado);

    printf("Digite o Código da Carta: \n");
    scanf(" %s", codigo);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", nome);

    printf("Digite o Número de Habitantes \n");
    scanf("%d", &populacao);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);

    printf("Carta 01\n")
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área (em km²): %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Numero de Pontos Turísticos: %d\n", pontos);

    
        return 0
}