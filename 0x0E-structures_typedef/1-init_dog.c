#include <stdio.h>
#include "dog.h"
/**
 * init_dog: initialize a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: name value of the variable name
 * @age: age value of the variable age
 * @owner: the owner variable
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
