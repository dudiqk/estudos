#include <stdio.h>
#include <math.h>

int main(){
	int n;
	float x, total = 1, soma = 1;
	
    printf("Digite a base da potencia: ");
    scanf("%f", &x);

    do {
        printf("Digite o expoente maximo: ");
        scanf("%d", &n); 
    } while (n < 0);
	
	for (int i = 1; i <= n; i++){ 
        total *= x; 
        soma += total;
	}
    
    printf("\nA soma dos resultados e: %.2f", soma);
	return 0;
}