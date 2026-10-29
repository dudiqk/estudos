#include <stdio.h>

int main() {  
    int x, y, resultado;
    printf("Digite x: ");
    scanf("%d", &x);

    printf("Digite y: ");
    scanf("%d", &y);

    resultado = x * y;

    printf("O resultado da multiplicacao e: %d\n", resultado);

    return 0;
}