#include "main.h"

/**
 *str_concat - Algorithms function
 *@s1: pointer
 *@s2: pointer
 *
 *Return: 1 or 0
 */
char *str_concat(char *s1, char *s2)
{
	char *pointer_to_new_string;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		return (s1);
	}
	pointer_to_new_string = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (pointer_to_new_string == NULL)
	{
		printf("Not enough memory!");
		return (NULL);
	}
	pointer_to_new_string = strcat(pointer_to_new_string, s1);
	pointer_to_new_string = strcat(pointer_to_new_string, s2);
	return (pointer_to_new_string);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
