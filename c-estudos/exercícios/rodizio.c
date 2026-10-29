#include <stdio.h>

int main(){
    int n;
    printf("Digite o último dígito da placa de seu carro: ");
    scanf("%d", &n);
    
    switch (n) {
        case 1:
        case 2:
            printf("O dia do seu rodizio e segunda feira");
            break;
        case 3:
        case 4:
            printf("O dia do seu rodizio e terca feira");
            break;
        case 5:
        case 6:
            printf("O dia do seu rodizio e quarta feira");
            break;
        case 7:
        case 8:
            printf("O dia do seu rodizio e quinta feira");
            break;
        case 9:
        case 0:
            printf("O dia do seu rodizio e sexta feira");
            break;
        default:
            printf("Numero invalido");
    }
    
    printf(".");
    return 0;
}