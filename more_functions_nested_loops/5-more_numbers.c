#include "main.h"

/**
 *
more_numbers
 - Algorithms function
 *@: integer
 *
 *Return: 1 or 0
 */
void more_numbers(void)
{
	int i;
	int j;
	int r;

	for (r = 0; r <= 9; r++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		i = '1';
		for (j = '0'; j <= '4'; j++)
		{
			_putchar(i);
			_putchar(j);
		
		}
				_putchar(10);
	}
}

	/*   To-Do :  Variables Description*/
