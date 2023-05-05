#include "main.h"

/**
 * set_bit - sets a bit at an index to 1
 * @n: a pointer to an unsigned long int
 * @index: position of the bit
 * Return: 1 if successful and -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}
	i = 1 << index;
	*n = (*n | i);

	return (1);
}
