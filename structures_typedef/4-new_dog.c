#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *pN, *pO;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	pN = malloc(strlen(name) + 1);
	if (pN == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(pN, name);

	pO = malloc(strlen(owner) + 1);
	if (pO == NULL)
	{
		free(pN);
		free(d);
		return (NULL);
	}
	strcpy(pO, owner);

	d->name = pN;
	d->age = age;
	d->owner = pO;

	return (d);
}
