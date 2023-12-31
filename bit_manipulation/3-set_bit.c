#include "main.h"

/**
 *set_bit - Algorithms function
 *@n: pointer
 *@index: pointer
 *
 *Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
