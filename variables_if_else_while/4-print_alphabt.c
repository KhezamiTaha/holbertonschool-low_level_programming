#include <stdio.h>

/**
 *main - des goes here
 *
 *Return: des goes here
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
	}
	putchar('\n');

	return (0);
}
