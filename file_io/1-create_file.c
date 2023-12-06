#include "main.h"

/**
 *create_file - Algorithms function
 *@filename: pointer
 *@text_content: pointer
 *
 *Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	return (1);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
