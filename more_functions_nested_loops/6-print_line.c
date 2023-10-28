#include "main.h"

/**
 *print_line - Algorithms function
 *@: integer
 *
] *Return: 1 or 0
 */
void print_line(int c)
{

	int i;

	if (c <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= c; i++)
		{
			_putchar('_');
		}
	}
	if (c > 0)
		_putchar(10);
}

/*   To-Do :  Variables Description*/
