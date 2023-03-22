#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints number from n to 98
 *
 * @n: input number
 *
 * Return: void return
 */

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a == 98)
			{
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a == 98)
			{
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
}
