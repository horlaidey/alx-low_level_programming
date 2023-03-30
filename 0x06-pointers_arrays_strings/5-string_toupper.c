#include "main.h"
/**
 * string_toupper - converts string to upper case
 * @s: input string
 *
 * Return: character of string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}

