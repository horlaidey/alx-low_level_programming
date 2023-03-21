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
	if (a < 0)
	{
		a *= (-1);
	}
	int result = a % 10;

	_putchar('0' + result);
	return (result);
}
