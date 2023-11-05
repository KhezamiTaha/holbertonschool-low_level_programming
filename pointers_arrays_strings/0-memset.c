#include "main.h"

/**
 *_memset - Algorithms function
 *@s: a pointer to the memory area
 *@b:  constant byte b
 *@n: the size of the memory to add
 *
 *Return: 1 or 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
