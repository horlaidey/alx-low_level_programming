#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string input parameter
 * Return: Void
 */

void rev_string(char *s)
{
	int i, j = 0;

	while (s[i] != 0)
	{
		i++;
	}
	char *str;

	while (i > 0)
	{
		--i;
		*(str + j) = s[i];
		j++;
	}
	s = str;
}
