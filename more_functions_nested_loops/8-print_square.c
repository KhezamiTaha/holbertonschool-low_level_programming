#include "main.h"

/**
 *print_square - Algorithms function
 *@size: integer
 *
 *Return: 1 or 0
 */
void print_square(int size)
{
	int i, p;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (p = 1; p <= size; p++)
			{
				_putchar('#');
			}
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
