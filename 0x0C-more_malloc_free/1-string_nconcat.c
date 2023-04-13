#include "main.h"
/**
 * _count - counts the number of chars in a string
 * @s: the input string to be counted
 *
 * Return: the value of the chars count
 */

unsigned int _count(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenate two strings together
 * @s1: The first string
 * @s2: the second string
 * @n: the number of chars in s2 to be considered
 *
 * Return: A pointer to the concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, m, x;

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
	ptr = malloc(sizeof(char *) * i * n);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ptr[k] = *(s1 + k);
	}
	if (n >= j)
	{
		for (m = 0; m < j; m++)
		{
			ptr[k + m] = *(s2 + m);
		}
		ptr[k + j] = '\0';
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			ptr[k + x] = *(s2 + x);
		}
		ptr[k + n] = '\0';
	}
	return (ptr);
}
