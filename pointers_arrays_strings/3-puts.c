#include "main.h"

/**
 *_puts - Algorithms function
 *@str: char pointer
 *
 *Return: 1 or 0
 */
void _puts(char *str)
{
	int i;
	int l;

	l = _strlen(str);

	for (i = 0; i < l; i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
