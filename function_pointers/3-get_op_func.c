#include "3-calc.h"
/**
 *get_op_func - Algorithms function
 *@s: pointer
 *
 *
 *Return: 1 or 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && strlen(s) == 1)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
