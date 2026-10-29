#include <stdio.h>

int main() {
    float n, s;  

    printf("Digite o seu salario: ");
    scanf("%f", &n);
        
    if (n <= 750){
        s = n + 100;
    }

    else{
        s = n + (0.05 * n);
    }

    printf("Depois do reajuste, o seu salario ficou no valor de %.2f reais\n", s);
    return 0;
}