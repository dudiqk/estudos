#include <stdio.h>

int main() {
	float peso, altura, imc;
	printf("Digite o seu peso em kg: ");
	scanf("%f", &peso);

	printf("Digite a sua altura em centímetros: ");
	scanf("%f", &altura);

	altura = altura/100;
	imc = peso/(altura*altura);

	printf("Seu IMC e: %.2f\n", imc);

	return 0;
}