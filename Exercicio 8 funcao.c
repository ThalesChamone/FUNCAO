/*Escreva um algoritmo que leia um vetor A de 30 elementos reais e, usando o
procedimento METADE, divida todos seus elementos pela metade.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float vet[30], vetB[30];

void METADE() {
	int i;
	for (i = 0; i < 30; i++) 
	{
		printf("Valores vetor: ");
		scanf_s("%f", &vet[i]);

	}
	for (i = 0; i < 30; i++) 
	{
		vetB[i] = vet[i] / 2;
		printf("\nVetor divido por 2 = %.2f\n", vetB[i]);
	}

	
}

int main() {
	METADE();
}