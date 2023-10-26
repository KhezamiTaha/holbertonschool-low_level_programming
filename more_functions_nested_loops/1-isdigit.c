#include "main.h"

/**
 * _isdigit - Algorithms function
 *@c: integer
 *
 *Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}


#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}