#include "main.h"
#include <stdio.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: input string argument
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int value = atoi(argv[1]);
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (value < 0)
		{
			printf("0\n");
		}
		while (value > 0)
		{
			if (value >= 25)
			{
				i += value / 25;
				value = value % 25;
			}
			else if (value < 25 && value >= 10)
			{
				i += value / 10;
				value = value % 10;
			}
			else if (value < 10 && value >= 5)
			{
				i += value / 5;
				value = value % 5;
			}
			else if (value < 5 && value >= 2)
			{
				i += value / 2;
				value = value % 2;
			}
			else if (value == 1)
			{
				i += 1;
				value = value % 1;
			}
		}
		printf("%d\n", i);
		return (0);
	}
}
