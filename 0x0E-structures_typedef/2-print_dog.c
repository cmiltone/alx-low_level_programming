#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints values of struct dog instance
* @d: the dog struct instance
* Return: void
*/
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d != NULL)
	{
		name = d->name;
		age = d->age;
		owner = d->owner;

		if (name != NULL)
			printf("Name: %s\n", name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", age);
		if (owner != NULL)
			printf("Owner: %s\n", owner);
		else
			printf("Owner: (nil)\n");
	}
}
