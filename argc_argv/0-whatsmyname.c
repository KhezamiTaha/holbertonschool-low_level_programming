#include "main.h"
/**
 * main - writes the character c to stdout
 * @argc: The character to print
 *@argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	puts(argv[0]);
	return (0);
}
