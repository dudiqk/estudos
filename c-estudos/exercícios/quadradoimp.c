#include <stdio.h>

int main()
{
	int n, i, quad=0, impar=1;
	printf("Digite um numero: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		quad = quad + impar;
		impar += 2;
	}
	printf("\n%d", quad);
	return 0;
}
