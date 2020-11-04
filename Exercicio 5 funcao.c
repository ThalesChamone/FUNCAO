/*Construir um algoritmo para cada caso, utilizando funções e reduzindo ao
máximo o uso de variáveis globais:
 Solicitar ao usuário um número e exibir o seu cubo. Função deve receber o
número e retornar o cubo correspondente.
 Solicitar ao usuário a idade (em anos ) e exibir o número de dias vividos até
o último aniversário. Função deve receber a idade e retornar o número de
dias vividos.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Cubo(int num) {
	int cubo;
	cubo = num * num * num;
	return cubo;
}
int IdadeDias(int idade) {
	int idadeDias;
	idadeDias = idade * 365;
	return idadeDias;
}

int main() {
	int n, cubo, idade, calculoidade;
	printf("Digite valor aleatorio: ");
	scanf_s("%i", &n);

	cubo = Cubo(n);

	printf("\nCubo do numero = %i\n", cubo);

	printf("\nDigite sua idade: ");
	scanf_s("%i", &idade);

	calculoidade = IdadeDias(idade);
	printf("\nIdade em dias = %i\n", calculoidade);
	
}