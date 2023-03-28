#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: integer return
 */

int _atoi(char *s)
{
	int i = 0;
	int j;

	while (i >= 0)
	{
		if (*(s + i) == '\0')
		{
			break;
		}
		if ((*(s + i) >= 48) && (*(s + i) <= 57))
		{
			j = s[i];
		}
		i++;
	}
	return (j);
}
