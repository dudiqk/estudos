#include <stdio.h>
#include <math.h>

int main()
{
    int x = 3;
    int y = x * (x + 1) * x++;
    printf("\nx e igual a %d e y e igual a %d.", x, y);
    
    int x2 = 5;
    int y2 = 3;
    y2 *= x2+1;
    printf("\nx e igual a %d e y e igual a %d.", x2, y2);

    return 0;
}