#include "main.h"
/**
 * is_primer - checks if the prime condition is met
 * @i: the divisor integer
 * @j: Maximum possible divisor
 * @n: the source integer
 *
 * Return: integer 1 or 0 depending on the prime condition
 */

int is_primer(int i, int j, int n)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i == j && n % i != 0)
	{
		return (1);
	}
	return (is_primer(++i, j, n));
}

/**
 * is_prime_number - Checks for prime number
 * @n: input integer to be checked
 *
 * Return: 1 for prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	int divisor, max_divisor;

	if (n == 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	max_divisor = n / 2;
	divisor = 2;
	return (is_primer(divisor, max_divisor, n));
}
