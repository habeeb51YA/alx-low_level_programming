#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog structure, or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *nameCopy, *ownerCopy;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	nameCopy = strdup(name);
	ownerCopy = strdup(owner);

	if (nameCopy == NULL || ownerCopy == NULL)
	{
		free(nameCopy);
		free(ownerCopy);
		free(newDog);
		return (NULL);
	}

	newDog->name = nameCopy;
	newDog->age = age;
	newDog->owner = ownerCopy;

	return (newDog);
}
