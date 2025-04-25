#include  <stdio.h>

int main(){

// Declaração das variáveis para as duas cartas
char estado1[50] , estado2[50];
int pontosturisticos1, pontosturisticos2 ;
float area1, PIB1, area2, PIB2;
char cidade1[50], codigo1[10], cidade2[50], codigo2[10];
float calculodensidade1, calculodensidade2, pibpercapita1, pibpercapita2 ;
int populacao1, populacao2;
float atributo1, atributo2 ;

printf("digite a letra da primeira carta:\n");
    scanf(" %s", estado1);

    printf("digite o codigo da primeira carta:\n");
    scanf("%s", codigo1);

    printf("digite a cidade da primeira carta:\n");
    scanf("%s", cidade1);

    printf("digite a população da primeira carta:\n");
    scanf("%d", &populacao1);

    printf("digite a área da primeira carta:\n");
    scanf("%f", &area1);

    printf("digite o pib da primeira carta:\n");
    scanf("%f", &PIB1);
    
    printf("numeros de pontos turisticos da primeira carta:\n");
    scanf("%d", &pontosturisticos1); 




   //Entrada da segunda carta
    printf("escreva a letra da segunda carta :\n");
    scanf(" %s", estado2);

    printf("digite o codigo da segunda carta:\n");
    scanf("%s", codigo2);

    printf("digite a cidade da segunda carta:\n");
    scanf("%s", cidade2); 

    printf("digite a população da segunda carta:\n");
    scanf("%d", &populacao2);

    printf("digite a área da segunda carta:\n");
    scanf("%f", &area2);

    printf("digite o pib da segunda carta:\n");
    scanf("%f", &PIB2);

    printf("numeros de pontos turisticos da segunda carta:\n");
    scanf("%d", &pontosturisticos2); 




//calculos da primeira carta
calculodensidade1 = (float) populacao1 / area1;
pibpercapita1 =(PIB1 * 1000000000.0) /(float) populacao1;

//calculos da segunda carta
 calculodensidade2 =(float)populacao2 / area2;
 pibpercapita2 =(PIB2 * 1000000000.0) /(float) populacao2;

 atributo1 = populacao1;
 atributo2 = populacao2;
 
  printf("Atributo comparado: População:\n");
 
 //demonstração das cartas 
  printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

 if (atributo1 > atributo2) {
    printf("Carta 1 %s venceu! valor:%d\n",estado1,populacao1);
    
    
} else if (atributo1 < atributo2) {
    printf("Carta 1 %s venceu! valor:%d\n",estado2,populacao2);
    
    
    
} else {
    printf("Resultado: As duas cartas têm o mesmo valor para o atributo População.\n");
    

}

}