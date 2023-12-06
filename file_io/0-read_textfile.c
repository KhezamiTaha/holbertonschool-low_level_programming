#include "main.h"

/**
 *read_textfile - Algorithms function
 *@filename: pointer
 *@letters: pointer
 *
 *Return: 1 or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor, n;
	char buffer[700];

	filedescriptor = open(filename, O_RDONLY);
	n = read(filedescriptor, buffer, letters);
	if (n == -1)
		return (0);
	if (STDOUT_FILENO == STDERR_FILENO)
		write(2, buffer, n);
	else
		write(1, buffer, n);
	close(filedescriptor);
	return (n);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
