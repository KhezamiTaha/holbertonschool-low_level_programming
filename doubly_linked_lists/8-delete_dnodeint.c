#include "lists.h"

/**
 *delete_dnodeint_at_index - Algorithms  function
 *@head: pointer
 *@index: pointer
 *
 *Return: 1 or 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *ptrleft, *ptrRight;
	unsigned int i;
	if (*head != NULL)
	{
		for (i = 0; ptr->next != NULL; i++)
		{
			ptr = ptr->next;
		}
	}
	else
		return (-1);

	if (index == 0)
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		return (1);
	}
	else if (index == i)
	{
		ptrleft = ptr->prev;
		ptrleft->next = NULL;
		return (1);
	}
	else
	{
		ptr = *head;
		for (i = 0; i < index; i++)
		{
			if (ptr == NULL)
				return (-1);
			ptr = ptr->next;
		}
		ptrleft = ptr->prev;
		ptrRight = ptr->next;
		ptrleft->next = ptrRight;
		ptrRight->prev = ptrleft;
		return (1);
	}
	return (-1);
}
