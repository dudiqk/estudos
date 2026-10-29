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

// *************************************

int main() {
    int e;

    printf("Digite o numero de erros no processo: ");
    scanf("%d", &e);

    printf("%d %s detectado%s.\n", e, e == 1 ? "erro" : "erros", e == 1 ? "" : "s");

    return 0;
}
