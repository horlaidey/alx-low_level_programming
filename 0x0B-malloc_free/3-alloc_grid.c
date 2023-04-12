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
	ptr = malloc(width * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(height * sizeof(int));
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
