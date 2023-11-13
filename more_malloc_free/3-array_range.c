#include "main.h"

/**
 *array_range - Algorithms function
 *@min: pointer
 *@max: pointer
 *
 *Return: 1 or 0
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, a;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
	{
		printf("Not enough memory!");
		return (NULL);
	}
	a = min;
	for (i = 0; i < max - min + 1; i++)
	{
		ptr[i] = a;
		a++;
	}
	return (ptr);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
