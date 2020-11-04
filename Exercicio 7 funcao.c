/*Escreva um procedimento chamado TROCA que receba 2 variáveis inteiras
(X e Y) e troque o conteúdo entre elas*/

#include <stdio.h>

int x, y;

void TROCA() {
	int x, y, conversor;

	printf("Digite valor de x e y: ");
	scanf_s("%i %i", &x, &y);

	conversor = x;
	x = y;
	y = conversor;
	
	printf("\nValores trocados x=%i y=%i\n", x, y);
}
int main() {
	TROCA();
}