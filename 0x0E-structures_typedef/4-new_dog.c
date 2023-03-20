#include <stdlib.h>
#include "dog.h"

/**
* dog_t  - creates a new dog instance and returns it
* @name: name of dog,
* @age: age, 
* @owner: owner
* Return: dog instance
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
