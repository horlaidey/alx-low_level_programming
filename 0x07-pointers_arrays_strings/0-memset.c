#include "main.h"
/**
 * _memset - return a function that fills memory with a constant byte
 * @s: pointer to the input string
 * @b: input char to fill into s
 * @n: integer input
 *
 * Return: Returns the memory filled.
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*(ptr + i) = b;
	}
	return (ptr);
}
