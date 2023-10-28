#include "main.h"

/**
 *more_numbers - Algorithms function
 *@: integer
 *
 *Return: 1 or 0
 */
void more_numbers(void)
{
	int i;
	int r;
	int first_digit;
	int second_digit;

	for (r = 0; r <= 9; r++)
	{
		for (i = 0; i <= 14; i++)
		{
			first_digit = i % 10;
			second_digit = i / 10;
			if (second_digit == 1)
			{
				_putchar('0' + second_digit);
			}
			_putchar(first_digit + '0');
		}

		_putchar(10);
	}
}

/*   To-Do :  Variables Description*/
