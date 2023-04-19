#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - returns the index of the first element for which cmp ret non 0
 * @array: Array elements to check through
 * @size: the number of elements in the array of array
 * @cmp: a pointer to the function used to compare values
 *
 * Return: the position of the first occurrence of non 0 return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
}
