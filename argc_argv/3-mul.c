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
	if (argc < 3)
	{	printf("ُError");
		printf("ُ\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

