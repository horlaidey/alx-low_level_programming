#include "main.h"

/**
 * clear_bit - set a bit at a specified index to 0.
 * @n: a pointer to an unsigned long int.
 * @index: position of bit to be cleared.
 *
 * Return: 1 if successful and -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}
	i = 1 << index;

	if (*n | i)
	{
		*n ^= i;
	}
	return (1);
}
