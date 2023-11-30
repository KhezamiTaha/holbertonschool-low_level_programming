#include "lists.h"

/**
 *free_list - Algorithms function
 *@head: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void free_list(list_t *head)
{
	list_t *ptr = head;
	size_t i = 0;



	for (i = 0; ptr != NULL; i++)
	{
		free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
