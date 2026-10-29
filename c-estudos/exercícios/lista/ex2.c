#include <stdio.h>

int main() {
    int n, nd;
    do {
        printf("Digite o numero de lados do poligono convexo: ");
        scanf("%d", &n);
        
        if (n < 3) {
            printf("O poligono deve ter pelo menos 3 lados.\n");
        }
    } while (n < 3);

    nd = (n * (n - 3)) / 2;

    printf("O numero de diagonais de um poligono de %d lados e %d\n", n, nd);

    return 0;
}