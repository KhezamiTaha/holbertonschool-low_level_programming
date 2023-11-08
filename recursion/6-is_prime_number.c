#include "main.h"

/**
 *prime - Algorithms function
 *@n: pointer
 *@s: pointer
 *
 *Return: 1 or 0
 */
int prime(int n, int s)
{
	if (n % s == 0)
		return (0);
	if (s > n / 2)
		return (1);
	return (prime(n, s + 1));
}

/**
 *is_prime_number - Algorithms function
 *@n: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
