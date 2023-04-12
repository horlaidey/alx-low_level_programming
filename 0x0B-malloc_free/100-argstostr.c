#include "main.h"
/**
 * _count - counts the number of chars in a string
 * @s: the string to be counted
 * Return: integer value of the chars count in s
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
 * _concat - join two string together and return the result
 * @s1: the first string
 * @s2: the second string
 * Return: The concatenated string
 */

char *_concat(char *s1, char *s2)
{
	int i, j, n, m = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	i = _count(s1);
	j = _count(s2);
	n = i + j;
	*(s1 + j) = '\n';
	while (*(s2 + m) != '\0')
	{
		j++;
		*(s1 + j) = *(s2 + m);
		m++;
	}
	*(s1 + n) = '\n';
	return (s1);
}
/**
 * argstostr - convert streams of arguments to string
 * @ac: the argument count
 * @av: the array of input argument
 * Return: Return a pointer to the concatenated string of arguments
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *ptr = "";

	av = malloc(ac * sizeof(char *));
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		_concat(ptr, av[i]);
	}
	return (ptr);
}
