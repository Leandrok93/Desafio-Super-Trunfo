#include <stdio.h>
int main() {

    char estado1; // Nome do Estado
    char codigo1[5]; //Código da Carta
    char nome1[20]; //Nome da cidade
    int pontos1; //Pontos Turisticos
    int populacao1; //Numero de Habitantes
    float pib1; //PIB da cidade
    float area1; //Área em km²

    char estado2; // Nome do Estado
    char codigo2[5]; //Código da Carta
    char nome2[20]; //Nome da cidade
    int pontos2; //Pontos Turisticos
    int populacao2; //Numero de Habitantes
    float pib2; //PIB da cidade
    float area2; //Área em km²

    printf("Carta 1 \n"); //Iniciando Perguntas da Carta 1

    printf("Por favor informe uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado1);

    printf("Por favor informe o código da cidade (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", codigo1);

    printf("Por favor informe o nome da cidade: \n");
    scanf(" %s", nome1);

    printf("Por favor informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Por favor informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Por favor informe o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f", &pib1);

    printf("Por favor informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos1); 
    //Finalizando as Perguntas da primeira carta

    printf("\n");

    printf("Carta 2 \n"); //Iniciando Perguntas da Carta 2

    printf("Por favor informe uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);

    printf("Por favor informe o código da cidade (A letra do estado seguida de um número de 01 a 04): \n");
    scanf(" %s", codigo2);

    printf("Por favor informe o nome da cidade: \n");
    scanf(" %s", nome2);

    printf("Por favor informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Por favor informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Por favor informe o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f", &pib2);

    printf("Por favor informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos2);
    
    //Finalizando as Perguntas da Segunda Carta   
    
    //Iniciando a exibição dos Dados da Carta 1
    
    printf("Carta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", pontos1);

    //Finalizando exibição dos Dados da Carta 1

    printf("\n");

    //Iniciando exibição dos Dados da Carta 2

    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", pontos2);

    //Finalizando exibição dos Dados da Carta 2
        return 0;

}
