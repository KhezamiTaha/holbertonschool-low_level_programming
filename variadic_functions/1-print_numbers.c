#include "variadic_functions.h"

/**
 *print_numbers - Algorithms function
 *@n: pointer
 *@separator: pointer
 *
 *Return: 1 or 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */


while (*(format + i))
	{
		j = 0;
		printf("%c", *(format + i));
		while (array[j].type)
		{
			if (strchr(format, *(array[j].type)))
			{
				fptr = array[j].f;
				fptr(ptr);
				j++;
				break;
			}
		}
		printf("%lu", strlen(format));
		if (i < strlen(format))
			printf(", ");
		i++;
	}
	printf("\n");
}

