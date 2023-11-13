#include "main.h"

/**
 *_calloc - Algorithms function
 *@nmemb: pointer
 *@size: pointer
 *
 *Return: 1 or 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *m;

	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		printf("Not enough memory!");
		return (NULL);
	}
	m = ptr;
	for (i = 0; i < nmemb * size; i++)
		m[i] = 0;
	return (ptr);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
