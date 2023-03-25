#include <stdio.h>
/**
 * main - prints the largest prime factor of a specified number
 * Return: Always 0.
 */
int main(void)
{
	int i, j;
	long int n;

	n = 612852475143;
	i = 2;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					printf("%d", i);
				}
			}
		}
	}
	return (0);
}
