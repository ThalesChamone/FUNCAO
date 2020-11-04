/*Escreva um procedimento chamado POTENCIA que receba duas variáveis
inteiras X e Y e retorne X elevado a Y.*/

#include <stdio.h>
#include <math.h>

int x, y;

void X_Y() {
	printf("Digite valor de X: ");
	scanf_s("%i", &x);
	printf("Digite valor de Y: ");
	scanf_s("%i", &y);
}

int POTENCIA(int x, int y) {
	int resultado;
	resultado = pow(x, y);
	return resultado;
}
int main() {
	int calcresultado;
	X_Y();
	calcresultado = POTENCIA(x, y);
	printf("\nResultado potencia = %i\n", calcresultado);
}