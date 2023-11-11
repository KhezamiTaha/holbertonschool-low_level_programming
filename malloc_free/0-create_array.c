#include "main.h"

/**
 *create_array - Algorithms function
 *@size: unsigned int
 *@c: char
 *
 *Return: 1 or 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		printf("Not enough memory!");
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = c;
	array[i] = '\0';
	return (array);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
