#include <stdio.h>

int main()
{
    char c;
    printf("Digite um caracter: ");
    scanf("%c", &c);
    
    printf("Decimal: %d\n", c);
    printf("Octal: %o\n", c);
    printf("Hexadecimal: %X\n", c);
    return 0;
}
