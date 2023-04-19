#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate through an array by its size
 * @array: the array to be iterated
 * @size: The array input length
 * @action: pointter to a callback function
 *
 * Return: Nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
