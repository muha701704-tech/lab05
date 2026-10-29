#include <stdio.h>
#define MAT 5

int main(void)
{
	int i, j;

	for (i = 0; i < MAT; i++)
	{
		for (j = 0; j < MAT; j++)
		{
		 printf("%d ", (i + j) % 2);
		}
		printf("\n");
	}
	return 0;
}