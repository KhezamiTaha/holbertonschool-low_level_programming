#include "main.h"

/**
 *print_binary - Algorithms function
 *@n: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while ((mask & n) == 0)
	{
		mask >>= 1;
	}

	for (i = 0; mask != 0; i++)
	{
		if ((mask & n) != 0)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}

		mask >>= 1;
	}
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
