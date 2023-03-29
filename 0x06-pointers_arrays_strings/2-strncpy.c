#include "main.h"
/**
 * *_strncpy - copy source string into dest string
 * @dest: destination string
 * @src: source string
 * @n: input string length
 * Return: The new destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i >= 0)
	{
		if (*(src + i) == '\0' || i >= n)
		{
			break;
		}
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
