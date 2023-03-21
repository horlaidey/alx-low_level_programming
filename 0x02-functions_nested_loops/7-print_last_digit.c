#include "main.h"
/**
 * print_last_digit - prints the ;last digit of a number.
 *
 * @a: an arbiutrary number.
 *
 * Return: The last digit of a number.
 */
int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
