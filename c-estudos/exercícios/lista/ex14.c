#include <stdio.h>

int main()
{
    int y, x = 5;
    y = x++ + ++x;
    printf("x = %d \ny = %d", x, y);

    return 0;
}

// resultado: x = 7 e y = 12
// explicacao: 
// x++ fornece 5 e depois x vira 6
// ++x faz x virar 7 e fornece 7
// y = 5 + 7 = 12

#include <stdio.h>

int main()
{
    int y, x = 3;
    y = x * (x + 1) * x++;
    printf("x = %d \ny = %d", x, y);

    return 0;
}

// resultado: x = 4 e y = 36
// explicacao: 
// x = 3
// (x + 1) = 4
// x++ = 3 (so depois atualiza para 4)
// y = 3 * 4 * 3 = 36

#include <stdio.h>

int main()
{
    int x=5, y=3;
    y *= x + 1;
    printf("x = %d \ny = %d", x, y);

    return 0;
}

// resultado: x = 5 e y = 18
// explicacao: 
// y = 3 * (5 + 1) = 3 * 6 = 18