#include "main.h"
/**
 * array_range - creates an array of integer
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: pointer to the new array of integer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
