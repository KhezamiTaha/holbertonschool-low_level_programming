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
	int l, ll;

	l = _strlen("I do not fear computers. ");
	ll = _strlen("I fear the lack of them - Isaac Asimov");
	for (i = 0; i < (l + ll); i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
