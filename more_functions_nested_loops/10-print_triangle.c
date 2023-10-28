#include "main.h"

/**
 *print_triangle - Algorithms function
 *@size: integer
 *
 *Return: 1 or 0
 */
void print_triangle(int size)
{
	int line, space, symbol;

	for (line = 1; line <= size; line++)
	{
		for (space = 1; space <= size - line; space++)
		{
			_putchar(' ');
		}
		for (symbol = 1; symbol <= line; symbol++)
		{
			_putchar('#');
		}
		_putchar(10);
	}

	if (size <= 0)
		_putchar(10);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
