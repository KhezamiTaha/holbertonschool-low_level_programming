#include <stdlib.h>
#include <stdio.h>

char *_strstr(char *, char *);

/**
 * main - check the code for Holberton School students.
 *printf("%s\n", (t == NULL ? "nil" : t));
 * Return: Always 0.
 */
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f = "Holberton";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}