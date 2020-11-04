/*Construir um algoritmo que leia um valor inteiro N (utilizando
procedimento) e calcule o cubo deste valor (utilizando função). Mostre o
resultado.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Cubo(int num) {
	int cubo;
	cubo = num * num * num;
	return cubo;
}
int main() {
	int n, cubo;
	printf("Digite valor aleatorio: ");
	scanf_s("%i", &n);

	cubo = Cubo(n);

	printf("\nCubo do numero = %i", cubo);
}