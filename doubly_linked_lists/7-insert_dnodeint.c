#include "lists.h"

/**
 *insert_dnodeint_at_index - Algorithms function
 *@h: pointer
 *@idx: pointer
 *@n: pointer
 *
 *Return: 1 or 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (temp == NULL)
	{
		return (NULL);
	}

	for (i = 0; ptr != NULL; i++)
		ptr = ptr->next;
	if (idx == 0)
		temp = add_dnodeint(h, n);
	else if (idx == i)
		temp = add_dnodeint_end(h, n);
	else
	{
		for (i = 0; i < idx; i++)
		{
			if (ptr == NULL)
				return (NULL);
			ptr = ptr->next;
		}
		temp->n = n;
		temp->next = ptr;
		temp->prev = ptr->prev;
		ptr->prev = temp;
		ptr = temp->prev;
		ptr->next = temp;
	}
	return (temp);
}
