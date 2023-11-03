#include "main.h"

/**
 *string_toupper - Algorithms function
 *@up: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
char *string_toupper(char *up)
{
	int i;

	for (i = 0; up[i] != '\0'; i++)
	{
		if (up[i] >= 'a' && up[i] <= 'z')
			up[i] = up[i] - 32;
	}
	return (up);


}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
