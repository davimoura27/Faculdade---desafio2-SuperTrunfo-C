#include <stdio.h>

int main() {
// Carta 1
char estado1;
char codigo1[10];
char nomeCidade1[100];
unsigned long int populacao1;
float area1;
float pib1;
int pontosTuristicos1;
float densidade1,pibPerCapita1;
 

printf("Carta 1:\n");
printf("Estado: ");
scanf(" %c", &estado1);
printf("Código: ");
scanf("%s", codigo1);
printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade1);
printf("População: ");
scanf("%lu", &populacao1);
printf("Área: ");
scanf("%f", &area1);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos1);

densidade1 = (float)populacao1 / area1;
pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;


// Carta 2
char estado2;
char codigo2[10];
char nomeCidade2[100];
unsigned long int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
float densidade2, pibPerCapita2;

printf("\nCarta 2:\n");
printf("Estado: ");
scanf(" %c", &estado2);
printf("Código: ");
scanf("%s", codigo2);
printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade2);
printf("População: ");
scanf("%lu", &populacao2);
printf("Área: ");
scanf("%f", &area2);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

densidade2 = (float)populacao2 / area2;
pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

//Exibição

printf("\nComparação de Cartas:\n");

if (populacao1 > populacao2){
    printf("Carta 1 - São Paulo (SP):%f \n", densidade1);
    printf("Carta 2 - Rio de Janeiro:%f \n", densidade2);
    printf("Carta 1 (São Paulo) venceu!\n");
}else{
   printf("Carta 1 - São Paulo (SP):%f\n", densidade1);
    printf("Carta 2 - Rio de Janeiro:%f\n", densidade2);
    printf("Carta 2 (Rio de Janeiro) venceu!\n");
}


return 0;

}