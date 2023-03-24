#include "main.h"
/**
 * print_line - print straight line
 *@n: the number of integer that determines length of the lines
 * Return: void return
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
