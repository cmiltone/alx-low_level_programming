#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the allocated mem
 * @old_size: old size
 * @new_size: new size
 *
 * Return: pointer
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	return (reallocarray(ptr, old_size, new_size));
}
