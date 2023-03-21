#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets a to z 10 times.
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
