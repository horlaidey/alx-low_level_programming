#include "main.h"
/**
 * print_rev - prints a string in reverse to stdout
 * @s: The input string parameter
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		--i;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
