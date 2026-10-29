#include <stdio.h>

int main()
{
    float tf, tc;
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &tf);
    tc = (tf-32.0) * (5.0 / 9.0);
    printf("A temperatura em Celsius é %.2f\n", tc);
    return 0;
}