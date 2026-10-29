#include <stdio.h>
int main(void) 
{
    double a[8], min; int i;

    for (i = 0; i < 8; i++)
    {
        a[i] = i + 1;
        printf("%.2f ", a[i]);
    }

    min = a[0];

    for (i = 1; i < 8; i++)
    {
        if (a[i] < min)
            min = a[i];
    }

    printf("\n%.2f\n", min);

    return 0;
}