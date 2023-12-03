#include "main.h"

/**
 *flip_bits - Algorithms function
 *@n: pointer
 *@m: pointer
 *
 *Return: 1 or 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_value, bit_value2;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	unsigned int i = 0, count = 0;

	while ((mask & n) == 0)
	{
		mask >>= 1;
	}
	for (i = 0; mask != 0; i++)
	{
		bit_value = (n & mask) ? 1 : 0;
		bit_value2 = (m & mask) ? 1 : 0;
		if (bit_value != bit_value2)
		{
			if (bit_value2 == 1)
			{
				n |= mask;
			}
			else
			{
				n &= ~mask;
			}
			count += 1;
		}
		mask >>= 1;
	}
	return (count);
}

	/**
	 * To-Do :  Variables Description
	 *          Formt document
	 */
