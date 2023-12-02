#include "lists.h"
/**
 *delete_dnodeint_at_index - Algorithms  function
 *@head: pointer
 *@index: pointer
 *Return: 1 or 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *ptrleft;
	unsigned int i;

	if (*head != NULL)
		for (i = 0; ptr->next != NULL; i++)
			ptr = ptr->next;
	else
		return (-1);
	if (index == 0)
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
			ptr = NULL;
		}
	}
	else if (index == i)
	{
		ptr->prev->next = NULL;
		free(ptr);
		ptr = NULL;
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
		ptrleft->next = ptr->next;
		ptr->next->prev = ptrleft;
		free(ptr);
		ptr = NULL;
	}
	return (1);
}
