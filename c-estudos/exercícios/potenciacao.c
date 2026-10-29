#include <stdio.h>
#include <math.h>

int main(){
	int n;
	float x, total = 1;
	
	printf("Digite a base: ");
	scanf("%f", &x);
	
	printf("\nDigite a potencia: ");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++){
        total *= x;
	}
    
    printf("\n%.2f elevado a %d e igual a %.2f", x, n, total);
	return 0;
}