#include <stdio.h>
int main(void) 
{
    double x, y; int i = 1;
    for (x = -2.0; x <= 2.0; x += 0.5)
    {
        y = x * x * x - x;
        printf("%d %.4f %.4f\n", i, x, y);
        i++;
    }

    return 0;
}