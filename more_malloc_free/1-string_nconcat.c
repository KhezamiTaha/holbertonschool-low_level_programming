#include "main.h"

/**
 *string_nconcat - function that concatenates two strings.
 *@s1: pointer
 *@s2: pointer
 *@n: pointer
 *Return: 1 or 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer_to_new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	pointer_to_new_string = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (pointer_to_new_string == NULL)
	{
		return (NULL);
	}
	pointer_to_new_string = strcat(pointer_to_new_string, s1);
	pointer_to_new_string = strncat(pointer_to_new_string, s2, n);
	return (pointer_to_new_string);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
