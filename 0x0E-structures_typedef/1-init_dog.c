#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* init_dog - initialzes struct dog
* @d: the dog struct instance
* @name: the name
* @age: the age
* @owner: the owner
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i, k;
	char *dog_name, *dog_owner;

	d = malloc(sizeof(struct dog));
	
	if (d != NULL)
	{
		dog_name = malloc((strlen(name) + 1) * sizeof(char));
		k = strlen(name);
		for (i = 0; i < k; i++)
			dog_name[i] = name[i];
		dog_name[i] = '\0';
		if (dog_name == NULL)
		{
			free(d);
			exit(1);
		}
		dog_owner = malloc((strlen(owner) + 1) * sizeof(char));
		if (dog_owner == NULL)
		{
			free(d);
			free(dog_name);
			exit(1);
		}
		k = strlen(owner);
		for (i = 0; i < k; i++)
			dog_owner[i] = owner[i];
		dog_owner[i] = '\0';
		d->name = dog_name;
		d->age = age;
		d->owner = dog_owner;
	}
}
