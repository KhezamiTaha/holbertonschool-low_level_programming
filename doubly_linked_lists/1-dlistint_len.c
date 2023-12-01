#include "lists.h"

/**
 *dlistint_len - Algorithms function
 *@h: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t i;

	for (i = 0; ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	return (i);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
