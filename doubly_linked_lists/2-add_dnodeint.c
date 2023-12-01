#include "lists.h"

/**
 *add_dnodeint - Algorithms function
 *@head: pointer to pointer to struct
 *@n: pointer
 *
 *Return: 1 or 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));


	if (temp == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (*head);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
