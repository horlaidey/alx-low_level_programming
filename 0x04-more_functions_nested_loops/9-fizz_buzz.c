#include <stdio.h>
/**
 * main - Prints 1 to 100 in FizzBuzz style
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	int n = 1;
	printf("%d", n);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
