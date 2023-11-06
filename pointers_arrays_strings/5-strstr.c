#include "main.h"
#include <string.h>
/**
 *_strstr - Algorithms function
 *@haystack: pointer
 *@needle: pointer
 *
 *Return: 1 or 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, ii, len;

	len = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		ii = i;
		if (haystack[ii] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[ii] == needle[j])
				{
					len = len + 1;
					ii++;
				}
			}
			if (len == strlen(needle))
				return (haystack + i);
		}
	}
	return ('\0');
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
