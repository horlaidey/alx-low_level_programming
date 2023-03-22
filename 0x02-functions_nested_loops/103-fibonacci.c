#include <stdio.h>
/**
 * main - Prints sum of all the even fibonacci numbers less than 4million
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, j, k, sum;

	i = 1;
	j = 2;
	sum = 2;
	k = 0;
	while (k < 4000000)
	{
		k = i + j;
		if (k % 2 == 0)
		{
			sum += k;
		}
		i = j;
		j = k;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
