#include "main.h"

/**
 *_print_rev_recursion - Algorithms function
 *@s: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{

		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
