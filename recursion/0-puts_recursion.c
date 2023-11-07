#include "main.h"

/**
 *_puts_recursion - Algorithms function
 *@s: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
