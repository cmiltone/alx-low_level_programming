#include <stdlib.h>
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
	d = malloc(sizeof(struct dog));
	
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
