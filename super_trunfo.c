#include <stdio.h>
int main() {

    int opcao, atributo;

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
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);
  
  
    switch (opcao) {
      case 1:
      printf("Escolha um Atributo para comparar:\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Numeros de Pontos Turísticos\n");
      printf("5. Densidade Demográfica\n");
      scanf("%d", &atributo);
      switch (atributo) {
        case 1:
          printf("### Comparar a População ### \n");
          printf("Carta 1 %s tem %.2f Habitantes e Carta 2 %s tem %.2f Habitantes\n", nome1, populacao1, nome2, populacao2);
          if (populacao1 == populacao1) {
            printf("Resultado: Empate!\n");
          else if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu\n", nome1);
          } else {
              printf("Resultado: Carta 2 (%s) venceu\n", nome2);
          }
          break;
        case 2:
          printf("### Comparar a Área ### \n");
          printf("Carta 1 %s tem %.2f m² e Carta 2 %s tem %.2f m²\n", nome1, area1, nome2, area2);
          if (area1 == area1) {
            printf("Resultado: Empate!\n");
          else if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu\n", nome1);
          } else {
              printf("Resultado: Carta 2 (%s) venceu\n", nome2);
          }
          break;
        case 3:
          printf("### Comparar o PIB ### \n");
          printf("Carta 1 %s tem %.2f bilhões de Reais e Carta 2 %s tem %.2f bilhões de Reais\n", nome1, pib1, nome2, pib2);
          if (pib1 == pib1) {
            printf("Resultado: Empate!\n");
          else if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu\n", nome1);
          } else {
              printf("Resultado: Carta 2 (%s) venceu\n", nome2);
          }
          break;
          case 4:
          printf("### Comparar o Número de Pontos Turísticos ### \n");
          printf("Carta 1 %s tem %d pontos turísticos e Carta 2 %s tem %d pontos turísticos\n", nome1, pontos1, nome2, pontos2);
          if (pontos1 == pontos1) {
            printf("Resultado: Empate!\n");
          } else if (pontos1 > pontos2) {
            printf("Resultado: Carta 1 (%s) venceu\n", nome1);
          } else {
              printf("Resultado: Carta 2 (%s) venceu\n", nome2);
          }
          break;
          case 5:
          printf("### Comparar a Densidade Demográfica ### \n");
          printf("Carta 1 %s tem %.2f hab/km² e Carta 2 %s tem %.2f hab/km²\n", nome1, densidade1, nome2, densidade2);
          if (densidade1 == densidade2) {
            printf("Resultado: Empate!\n");
          } else if (densidade1 < densidade2) {
              printf("Resultado: Carta 1 (%s) venceu\n", nome1);
          } else {
            printf("Resultado: Carta 2 (%s) venceu\n", nome2);
          }
          break;
        default:
          printf("Opção inválida. Tente novamente.\n");
      }
      case 2:
        printf("Regras do Jogo:\n");
        printf("1. Escolha uma opção no menu.\n");
        printf("2. Se você escolher 'Iniciar Jogo', deve escolher qual atributo quer comparar nas cartas escolhidas.\n");
        printf("3. O jogo termina quando você escolhe 'Sair'.\n");
        break;
      case 3:
        printf("Saindo...\n");
        break;
      default:
        printf("Opção inválida. Tente novamente.\n");
    }


    // Definir qual carta ganha
    
        return 0;

}