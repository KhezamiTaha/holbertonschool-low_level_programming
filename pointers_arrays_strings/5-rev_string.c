#include "main.h"

/**
 *rev_string - Algorithms function
 *@s: integer
 *
 *Return: 1 or 0
 */
void rev_string(char *s)
{
	int i = 0;
	int length = 0;
	char c;

	while (*(s + i) != '\0')
	{
		length += 1;
		i++;
	}
	i = 0;

	while (i < (length / 2))
	{
		c = *(s + i);
		*(s + i) = *(s + (length - i - 1));
		*(s + (length - i - 1)) = c;
		i++;
	}



}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
