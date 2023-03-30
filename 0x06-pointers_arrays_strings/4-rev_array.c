#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: An array input
 * @n: Number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp[];

	for (int i = 0; i < n; i++)
	{
		temp[i] = a[(n - i) - 1];
		i++;
	}
	for (int j = 0; j < n; j++)
	{
		a[j] = temp[j];
		j++;
	}
}
