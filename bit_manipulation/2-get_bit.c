#include "main.h"

/**
 *get_bit - Algorithms function
 *@n: pointer
 *@index: pointer
 *
 *Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{

		return (-1);
	}

	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
