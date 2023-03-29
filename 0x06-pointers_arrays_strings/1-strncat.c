#include "main.h"
/**
 * *_strncat - A function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: input integer
 * Return: destination string.
 */

char *_strncat(char *dest, char *src, int n)
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
		if (*(src + count) == '\0' || count >= n)
		{
			break;
		}
		*(dest + (i + count)) = *(src + count);
		count++;
	}
	return (dest);
}
