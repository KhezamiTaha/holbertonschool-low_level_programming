#include "lists.h"

/**
 *add_node_end - Algorithms function
 *@head: pointer to the head
 *@str: pointer
 *
 *Return: 1 or 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
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
	}
	return (temp);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
