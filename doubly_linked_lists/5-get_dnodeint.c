#include "lists.h"

/**
 *get_dnodeint_at_index - Algorithms function
 *@head: pointer
 *@index: pointer
 *
 *Return: 1 or 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
