#include "hash_tables.h"

/**
 *hash_table_delete - Algorithms function
 *@ht: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
		exit(1);

	for (i = 0; i < ht->size; i++)
	{

		temp = (ht->array[i]);
		while (temp != NULL)
		{
			temp = temp->next;
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}
	free(ht->array);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
