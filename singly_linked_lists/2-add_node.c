#include "lists.h"

/**
 *add_node - Algorithms function
 *@head: pointer to struct
 *@str: pointer string
 *
 *Return: 1 or 0
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *temp = malloc(sizeof(list_t));

	temp->str = (char *)str;
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
