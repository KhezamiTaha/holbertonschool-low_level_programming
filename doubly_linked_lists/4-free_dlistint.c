#include "lists.h"

/**
 *free_dlistint - Algorithms function
 *@head: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	size_t i = 0;

	for (i = 0; ptr != NULL; i++)
	{
		free(ptr);
		ptr = ptr->next;
	}
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
