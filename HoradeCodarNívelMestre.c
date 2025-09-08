#include <stdio.h>

int main(){

char pordutoA[30] = "Produto A";
char pordutoB[30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;


double valorTotalA;
double valorTotalB;

//printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", pordutoA, estoqueA, valorA);
//printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", pordutoB, estoqueB, valorB);

int resultadoA, resultadoB;

resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;


printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", pordutoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", pordutoB, estoqueB, valorB);
printf("O Produto %s tem o estoque mínimo %d\n", estoqueA, resultadoA);
printf("O Produto %s tem o estoque mínimo %d\n", estoqueB, resultadoB);

return 0;
}