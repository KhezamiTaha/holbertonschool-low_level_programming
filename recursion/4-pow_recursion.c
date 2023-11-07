#include "main.h"

/**
 *_pow_recursion - Algorithms function
 *@x: pointer
 *@y: pointer
 *
 *Return: 1 or 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y = y - 1;
	return (x * _pow_recursion(x, y));
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
