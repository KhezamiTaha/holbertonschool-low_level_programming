#include "main.h"

/**
 * main - check the code
 *@ac: pointer
 *@av: pointer
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, n = 1024;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s", av[2]);
		exit(99);
	}

	while (n == 1024)
	{
		n = read(fd_from, buffer, n);
		write(fd_to, buffer, n);
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
