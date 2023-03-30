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

	while (i < n)
	{
		if (*(src + i) == '\0')
		{
			dest[i] = '\0';
			break;
		}
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
