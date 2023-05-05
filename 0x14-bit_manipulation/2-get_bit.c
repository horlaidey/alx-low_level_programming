#include "main.h"

/**
 * get_bit - get the bit at a specified index
 * @n: the input integer whose bit is to be examined
 * @index: the index refrenced
 * Return: the bit at the specify index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	if (index > 63)
		return (-1);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
}
