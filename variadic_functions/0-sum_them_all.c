#include "variadic_functions.h"

/**
 *sum_them_all - Algorithms function
 *@n: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		int get = va_arg(numbers, int);

		sum += get;
	}
	va_end(numbers);
	return (sum);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
