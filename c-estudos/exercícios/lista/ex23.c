#include <stdio.h>

float total_inicial(float mercadorias, float soma){
    soma += mercadorias;
    return soma;
}

float valor_final(float soma){
    if (soma < 50){
        return soma - (soma * 0.05);
    } else if (soma >= 50 && soma <= 100){
        return soma - (soma * 0.10);
    } else if (soma <= 200) {
        return soma - (soma * 0.15);
    } else {
        return soma - (soma * 0.20);
    }
}

int main(){

    float mercadorias, soma = 0;

    do {
        printf("Digite o valor da mercadoria (digite 0 para encerrar): ");
        scanf("%f", &mercadorias);

        if (mercadorias > 0) {
            soma = total_inicial(mercadorias, soma);
        }

    } while (mercadorias > 0);

    float total = valor_final(soma);
    printf("O valor total a ser pago, apos a aplicacao do desconto, e: %.2f\n", total);

    return 0;
}