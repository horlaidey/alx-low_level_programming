#include "main.h"
/**
 * _memcpy - copy memory area from src to dest
 * @dest: destination string input
 * @src: source string input
 * @n: integer input indicating amount of byte to copy
 *
 * Return: Return pointer to the dest string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;
	char *sptr = src;

	for (i = 0; i < n; i++)
	{
		*(ptr + i) = *(sptr + i);
	}
	return (ptr);
}
