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
	unsigned int i;

	if (str == NULL)
		return (NULL);

	pointer_to_new_string = malloc((strlen(str) + 1) * sizeof(char));
	if (pointer_to_new_string == NULL)
	{
		printf("Not enough memory!");
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
		pointer_to_new_string[i] = str[i];
	pointer_to_new_string[i] = '\0';
	return (pointer_to_new_string);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
