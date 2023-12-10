#include "hash_tables.h"

/**
 *hash_table_set - Algorithms function
 *@ht: pointer
 *@key: pointer
 *@value: pointer
 *
 *Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_djb2((const unsigned char *)key);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
	}
	else
	{
		ht->array[index]->next = malloc(sizeof(hash_node_t));
		if (ht->array[index]->next == NULL)
			return (0);
		ht->array[index]->next->key = strdup(key);
		ht->array[index]->next->value = strdup(value);
	}
	return (1);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
