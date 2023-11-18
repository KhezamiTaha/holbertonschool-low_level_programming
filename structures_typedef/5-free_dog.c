#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - Write a function that frees dogs.
 *@d: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
