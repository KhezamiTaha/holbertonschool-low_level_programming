#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog -  function that creates a new dog.
 *@name: pointer
 *@age: pointer
 *@owner: pointer
 *Return: 1 or 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	return (newDog);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
