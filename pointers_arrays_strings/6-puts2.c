#include "main.h"

/**
 *puts2 - Algorithms function
 *@str: integer
 *
 *Return: 1 or 0
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
		if (*(str + i) != '\0')
			i++;
	}
	_putchar(10);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
