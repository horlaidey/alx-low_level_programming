#include "main.h"
/**
 * cap_string - Capitalize every first letter of
 * a word in a string
 * @s: input string
 *
 * Return: A refined string.
 */

char *cap_string(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] -= 32;
		}
		if ((s[i + 1] >= 97 && s[i + 1] <= 122) &&
(s[i] == 32 || s[i] == 44 || s[i] == 46 || s[i] == 10 || s[i] == 9))
		{
			s[i + 1] -= 32;
		}
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (s);
}
