/*Escreva uma função chamada MEDIA que retorne a média de 3 valores reais
(X, Y e Z) passados como parâmetros.*/

#include <stdio.h>

void MEDIA() {
	int x, y, z, soma = 0;
	float media;

	printf("Digite valor de X,Y e Z: ");
	scanf_s("%i %i %i", &x, &y, &z);

	soma = x + y + z;
	media = (float)soma / 3;

	printf("Media dos valores = %.2f", media);
}
int main() {
	MEDIA();
}