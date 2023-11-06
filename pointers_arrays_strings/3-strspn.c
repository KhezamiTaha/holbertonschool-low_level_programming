#include "main.h"

/**
 *_strspn - Algorithms function
 *@s: pointer
 *@accept: pointer
 *
 *Return: 1 or 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, leng;

	leng = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				leng = leng + 1;
		}
		if (leng == i)
			break;
	}
	return (leng);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
