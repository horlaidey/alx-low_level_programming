#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: pointer to an input integer array
 * @size: size of the input array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += *(a + i);
		}
		if (i % (size - 1) == 0 && i < size * size - 1)
		{
			sum2 += *(a + i);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
