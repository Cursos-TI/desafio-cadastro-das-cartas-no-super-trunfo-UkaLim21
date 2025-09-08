#include <stdio.h>

int main(){

char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

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


printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoB, estoqueB, valorB);
printf("O Produto %s tem o estoque mínimo %d\n", produtoA, resultadoA);
printf("O Produto %s tem o estoque mínimo %d\n", produtoB, resultadoB);

printf("O valor total de A (R$ %.2f), é maior que o valor total de B(R$ %.2f): %d\n", 
    estoqueA * valorA,
    estoqueB * valorB,
(estoqueA * valorA) > (estoqueB * valorB));

return 0;
}