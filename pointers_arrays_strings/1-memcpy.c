#include "main.h"

/**
 *_memcpy   - Algorithms function
 *@dest: pointer
 *@src: pointer
 *@n: unsigned integer
 *
 *Return: 1 or 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
