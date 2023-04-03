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
	unsigned int k = 0;
	unsigned int j;
	int bully;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
			{
				k += 1;
				bully = 1;
				break;
			}
			else
			{
				bully = 0;
			}
		if (bully == 0)
		{
			break;
		}
		i++;
	}
	return (k);
}
