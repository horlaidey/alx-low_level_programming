#include "main.h"
/**
 * *_strcpy - copies string pointed to src to the buffer pointed to by dest
 * @dest: the buffer input
 * @src: the string input
 * Return: the buffer pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
		{
			break;
		}
		i++;
	}
	return (dest);
}
