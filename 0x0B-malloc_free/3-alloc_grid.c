#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to a 2 dimensional array integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int));
	*ptr = malloc(width * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			*(*(ptr + j) + i) = 0;
		}
	}
	return (ptr);
}
