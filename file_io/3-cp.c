#include "main.h"
/**
 * main - check the code
 *@ac: pointer
 *@av: pointer
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, n = 1024;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (n == 1024)
	{
		n = read(fd_from, buffer, n);
		if (n == -1 || fd_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		n = write(fd_to, buffer, n);
		if (n == -1 || fd_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
	return (0);
}
