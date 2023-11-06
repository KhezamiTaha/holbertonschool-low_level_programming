#include "main.h"

/**
 *_strpbrk - Algorithms function
 *@s: pointer
 *@accept: pointer
 *
 *Return: 1 or 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */ 
