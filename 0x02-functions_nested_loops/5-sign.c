#include "main.h"
/**
 * print_sign - Prints sign of a number
 *
 * @n: Arbitrary integer value
 *
 * Return: 1 if n is positive, 0 if zero and -1 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
