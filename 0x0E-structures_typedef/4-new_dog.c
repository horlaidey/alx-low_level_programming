#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - create a function of type dog_t
 * @name: Input name
 * @age: input age
 * @owner: Input owner
 *
 * Return: pointer to dog_t data type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
