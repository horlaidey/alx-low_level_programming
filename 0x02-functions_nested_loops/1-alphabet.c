#include "main.h"

/**
 * print_alphabet - Prints alphabets from a to z in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int str;

	for (str = 97; str < 123; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
