#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - a function that prints a struct dog
 *@d: pointer
 *@: pointer
 *
 *Return: 1 or 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
