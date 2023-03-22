#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	long int x, i, j, k;

	i = 1;
	j = 2;
	printf("%ld, %ld", i, j);
	for (x = 2; x <= 98; x++)
	{
		k = i + j;
		printf(", %ld", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
