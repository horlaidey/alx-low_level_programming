#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string input parameter
 * Return: Void
 */

void rev_string(char *s)
{
	int i, j = 0;
	char *str = "";
	char temp;

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
