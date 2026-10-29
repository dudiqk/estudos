// Professora, tive que juntar os exercícios 4, 5, 6, 7, 8 e 9 em um único arquivo para caber na entrega, mas todos os exercícios estão funcionando corretamente.

// 4
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

// 5
#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf("O maior numero e: %.2f\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("O maior numero e: %.2f\n", n2);
    } else {
        printf("O maior numero e: %.2f\n", n3);
    }

    return 0;
}

// 6
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

// 7
#include <stdio.h>

int main (){

    float n1, n2;
    do {
        printf("Digite um numero: ");
        scanf("%f", &n1);
        printf("Digite outro numero: ");
        scanf("%f", &n2);
    } while (n1==n2);

    printf("O maior numero e: %.2f\n", n1 < n2 ? n2 : n1);

    return 0;
}

// 8
#include <stdio.h>

int main() {
    int e;

    printf("Digite o numero de erros no processo: ");
    scanf("%d", &e);

    printf("%d %s detectado%s.\n",
        e,
        e == 1 ? "erro" : "erros",
        e == 1 ? "" : "s");

    return 0;
}

// 9
#include <stdio.h>

int main(){
    int v;
    printf("Digite um valor: ");
    scanf("%d", &v);

    printf("%s\n", (v == 0) ? "false" : "true");

    return 0;
}