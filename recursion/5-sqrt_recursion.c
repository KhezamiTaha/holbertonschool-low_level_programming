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
	if (n % s == 0)
		return (0);
	if (s > n/2)
		return (1);
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
	if (n <= 1)
		return (0);
	return (sqrtt(n, 2));
}
