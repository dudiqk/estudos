#include <stdio.h>

int main() {
    printf("Bem vindo ao nosso jogo de adivinhacoo\n");

    int numerosecreto = 42;
    // printf("O número é %d é o secreto. Não conte pra ninguém.\n", numerosecreto);

    int chute;
    printf("Qual e o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute e %d\n", chute);

    return 0;
}