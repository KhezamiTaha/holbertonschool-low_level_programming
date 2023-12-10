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
	unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;
	hash_node_t *temp;

	if (ht == NULL || !strcmp(key, ""))
		return (0);
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
		if (!strcmp(ht->array[index]->key, key))
		{
			ht->array[index] = malloc(sizeof(hash_node_t));
			if (ht->array[index] == NULL)
				return (0);
			ht->array[index]->key = strdup(key);
			ht->array[index]->value = strdup(value);
		}
		else
		{
			temp = ht->array[index];
			ht->array[index] = malloc(sizeof(hash_node_t));
			if (ht->array[index] == NULL)
				return (0);
			ht->array[index]->key = strdup(key);
			ht->array[index]->value = strdup(value);
			ht->array[index]->next = temp;
		}
	}
	temp = NULL;
	return (1);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
