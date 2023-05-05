#include "main.h"

/**
 * flip_bits - evaluates number of bits needed to flip
 * to move from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
	}
	return (count);
}
