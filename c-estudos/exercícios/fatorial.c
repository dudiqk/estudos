#include <stdio.h>
#include <math.h>

int main() {
	int n, i, fat=1;
	do {
		printf("Digite um numero: ");
		scanf("%d", &n);
	} while (n<0);

	for (i=1; i<=n; i++) {
		fat *= i;
	}
	printf("\nO fatorial de %d e %d", n, fat);

	return 0;
}

// Faça uma função que calcule o fatorial de um número inteiro positivo. A função deve receber o número como parâmetro e retornar o fatorial. No programa principal, solicite ao usuário que digite um número inteiro positivo e utilize a função para calcular e exibir o fatorial desse número.
#include <stdio.h>

int fatorial(int num) { // int num é o parâmetro da função fatorial, que representa o número para o qual queremos calcular o fatorial, não é o n pois 
	if (num == 0 || num == 1) {
		return 1;
	} else {
		return num * fatorial(num - 1); // esse fatorial é oque
	}
}

int main() {
	int n;
	do {
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &n);
	} while (n < 0);

	int resultado = fatorial(n);
	printf("O fatorial de %d e %d\n", n, resultado);

	return 0;
}