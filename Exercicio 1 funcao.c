/*Escreva um procedimento que, após a leitura dos dados, realizada por um
procedimento com o objetivo de ler os valores para uma string S e valor
para um número inteiro positivo N, exiba a string S por N vezes seguidas na
tela. Crie também o algoritmo principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void StringS() {
	char string[50];
	int n, i;
	printf("Digite os dados: ");
	scanf_s("%[^\n]s", &string, 50);

	printf("Digite valor aleatorio: ");
	scanf_s("%i", &n);

	for (i = 0; i < n; i++) 
	{
		printf("\n%s\n", string);
	}
}

int main()
{
	StringS();
}

