#include "main.h"

/**
 *print_diagonal - Algorithms function
 *@n: integer
 *
 *Return: 1 or 0
 */
void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space <= i - 1; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
