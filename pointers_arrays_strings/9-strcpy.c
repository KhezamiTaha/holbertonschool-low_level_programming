#include "main.h"

/**
 *_strcpy - Algorithms function
 *@dest: destination string
 *@src: source string
 *
 *Return: 1 or 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = '0';

	printf("%d", j);

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
