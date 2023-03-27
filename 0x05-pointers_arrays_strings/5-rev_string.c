#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string input parameter
 * Return: Void
 */

void rev_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		--i;
		putchar(s[i]);
	}
}
