/*Construir um algoritmo que tenha uma função que calcule o cubo de um
número inteiro qualquer de forma que esta possa ser usada para resolver os
seguintes cálculos que serão feitos no algoritmo principal
 O volume de uma esfera: 4/3 R3
 E a equação: x3 + y3 + 2*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int Cubo(int num) {
	int cubo;
	cubo = num * num * num;
	return cubo;
}

int main() {

	int x, y, raio, cubo, n;
	float equacao, volume;
	
	printf("Digite valor de X e Y: ");
	scanf_s("%i %i", &x, &y);

	equacao = Cubo(x) + Cubo(y) + 2;
	printf("\nResultado equacao = %.2f\n", equacao);

	printf("\nDigite valor do raio: ");
	scanf_s("%i", &raio);

	volume = 4 * 3.14 * Cubo(raio) / 3;
	printf("\nVolume = %.2f\n", volume);

	printf("\nDigite numero aleatorio: ");
	scanf_s("%i", &n);

	cubo = Cubo(n);
	printf("\nValor de n ao cubo = %i", cubo);
}

