#include "main.h"

/**
 *append_text_to_file - Algorithms function
 *@filename: pointer
 *@text_content: pointer
 *
 *Return: 1 or 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	return (1);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
