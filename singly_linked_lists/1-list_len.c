#include "lists.h"

/**
 *list_len - Algorithms function
 *@h: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t i = 0;

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
