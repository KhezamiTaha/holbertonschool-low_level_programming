#include "main.h"

/**
 *_strchr - Algorithms function
 *@s: pointer  the string s
 *@c: first occurrence of the character c
 *
 *Return: 1 or 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return ((s + i));
	}
	return ((s + i));
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
