#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao, atributo;


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
        if (populacao1 > populacao2) {
          printf("Resultado: Carta 1 (%s) venceu\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu\n", nome2);
        }
        break;
      case 2:
        printf("### Comparar a Área ### \n");
        printf("Carta 1 %s tem %.2f m² e Carta 2 %s tem %.2f m²\n", nome1, area1, nome2, area2);
        if (area1 > area2) {
          printf("Resultado: Carta 1 (%s) venceu\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu\n", nome2);
        }
        break;
      case 3:
        printf("### Comparar o PIB ### \n");
        printf("Carta 1 %s tem %.2f bilhões de Reais e Carta 2 %s tem %.2f bilhões de Reais\n", nome1, pib1, nome2, pib2);
        if (pib1 > pib2) {
          printf("Resultado: Carta 1 (%s) venceu\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu\n", nome2);
        }
        break;
        case 4:
        printf("### Comparar o Número de Pontos Turísticos ### \n");
        printf("Carta 1 %s tem %d pontos turísticos e Carta 2 %s tem %d pontos turísticos\n", nome1, pontos1, nome2, pontos2);
        if (pontos1 > pontos2) {
          printf("Resultado: Carta 1 (%s) venceu\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu\n", nome2);
        }
        break;
        case 5:
        printf("### Comparar a Densidade Demográfica ### \n");
        printf("Carta 1 %s tem %.2f hab/km² e Carta 2 %s tem %.2f hab/km²\n", nome1, densidade1, nome2, densidade2);
        if (densidade1 < densidade2) {
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

  return 0;
}