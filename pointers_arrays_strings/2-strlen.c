#include "main.h"

/**
 *_strlen - Algorithms function
 *@s: char poiner
 *
 *Return: 1 or 0
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (*(s + i) != '\0')
	{
		length += 1;
		i++;
	}
	return (length);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
