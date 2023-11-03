#include "main.h"
#include <string.h>

/**
 *cap_string - Algorithms function
 *@str: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
char *cap_string(char *str)
{
	int i;
	char characters[] = "\n\t ,.;!?)(}{";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[0] >= 'a' && str[i] <= 'z'))
			*str = *str - 32;
		if (strchr(characters, str[i]) != NULL)
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
