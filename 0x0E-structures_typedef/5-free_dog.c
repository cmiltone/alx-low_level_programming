#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees dog
* @d: dog
* Return: void
*/

void free_dog(dog_t *d)
{
    free(d);
}