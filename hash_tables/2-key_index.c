#include "hash_tables.h"

/**
 *key_index - Algorithms function
 *@key: pointer
 *@size: pointer
 *
 *Return: 1 or 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
