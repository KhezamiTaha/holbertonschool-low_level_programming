#include "main.h"

/**
 *_strdup - Algorithms function
 *@str: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
char *_strdup(char *str)
{
	char *pointer_to_new_string;

	if (str == NULL)
		return (NULL);

	pointer_to_new_string = malloc((strlen(str) + 1) * sizeof(char));
	if (pointer_to_new_string == NULL)
	{
		printf("Not enough memory!");
		return (NULL);
	}
	strcpy(pointer_to_new_string, str);
	return (pointer_to_new_string);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
