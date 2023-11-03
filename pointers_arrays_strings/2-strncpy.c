#include "main.h"

/**
 *_strncpy - Algorithms function
 *@dest: string pointer
 *@src: string pointer
 *@n: integer
 *Return: 1 or 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
