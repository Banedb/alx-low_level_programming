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

	nc = malloc(sizeof(name));
	oc = malloc(sizeof(owner));
	dogcraze = malloc(sizeof(dog_t));

	for (i = 0; name[i] != '\0'; i++)
		nc[i] = name[i];
	nc[i] = name[i];
	for (j = 0; name[j] != '\0'; j++)
		oc[j] = owner[j];
	oc[j] = owner[j];
	if (!dogcraze)
		return (NULL);

	dogcraze->name = name;
	dogcraze->age = age;
	dogcraze->owner = owner;
	return (dogcraze);
}
