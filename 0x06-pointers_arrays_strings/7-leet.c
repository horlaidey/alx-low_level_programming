#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: Input string
 * Return: strings of characters
 */

char *leet(char *s)
{
	int count = 0;
	int i;

	cap[5] = {97, 101, 111, 116, 108};
	low[5] = {65, 69, 79, 84, 76};
	check[5] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == cap[i] || *(s + count) == low[i])
			{
				*(s + count) = check[i];
				break;
			}
		}
		count++
	}
	return (s);
}
