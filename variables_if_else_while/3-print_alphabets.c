#include <stdio.h>

/**
*main - main des
*
*Return: return des
*/
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
