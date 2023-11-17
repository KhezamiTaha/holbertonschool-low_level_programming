#include "dog.h"

/**
 *init_dog - Algorithms function
 *@d: pointer
 *@name: pointer
 *@age: pointer
 *@owner: pointer
 *
 *Return: 1 or 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
