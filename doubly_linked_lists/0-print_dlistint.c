#include "lists.h"

/**
 *print_dlistint - Algorithms function
 *@h: pointer to struct
 *@: pointer
 *
 *Return: 1 or 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t i;

	for (i = 0; ptr != NULL; i++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
