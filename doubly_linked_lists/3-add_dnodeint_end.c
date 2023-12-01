#include "lists.h"

/**
 *add_dnodeint_end - Algorithms function
 *@head: pointer
 *@n: pointer
 *
 *Return: 1 or 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (ptr == NULL)
		*head = temp;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->prev = ptr;
	}
	return (temp);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
