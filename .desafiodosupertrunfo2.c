#include <stdio.h>

int main (){

    // carta 01
    char pais1[30] = "Brasil";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int pontosturisticos1 = 50;
    float calculodensidade1 = (float) populacao1 / area1;
      //carta 2
    char pais2[30] = "Alemanha";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int pontosturisticos2 = 30;
    float calculodensidade2 = (float) populacao2 / area2;

    int atributo1, atributo2;
    
   //menu interativo
    printf("### BEM VINDO AO JOGO SUPER TRIUNFO###\n");
 
   printf("\n1-População\n");
   printf("2-Área\n");
   printf("3-PIB\n");
   printf("4-Número de pontos turísticos\n");
   printf("5-Densidade Demográfica\n");
   printf("\nDigite o atributo que você quer que seja comparado:\n");
  scanf("%d", &atributo1);
   
   printf("comparação entre as cartas %s e %s:\n", pais1, pais2);

   //switch com resolução if-else
   switch (atributo1)
   {
   case 1:
   printf("Área: %d x %d\n", populacao1,populacao2);
   if (populacao1 > populacao2)
   {
    printf("%s Venceu\n", pais1);
   } else if (populacao2 >populacao1)
   {
    printf("%s Venceu\n", pais2);
   } else
   {
    printf("Deu Empate\n");
   }
    break;

    case 2:
   printf("Área: %.2f x %.2f\n", area1,area2);
   if (area1 > area2)
   {
    printf("%s Venceu\n", pais1);
   } else if (area2 >area1)
   {
    printf("%s Venceu\n", pais2);
   } else
   {
    printf("Deu Empate\n");
   }
   break;
   case 3:
   printf("PIB: %.2f x %.2f\n", PIB1,PIB2);
   if (PIB1 > PIB2)
   {
    printf("%s Venceu\n", pais1);
   } else if (PIB2 >PIB1)
   {
    printf("%s Venceu\n", pais2);
   } else
   {
    printf("Deu Empate\n");
   }
   break;
   case 4:
   printf("Número de pontos turísticos: %d x %d\n", pontosturisticos1,pontosturisticos2);
   if (pontosturisticos1 > pontosturisticos2)
   {
    printf("%s Venceu\n", pais1);
   } else if (pontosturisticos2 > pontosturisticos1)
   {
    printf("%s Venceu\n", pais2);
   } else
   {
    printf("Deu Empate\n");
   }
   break;
   case 5:
   printf("Densidade Demográfica: %.2f x %.2f\n", calculodensidade1,calculodensidade2);
   if (calculodensidade1 < calculodensidade2)
   {
    printf("%s Venceu (menor numero vence)\n", pais1);
   } else if (calculodensidade2 < calculodensidade1)
   {
    printf("%s Venceu(menor numero vence)\n", pais2);
   } else
   {
    printf("Deu Empate\n");
   }
   break;
   default:
   printf("Opção Invalida! escolha de 1 a 5!!");
    break;
   }
}