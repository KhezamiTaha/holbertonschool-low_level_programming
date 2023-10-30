#include "main.h"

/**
 *puts_half - Algorithms function
 *@str: integer
 *
 *Return: 1 or 0
 */
void puts_half(char *str)
{
	int i = 0;
	int length = 0;

	while (*(str + i) != '\0')
	{
		length += 1;
		i++;
	}

	if (length % 2 == 0)
	{
		i = (length / 2);
		while (*(str + i) != '\0')
		{
			_putchar(*(str + i));
			i++;
		}
		_putchar(10);
	}
	else
	{
		i = (length / 2) + 1;
		while (*(str + i) != '\0')
		{
			_putchar(*(str + i));
			i++;
		}
		_putchar(10);
	}
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
