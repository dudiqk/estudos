#include <stdio.h>
#define PI 3.1415

int main()
{
    float raio, area, perimetro;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    perimetro = 2 * PI * raio;
    area = (raio * raio) * PI;
    printf("\nO perímetro do círculo é %.2f e sua área é %.2f", perimetro, area);

    return 0;
}