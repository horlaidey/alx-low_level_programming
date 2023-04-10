#include "main.h"
/**
 * *_strcat - appends the src string to the dest string.
 * @dest: the destination string
 * @src: the source string
 * Return: Destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	while (i >= 0)
	{
		if (*(dest + i) == '\0')
		{
			break;
		}
		i++;
	}
	for (count = 0; count < i && src[count] != '\0'; count++)
	{
		*(dest + i) = *(src + count);
		i++;
	}
	return (dest);
}
