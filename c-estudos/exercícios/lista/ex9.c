#include <stdio.h>

int main(){
    int v;
    printf("Digite um valor: ");
    scanf("%d", &v);

    printf("%s\n", (v == 0) ? "false" : "true");

    return 0;
}