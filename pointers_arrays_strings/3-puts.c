#include "main.h"

/**
 *_puts - Algorithms function
 *@str: char pointer
 *
 *Return: 1 or 0
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
