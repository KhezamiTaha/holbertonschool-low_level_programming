#include "main.h"

/**
 *print_rev - Algorithms function
 *@s: integer
 *
 *Return: 1 or 0
 */
void print_rev(char *s)
{
	int i = 0;
	int length = 0;


	while (*(s + i) != '\0')
	{
		length += 1;
		i++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
