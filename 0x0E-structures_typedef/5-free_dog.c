#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the dog_t memory pointer d
 * @d: the pointer to the memory space
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
