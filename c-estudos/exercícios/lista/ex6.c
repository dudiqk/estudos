#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3) {
        if (n2 <= n3) {
            printf("Ordem crescente: %.2f, %.2f e %.2f\n", n1, n2, n3);
        } else {
            printf("Ordem crescente: %.2f, %.2f e %.2f\n", n1, n3, n2);
        }
    } 
    else if (n2 <= n1 && n2 <= n3) {
        if (n1 <= n3) {
            printf("Ordem crescente: %.2f, %.2f e %.2f\n", n2, n1, n3);
        } else {
            printf("Ordem crescente: %.2f, %.2f e %.2f\n", n2, n3, n1);
        }
    } 
    else {
        if (n1 <= n2) {
            printf("Ordem crescente: %.2f, %.2f e %.2f\n", n3, n1, n2);
        } else {
            printf("Ordem crescente: %.2f, %.2f e %.2f\n", n3, n2, n1);
        }
    }

    return 0;
}
