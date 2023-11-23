#include "variadic_functions.h"

/**
 *print_strings - Algorithms function
 *@separator: pointer
 *@n: pointer
 *
 *Return: 1 or 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);
#define line "\n"
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf(line);
	va_end(strings);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */