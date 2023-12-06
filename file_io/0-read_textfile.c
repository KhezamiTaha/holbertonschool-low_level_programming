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
	char buffer[7000];

	filedescriptor = open(filename, O_RDONLY);
	n = read(filedescriptor, buffer, letters);
	write(1, buffer, n);
	close(filedescriptor);
	if (n == -1)
		n = 0;
	return (n);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
