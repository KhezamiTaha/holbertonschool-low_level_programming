#include "main.h"

/**
 *_strcmp - Algorithms function
 *@s1: integer
 *@s2: integer
 *
 *Return: 1 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{

			return (-1);
		}

		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
