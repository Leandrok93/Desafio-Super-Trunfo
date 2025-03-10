#include <stdio.h>
int main() {

    char estado1; // Nome do Estado
    char codigo1[5]; //Código da Carta
    char nome1[20]; //Nome da cidade
    int pontos1; //Pontos Turisticos
    float populacao1; //Numero de Habitantes
    float pib1; //PIB da cidade
    float area1; //Área em km²
    float densidade1; //Densidade Populacional
    float pib_per_capita1;//Pib per capita

    char estado2; // Nome do Estado
    char codigo2[5]; //Código da Carta
    char nome2[20]; //Nome da cidade
    int pontos2; //Pontos Turisticos
    float populacao2; //Numero de Habitantes
    float pib2; //PIB da cidade
    float area2; //Área em km²
    float densidade2; //Densidade Populacional
    float pib_per_capita2; //Pib per capita


    printf("Carta 1 \n"); //Iniciando Perguntas da Carta 1

    printf("Por favor informe uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado1);

    printf("Por favor informe o código da cidade (A letra do estado seguida de um número de 01 a 04): \n");
    scanf(" %s", codigo1);

    printf("Por favor informe o nome da cidade: \n");
    scanf(" %s", nome1);

    printf("Por favor informe o número de habitantes da cidade: \n");
    scanf("%f", &populacao1);

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
        scanf("%f", &populacao2);

        printf("Por favor informe a área da cidade em quilômetros quadrados: \n");
        scanf("%f", &area2);

        printf("Por favor informe o Produto Interno Bruto da cidade (PIB): \n");
        scanf("%f", &pib2);

        printf("Por favor informe a quantidade de pontos turísticos na cidade: \n");
        scanf("%d", &pontos2);
    
    //Finalizando as Perguntas da Segunda Carta   
    
    //Iniciando a exibição dos Dados da Carta 1

    densidade1 = (float) populacao1 / area1; //Calculo da Densidade
    pib_per_capita1 = (float) pib1 / populacao1;  //Calculo do PIB per capita
    
    printf("Carta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %f\n", populacao1);
    printf("Área (em km²): %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita1);

    //Finalizando exibição dos Dados da Carta 1

    printf("\n");

    //Iniciando exibição dos Dados da Carta 2
    
    densidade2 = (float) populacao2 / area2; //Calculo da Densidade
    pib_per_capita2 = (float) pib2 / populacao2; //Calculo do PIB per capita

    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %f\n", populacao2);
    printf("Área (em km²): %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita2);

    //Finalizando exibição dos Dados da Carta 2

    // Comparar Atributo

    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s(%c): %.2f", nome1, estado1, populacao1);
    printf("Carta 2 - %s(%c): %.2f", nome2, estado2, populacao2);
    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu", nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu", nome2);
    }

    // Definir qual carta ganha
    
        return 0;

}