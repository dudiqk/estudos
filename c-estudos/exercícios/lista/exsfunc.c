// Crie um programa em C com uma função que receba um número inteiro. 
// A função deve retornar 1 se o número for positivo e 0 se for negativo (considere zero como neutro ou tratado à parte). 
// O programa principal (main) deve ler o número, chamar a função e mostrar o resultado na tela

#include <stdio.h>

int verificar_numero(int numero) {
    if (numero > 0) {
        return 1; // Número positivo
    } else if (numero < 0) {
        return 0; // Número negativo
    } else {
        return -1; // Número neutro (zero)
    }
}

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    int resultado = verificar_numero(numero);
    
    if (resultado == 1) {
        printf("O numero %d e positivo.\n", numero);
    } else if (resultado == 0) {
        printf("O numero %d e negativo.\n", numero);
    } else {
        printf("O numero e neutro (zero).\n");
    }
    
    return 0;
}

// Crie um programa que peça ao usuário para digitar dois números inteiros diferentes. 
// Faça uma função chamada obterMaior que receba esses dois números como parâmetros e retorne o maior deles. 
//Exiba o resultado na função main

#include <stdio.h>

int obterMaior(int n1, int n2){
    if (n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

int main() {
    int n1, n2;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &n1);
        printf("Digite outro numero inteiro: ");
        scanf("%d", &n2);
    } while (n1 == n2);
    
    int maior = obterMaior(n1, n2);

    printf("O maior numero eh %d", maior);

    return 0;
}


// Crie uma função que receba duas notas de um aluno como parâmetros. A função deve calcular a média aritmética:
// • Se a média for maior ou igual a 6.0, o aluno está aprovado.
// • Se for menor que 6.0, o aluno está em recuperação

#include <stdio.h> 

int obterMedia(float n1, float n2){
    float media = (n1 + n2) / 2;
    if (media >= 6){
        return 1; // aprovado
    }
    else{
        return 0; // reprovado
    }
}

int main(){
    float n1, n2;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    int aprovado = obterMedia(n1, n2);

    if (aprovado == 1){
        printf("O aluno esta aprovado.");
    }
    else{
        printf("O aluno esta em recuperação.");
    }

    return 0;
}