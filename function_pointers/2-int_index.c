#include "function_pointers.h"

/**
 *int_index - Algorithms function
 *@array: pointer
 *@size: pointer
 *@cmp: pointer
 *Return: 1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		exit(0);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
