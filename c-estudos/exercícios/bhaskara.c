#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, delta, x1, x2;

	printf("Digite os coeficientes a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0) {
		printf("\nO coeficiente 'a' deve ser diferente de zero.");
		return 1;
	}

	delta = pow(b, 2) - (4 * a * c);

	if (delta > 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("\nRaizes: %.2f e %.2f", x1, x2);
	}
	else if (delta == 0) {
		x1 = -b / (2 * a);
		printf("\nRaiz: %.2f", x1);
	}
	else
		printf("\nA equacao nao possui raizes reais.");

	return 0;
}
