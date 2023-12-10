#include "hash_tables.h"

/**
 *hash_table_create - Algorithms function
 *@size: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	table->array = malloc(sizeof(hash_node_t *) * size);
	table->size = size;
	return (table);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
