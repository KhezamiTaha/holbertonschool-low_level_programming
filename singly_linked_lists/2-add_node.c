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
	 if (temp == NULL)
    {
        printf("Error\n");
        return (1);
    }

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
