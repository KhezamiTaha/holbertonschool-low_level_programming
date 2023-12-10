#include "hash_tables.h"

/**
 *hash_table_print - Algorithms function
 *@ht: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i, count = 0;

	if (ht == NULL)
		exit(1);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		temp = (ht->array[i]);
		while (temp != NULL)
		{
			if (!count)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				count = 1;
			}

			else
				printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
