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
	int filedescriptor;
	char buffer[7000];

	filedescriptor = open(filename, O_RDONLY);
	read(filedescriptor, buffer, letters);
	write(1, buffer, letters);
	close(filedescriptor);
	return (letters);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
