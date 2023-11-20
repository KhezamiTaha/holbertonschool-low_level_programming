#include "function_pointers.h"

/**
 *print_name - function that prints a name.
 *@name: pointer
 *@f: pointer
 *
 *Return: 1 or 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
