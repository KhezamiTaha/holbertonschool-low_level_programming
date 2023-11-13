#include "main.h"

/**
 *
_array_range.c
 - Algorithms function
 *@: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr) );
	if (ptr == NULL)
	{
		printf("Not enough memory!");
		return (NULL);
	}
	for (i = min; i <= max; i++)
		ptr[i] = i;
	return (ptr);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
