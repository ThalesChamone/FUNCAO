/*Construir um algoritmo que leia a base e a altura de um tri�ngulo
(utilizando procedimento), e calcule a �rea deste tri�ngulo (utilizando
fun��o). Mostrar o resultado na tela.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int base, altura;

void Base_Altura() {
	printf("Digite base: ");
	scanf_s("%i", &base);

	printf("Digite altura: ");
	scanf_s("%i", &altura);
}

float Area(float base, float altura) {
	float area;

	area = base*altura / 2;

	return area;
}
int main() {
	float calculoarea;
	Base_Altura();

	calculoarea = Area(base, altura);

	printf("Area triangulo = %.2f", calculoarea);
}