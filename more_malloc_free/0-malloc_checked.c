#include "main.h"

/**
 *malloc_checked - Algorithms function
 *@b: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
