#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: the pointer to the struct dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = (char *) "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n Age: %f\n Owner: %s\n",
			d->age, d->owner);
		}
		if (d->age == NULL)
		{
			printf("Name: %s\n Age: (nil)\n Owner: %s\n",
			d->name, d->owner);
		}
		if (d->owner == NULL)
		{
			printf("Name: %s\n Age: %f\n Owner: (nil)\n",
			d->name, d->owner);
		}
		printf("Name: %s\n Age: %f\n Owner: %s\n",
		d->name, d->age, d->owner);
	}
}
