#include "main.h"

/**
 *_strncat - Algorithms function
 *@dest: string pointer
 *@src: string pointer
 *@n: integer
 *Return: 1 or 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j <= n - 1)
	{

		*(dest + i) = *(src + j);
		i++;
		j++;
		if (j == n - 1)
			*(dest + i) = '\0';
		if (*(src + j) == '\0')
			break;
	}
	return (dest);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
