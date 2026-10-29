#include <stdio.h>

int main() {  
    //cabeçalho
    printf("✧ ┈┈┈ʚ♡̷̷ɞ┈┈┈ ✧\n");
    printf("Bem vindo ao nosso jogo de adivinhação\n");
    printf("✧ ┈┈┈ʚ♡̷̷ɞ┈┈┈ ✧\n");

    int numerosecreto = 42;
    // printf("O número é %d é o secreto. Não conte pra ninguém.\n", numerosecreto);

    int chute;
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute é %d", chute);
}