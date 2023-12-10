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
	unsigned long int i = 0;
	char *seperator;

	if (ht == NULL)
		exit(1);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		seperator = "";
		temp = (ht->array[i]);
		while (temp != NULL)
		{
			printf("'%s' : '%s'%s", temp->key, temp->value, seperator);
			temp = temp->next;
			seperator = ", ";
		}
		printf("%s", seperator);
	}
	printf("}\n");
}


/**
 * To-Do :  Variables Description
 *          Formt document
 */
