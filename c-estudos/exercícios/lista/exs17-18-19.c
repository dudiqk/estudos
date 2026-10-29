// 17
#include <stdio.h>

int main(){
    int n, numero, soma = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Erro! n deve ser maior que zero.\n");
        printf("Digite a quantidade de numeros: ");
        scanf("%d", &n);
    }
    
    for (int i = 1; i <= n; i++) { // o laço se repete n vezes
        printf("Digite o %d numero: ", i); // i vai de 1 até n, então o laço se repete n vezes
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A soma dos elementos e: %d\n", soma);

    return 0;
}

// 18
#include <stdio.h>

int main(){
    int n, numero, soma = 0;
    float media = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Erro! n deve ser maior que zero.\n");
        printf("Digite a quantidade de numeros: ");
        scanf("%d", &n);
    }
    
    for (int i = 1; i <= n; i++) { // o laço se repete n vezes
        printf("Digite o %d numero: ", i); // i vai de 1 até n, então o laço se repete n vezes
        scanf("%d", &numero);
        soma += numero;
    }

    media = (float)soma / n; 

    printf("A media dos elementos e: %.2f\n", media);

    return 0;
}

// 19
#include <stdio.h>

int main(){
    int n, numero, maior = -1000000; // inicializa com um valor muito baixo para garantir que qualquer número digitado seja maior

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Erro! n deve ser maior que zero.\n");
        printf("Digite a quantidade de numeros: ");
        scanf("%d", &n);
    }
    
    for (int i = 1; i <= n; i++) { // o laço se repete n vezes
        printf("Digite o %d numero: ", i); // i vai de 1 até n, então o laço se repete n vezes
        scanf("%d", &numero);
        maior = numero > maior ? numero : maior;
    }

    printf("O maior dos elementos e: %d\n", maior);

    return 0;
}