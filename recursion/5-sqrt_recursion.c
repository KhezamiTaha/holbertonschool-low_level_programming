#include "main.h"

/**
 *sqrtt - Algorithms function
 *@n: pointer
 *@s: pointer
 *
 *Return: 1 or 0
 */
int sqrtt(int n, int s)
{
	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	return (sqrtt(n, s + 1));
}

/**
 *_sqrt_recursion - Algorithms function
 *@n: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrtt(n, 0));
}
