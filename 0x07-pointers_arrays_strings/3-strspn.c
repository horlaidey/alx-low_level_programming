#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: input first string
 * @accept: input second string
 * Return: return unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == *accept)
		{
			break;
		}
		i++;
	}
	return (i + 1);
}
