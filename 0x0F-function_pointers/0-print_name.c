#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name base on the func pointer
 * @name: string parameter
 * @f: a function pointer acting as a callback
 *
 * Return: nothing
 */


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
