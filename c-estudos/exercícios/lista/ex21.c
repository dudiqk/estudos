#include <stdio.h>
#include <math.h>

int main() {
	int n, i, fat=1;
	do {
		printf("Digite um numero: ");
		scanf("%d", &n);
	} while (n<0);
	i = n;
	while (i>0) {
		fat = fat * i;
		i--;
	}
	printf("\nO fatorial de %d e %d", n, fat);

	return 0;
}