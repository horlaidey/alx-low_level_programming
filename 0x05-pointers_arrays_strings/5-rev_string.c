#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string input parameter
 * Return: Void
 */

void rev_string(char *s)
{
	int i = 0;

	while (*(s + 1) != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		--i;
		_putchar(*(s + i));
	}
}
