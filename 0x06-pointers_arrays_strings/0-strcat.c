#include "main.h"
/**
 * *_strcat - appends the src string to the dest string.
 * @dest: the destination string
 * @src: the source string
 * Return: Destination string
 */

char *_strcat(char *dest, char *src)
{
	int i, count = 0;

	while (i >= 0)
	{
		if (*(dest + i) == '\0')
		{
			break;
		}
		i++;
	}
	while (count >= 0)
	{
		*(dest + (i + count)) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
