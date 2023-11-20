#include "function_pointers.h"

/**
 *array_iterator - Write a function that executes a function given as a
 *parameter on each element of an array.
 *@array: pointer
 *@size: pointer
 *@action: pointer
 *Return: 1 or 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action == NULL || array == NULL)
		exit(0);
	for (i = 0; i < size; i++)
		action(array[i]);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
