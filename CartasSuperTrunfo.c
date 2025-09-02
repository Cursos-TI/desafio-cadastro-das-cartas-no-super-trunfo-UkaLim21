#include <stdio.h>

int main(){

    // carta 1
char estado1;
char código1[4];
char cidade1[11];
float população1;
float área1;
float pib1;
int ponto1;

 // carta 2
char estado2;
char código2[4];
char cidade2[12];
float população2;
float área2;
float pib2;
int ponto2;

// Carta 1
printf("Digite o Estado: \n");
scanf("%c", &estado1);

printf("Digite o Código: \n");
scanf("%s", código1);

printf("Digite o nome da Cidade: \n");
scanf("%s", cidade1);

printf("Digite a População: \n");
scanf("%f", &população1);

printf("Digite a Área: \n");
scanf("%f", &área1);

printf("Digite o PIB: \n");
scanf("%f", &pib1);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &ponto1);

// Carta 2
printf("Digite o Estado: \n");
scanf(" %c", &estado2);

printf("Digite o Código: \n");
scanf("%s", código2);

printf("Digite o nome da Cidade: \n");
scanf("%s", cidade2);

printf("Digite a População: \n");
scanf("%f", &população2);

printf("Digite a Área: \n");
scanf("%f", &área2);

printf("Digite o PIB: \n");
scanf("%f", &pib2);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &ponto2);


//Carta 01
printf("\n=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", código1);
printf("Cidade: %s\n", cidade1);
printf("População: %f\n", população1);
printf("Área (em Km): %f\n", área1);
printf("PIB: %f\n", pib1);
printf("Núremo de Pontos Turísticos: %d\n", ponto1);


//carta 02
printf("\n=== Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", código2);
printf("Cidade: %s\n", cidade2);
printf("População: %f\n", população2);
printf("Área (em Km): %f\n", área2);
printf("PIB: %f\n", pib2);
printf("Núremo de Pontos Turísticos: %d\n", ponto2);




return 0;
}