#include <stdio.h>

int main()
{
    int n, q;
    printf("Digite um numero para ver seu quadrado perfeito: ");
    scanf("\n%d", &n);
    
    while (n>0){
        
        q = n * n;
        printf("%d", q);
        
        printf("\nDigite outro numero: ");
        scanf("%d", &n);
    }
    return 0;
}
