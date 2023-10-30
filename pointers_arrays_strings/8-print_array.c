#include "main.h"

/**
 *print_array - Algorithms function
 *@a: integer array
 *@n: integer
 *
 *Return: 1 or 0
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
	{
		for (i = 0; i <= n - 1; i++)
		{
			if (i == n - 1)
				printf("%d\n", a[i]);

			else
				printf("%d, ", a[i]);
		}
	}
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
