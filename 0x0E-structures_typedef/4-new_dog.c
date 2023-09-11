#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: NULL (Failure) || cutie_dog (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dogcraze;
	int i, j;
	char *nc, *oc;

	nc = malloc(_strlen(name) + 1);
	if (!nc)
		return (NULL);
	oc = malloc(_strlen(owner) + 1);
	if (!oc)
	{
		free(nc);
		return (NULL);
	}
	dogcraze = malloc(sizeof(dog_t));
	if (!dogcraze)
	{
		free(nc);
		free(oc);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		nc[i] = name[i];
	nc[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
		oc[j] = owner[j];
	oc[j] = '\0';

	dogcraze->name = name;
	dogcraze->age = age;
	dogcraze->owner = owner;
	return (dogcraze);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
		c++;
	return (c);
}
