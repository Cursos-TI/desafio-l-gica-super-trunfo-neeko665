#include <stdio.h>

int main() {
    // Carta 1
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
    float valor1atributo1 = 0, valor2atributo1 = 0;
    float valor1atributo2 = 0, valor2atributo2 = 0;
    char *nomeatributo1, *nomeatributo2;


    printf("Escolha dois atributos para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Geográfica\n");

    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &atributo1);
    printf("Digite o número do segundo atributo: ");
    scanf("%d", &atributo2);


     // Verifica se os atributos são diferentes
     if (atributo1 == atributo2) {
        printf("Erro: Os atributos escolhidos devem ser diferentes.\n");
        return 1;
     }
    // Atributo 1
    switch (atributo1) {
        case 1: valor1atributo1 = (float)populacao1; valor1atributo2 = (float)populacao2; nomeatributo1 = "População"; break;
        case 2: valor1atributo1 = area1; valor1atributo2 = area2; nomeatributo1 = "Área"; break;
        case 3: valor1atributo1 = PIB1; valor1atributo2 = PIB2; nomeatributo1 = "PIB"; break;
        case 4: valor1atributo1 = (float)pontosturisticos1; valor1atributo2 = (float)pontosturisticos2; nomeatributo1 = "Pontos Turísticos"; break;
        case 5: valor1atributo1 = calculodensidade1; valor1atributo2 = calculodensidade2; nomeatributo1 = "Densidade Geográfica"; break;
        default: printf("Atributo 1 inválido.\n"); return 1;
    }

    // Atributo 2
    switch (atributo2) {
        case 1: valor2atributo1 = (float)populacao1; valor2atributo2 = (float)populacao2; nomeatributo2 = "População"; break;
        case 2: valor2atributo1 = area1; valor2atributo2 = area2; nomeatributo2 = "Área"; break;
        case 3: valor2atributo1 = PIB1; valor2atributo2 = PIB2; nomeatributo2 = "PIB"; break;
        case 4: valor2atributo1 = (float)pontosturisticos1; valor2atributo2 = (float)pontosturisticos2; nomeatributo2 = "Pontos Turísticos"; break;
        case 5: valor2atributo1 = calculodensidade1; valor2atributo2 = calculodensidade2; nomeatributo2 = "Densidade Geográfica"; break;
        default: printf("Atributo 2 inválido.\n"); return 1;
    }
    
    //soma dos atributos escolhidos no switch
    float soma1 = valor1atributo1 + valor2atributo1;
    float soma2 = valor1atributo2 + valor2atributo2;



    // Exibir os dados
    printf("\n### Comparação das cartas ###\n");
    printf("\n%s: %s = %.2f | %s = %.2f | Soma = %.2f\n", pais1, nomeatributo1, valor1atributo1, nomeatributo2, valor2atributo1, soma1);
    printf("%s: %s = %.2f | %s = %.2f | Soma = %.2f\n", pais2, nomeatributo1, valor1atributo2, nomeatributo2, valor2atributo2, soma2);
    
        // Mostrar valores comparados
        printf("\nComparação dos atributos:\n");
    
        // Comparação do atributo 1
        printf("Atributo 1: %.2f (%s) vs %.2f (%s) => ",
            valor1atributo1, pais1, valor1atributo2, pais2);
        if (atributo1 == 5) {
            if (valor1atributo1 < valor1atributo2)
                printf("%s venceu neste atributo\n", pais1);
            else if (valor1atributo2 < valor1atributo1)
                printf("%s venceu neste atributo\n", pais2);
            else
                printf("Empate neste atributo\n");
        } else {
            if (valor1atributo1 > valor1atributo2)
                printf("%s venceu neste atributo\n", pais1);
            else if (valor1atributo2 > valor1atributo1)
                printf("%s venceu neste atributo\n", pais2);
            else
                printf("Empate neste atributo\n");
        }
    
        // Comparação do atributo 2
        printf("Atributo 2: %.2f (%s) vs %.2f (%s) => ",
            valor2atributo1, pais1, valor2atributo2, pais2);
        if (atributo2 == 5) {
            if (valor2atributo1 < valor2atributo2)
                printf("%s venceu neste atributo\n", pais1);
            else if (valor2atributo2 < valor2atributo1)
                printf("%s venceu neste atributo\n", pais2);
            else
                printf("Empate neste atributo\n");
        } else {
            if (valor2atributo1 > valor2atributo2)
                printf("%s venceu neste atributo\n", pais1);
            else if (valor2atributo2 > valor2atributo1)
                printf("%s venceu neste atributo\n", pais2);
            else
                printf("Empate neste atributo\n");
        }
    
       
    
    
        // Mostrar soma e resultado final
        printf("\n ### RESULTADO ###\n");
        printf("Soma dos atributos:\n");
        printf("%s: %.2f\n", pais1, soma1);
        printf("%s: %.2f\n", pais2, soma2);
    

    
    
    // Resultado com operador ternário
    printf("Vencedor: %s\n", 
        (soma1 > soma2) ? pais1 : (soma1 < soma2) ? pais2 : "Empate");

 return 0;   
}





