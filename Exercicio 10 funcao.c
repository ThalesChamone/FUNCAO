/*Escreva um procedimento chamado AUMENTO que receba dois valores
reais X e Y como parâmetros e aumente o valor de X em Y%.*/

#include <stdio.h>

float AUMENTO(float x,float y) {
	float aumento;
	
	aumento = x + ((y / 100)*x);

	return aumento;
	
}
int main() {
	float x, y, resultado;
	printf("Digite valores de X e Y: ");
	scanf_s("%f %f", &x, &y);

	resultado = AUMENTO(x, y);

	printf("X com acrescimo = %.2f", resultado);
}
