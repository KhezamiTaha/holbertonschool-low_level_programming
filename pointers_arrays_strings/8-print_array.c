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

	for (i = 0; i <= n; i++)
	{
		if (i == n)
			printf("%d\n", a[i]);

		else
			printf("%d, ", a[i]);
	}
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
