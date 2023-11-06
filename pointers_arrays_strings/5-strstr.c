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
	unsigned int i, j, len;

	len = 0;
	if (*needle == 0)
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{

		if (haystack[i] == needle[0])
		{
			len = 0;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					len = len + 1;
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
