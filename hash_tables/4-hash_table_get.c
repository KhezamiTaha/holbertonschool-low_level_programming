#include "hash_tables.h"

/**
 *hash_table_get - Algorithms function
 *@ht: pointer
 *@key: pointer
 *
 *Return: 1 or 0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		temp = (ht->array[i]);
		while (temp != NULL)
		{
			if (!strcmp(temp->key, key))
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
