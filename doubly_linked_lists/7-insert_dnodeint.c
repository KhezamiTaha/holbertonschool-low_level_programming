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
		printf("Error\n");
		return (NULL);
	}

	temp->n = n;

	for (i = 0; i < idx; i++)
	{
		if (ptr == NULL)
		{
			printf("(nil)");
			return (NULL);
		}

		ptr = ptr->next;
	}
	temp->next = ptr;
	temp->prev = ptr->prev;
	ptr->prev = temp;
	return (temp);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
