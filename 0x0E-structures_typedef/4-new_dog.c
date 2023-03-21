#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog  - creates a new dog instance and returns it
* @name: name of dog,
* @age: age,
* @owner: owner
* Return: dog instance
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	int i, k;
	char *dog_name, *dog_owner;

	if (d == NULL)
		return (NULL);

	dog_name = malloc((strlen(name) + 1) * sizeof(char));

	if (dog_name == NULL)
	{
		free(d);
		free(dog_name);
		return (NULL);
	}

	dog_owner = malloc((strlen(owner) + 1) * sizeof(char));

	if (dog_owner == NULL)
	{
		free(d);
		free(dog_owner);
		return (NULL);
	}

	k = strlen(name);

	for (i = 0; i < k; i++)
		dog_name[i] = name[i];
	dog_name[i] = '\0';

	k = strlen(owner);

	for (i = 0; i < k; i++)
		dog_owner[i] = owner[i];
	dog_owner[i] = '\n';

	d->name = dog_name;
	d->age = age;
	d->owner = dog_owner;

	return (d);
}
