#include "main.h"

/**
 *_strlen_recursion - Algorithms function
 *@s: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (n);
	}
	else
	{
		n = 1;
		return (n + _strlen_recursion(s + 1));
	}
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
