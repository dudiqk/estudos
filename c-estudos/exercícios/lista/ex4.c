#include <stdio.h>

int main (){

    float n1, n2;
    do {
        printf("Digite um numero: ");
        scanf("%f", &n1);
        printf("Digite outro numero: ");
        scanf("%f", &n2);
    } while (n1==n2);

    printf("Ordem crescente: %.2f e %.2f\n", (n1 < n2 ? n1 : n2), (n1 < n2 ? n2 : n1));

    return 0;
}