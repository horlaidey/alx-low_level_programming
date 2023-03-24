#include "main.h"
/**
 * print_triangle - prints a triangle of length size
 * @size: Determines the length of the triangle
 * Return: void return
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				k = size - i;
				if (j < k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
		}
		_putchar('\n');
	}
}
