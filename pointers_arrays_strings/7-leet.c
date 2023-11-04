#include "main.h"

/**
 *leet - Algorithms function
 *@s: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
char *leet(char *s)
{
	int i, j;
	char mozart[] = "AEOLTaeolt";
	char encode[] = "4301743017";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; mozart[j] != '\0'; j++)
		{
			if (s[i] == mozart[j])
				s[i] = encode[j];
		}
	}
	return (s);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
