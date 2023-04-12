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
 * argstostr - convert streams of arguments to string
 * @ac: the argument count
 * @av: the array of input argument
 * Return: Return a pointer to the concatenated string of arguments
 */

char *argstostr(int ac, char **av)
{
	int i, m = 0;
	int n, j, k, x = 0;
	char *ptr;


	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		m += _count(av[i]);
	}
	ptr = malloc(m * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 1; j < ac; j++)
	{
		n = _count(av[j]);
		for (k = 0; k <= n; k++)
		{
			ptr[x + k] = *(av[j] + k);
			if (k == n)
			{
				ptr[x + k] = '\n';
			}
		}
		x += k;
	}
	return (ptr);
}
