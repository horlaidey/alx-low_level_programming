#include "main.h"
/**
 * _strcmp - compares string s1 and s2.
 * @s1: first input string.
 * @s2: second input string
 * Return: Return integer evaluation of string differences.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val;

	while (i >= 0)
	{
		val = s1[i] - s2[i];
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		if (s1[i] != s2[i])
		{
			break;
		}
		i++;
	}
	return (val);
}
