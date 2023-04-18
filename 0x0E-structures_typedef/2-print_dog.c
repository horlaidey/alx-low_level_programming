#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: the pointer to the struct dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n Age: %f\n Owner: %s\n",
		(d->name == NULL) ? "(nill)" : d->name,
		(d->age == 0) ? 0 : d->age,
		(d->owner == NULL) ? "(nil)" : d->owner);
	}
}
