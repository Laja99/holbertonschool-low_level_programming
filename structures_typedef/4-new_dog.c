#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *pN, *pO;
	int lenN, lenO;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	lenN = _strlen(name);
	lenO = _strlen(owner);

	pN = malloc(lenN + 1);
	if (pN == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(pN, name);

	pO = malloc(lenO + 1);
	if (pO == NULL)
	{
		free(pN);
		free(d);
		return (NULL);
	}
	_strcpy(pO, owner);

	d->name = pN;
	d->age = age;
	d->owner = pO;

	return (d);
}
