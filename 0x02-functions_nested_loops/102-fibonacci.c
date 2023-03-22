#include <stdio.h>
/**
 * main - Prints the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	long int i = 1;
	long int j = 2;
	long int k, x;

	printf("%d, %d", i, j);
	for (x = 2; x < 50; x++)
	{
		k = i + j;
		printf(", %d", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
