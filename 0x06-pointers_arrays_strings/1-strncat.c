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
	int i = 0, count = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (count < n)
	{
		*(dest + i) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		i++;
		count++;
	}
	return (dest);
}
