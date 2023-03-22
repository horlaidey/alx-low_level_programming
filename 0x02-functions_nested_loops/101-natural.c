#include <stdio.h>
/**
 * main - computes sum of multiple of 3 and 5 below 1024
 *
 * Return: Always o (success
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
