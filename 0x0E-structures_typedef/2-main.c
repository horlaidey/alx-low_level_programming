#include <stdio.h>
#include "dog.h"
#include "dog.h"

/**
 * main - check code 
 *
 * Return: Always 0
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = NULL;
	my_dog.age = 3.5;
	my_dog.owner = NULL;
	print_dog(&my_dog);
	return (0);
}
