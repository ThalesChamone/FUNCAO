/*Escreva um procedimento chamado AUMENTO que receba dois valores
reais X e Y como parâmetros e aumente o valor de X em Y%.*/

#include <stdio.h>

void AUMENTO() {
	float x, y, aumento;
	printf("Digite valores de X e Y: ");
	scanf_s("%f %f", &x, &y);

	aumento = x + y / 100;

	printf("X com acrescimo = %.2f", aumento);
}
int main() {
	AUMENTO();
}