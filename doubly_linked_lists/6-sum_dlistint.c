#include "lists.h"

/**
 *sum_dlistint - Algorithms function
 *@head: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	size_t i = 0, sum = 0;

	for (i = 0; ptr != NULL; i++)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
