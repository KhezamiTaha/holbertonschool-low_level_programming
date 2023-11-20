#include "3-calc.h"
/**
 * main - writes the character c to stdout
 * @argc: The character to print
 *@argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
		strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		int (*f)(int, int) = get_op_func(argv[2]);

		printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	}
	return (0);
}
