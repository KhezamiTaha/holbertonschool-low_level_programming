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
	char *ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr= malloc(nmemb * size);
	if (ptr == NULL)
	{
		printf("Not enough memory!");
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		ptr[i] = '0';
	return (ptr);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
