#include "main.h"

/**
 *reverse_array - Algorithms function
 *@a: pointer
 *@n: integer
 *
 *Return: 1 or 0
 */
void reverse_array(int *a, int n)
{
	int i, nb;

	for (i = 0; i <= n / 2 - 1; i++)
	{
		nb = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = nb;
	}
}
i am here and i want to go home
/**
 * To-Do :  Variables Description
 *          Formt document
 */
