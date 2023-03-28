#include "main.h"
/**
 * print_array - prints n element of an array of integer n
 * @a: input array
 * @n: input integer element
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
