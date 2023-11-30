#include "lists.h"

/**
 *print_list - Algorithms function
 *@h: pointer to node
 *@: pointer
 *
 *Return: 1 or 0
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t i = 0;

	for (i = 0; ptr != NULL; i++)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s", ptr->len, ptr->str);
		ptr = ptr->next;
		printf("\n");
	}
	return (i);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
