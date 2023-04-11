#include "main.h"
/**
 * _count - counts the amount of chars in a string
 * @s: the input string to be counted
 *
 * Return: integer value of the string count
 */

int _count(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - join two input string togetther
 * @s1: first input string
 * @s2: second input string
 *
 * Return: return a pointer to the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, m;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = _count(s1);
	j = _count(s2);
	k = i + j;
	ptr = malloc(k * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < i; m++)
	{
		ptr[m] = *(s1 + m);
	}
	for (m = 0 ; m < j; m++)
	{
		ptr[m + i] = *(s2 + j);
	}
	ptr[k] = '\0';
	return (ptr);
}
