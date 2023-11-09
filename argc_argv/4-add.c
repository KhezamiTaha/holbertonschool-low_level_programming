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
	unsigned int long j;
	int i, check = 0, sum = 0;
	char *str;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!(isdigit(str[j])))
				{
					printf("Error\n");
					return (1);
					check = 1;
				}
			}
			if (check == 0)
				sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
