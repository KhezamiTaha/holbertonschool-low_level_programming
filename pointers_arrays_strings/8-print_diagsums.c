#include "main.h"

/**
 *print_diagsums - Algorithms function
 *@a: pointer
 *@size: integer
 *
 *Return: 1 or 0
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;

	for (i = 0; i < size * size;)
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
	}
	for (i = size - 1; i < size * size - 1;)
	{
		sum2 = sum2 + a[i];
		i = i + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
